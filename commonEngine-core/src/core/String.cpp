#include "String.h"
#include "CommonEnginePCH.h"

namespace commonengine{
	std::vector<String> SplitString(const String& string, const String& delimiters) {
		std::vector<String> result;
		size_t start = 0;
		size_t end = string.find_first_of(delimiters);

		while (end != String::npos) {
			if (end > start)
				result.push_back(string.substr(start, end - start));
			start = end + 1;
			end = string.find_first_of(delimiters, start);
		}
		if (start < string.size())
			result.push_back(string.substr(start));

		return result;
	}

	std::vector<String> SplitString(const String& string, char delimiter) {
		return SplitString(string, String(1, delimiter));
	}

	std::vector<String> Tokenize(const String& string) {
		return SplitString(string, " \t\n");
	}

	std::vector<String> GetLines(const String& string) {
		return SplitString(string, '\n');
	}

	bool StringContains(const String& string, const String& chars) {
		return string.find(chars) != String::npos;
	}

	bool StartsWith(const String& string, const String& start) {
		return string.rfind(start, 0) == 0;
	}
}