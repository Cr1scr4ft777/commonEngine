#pragma once

#include "Base.h"



namespace CommonEngine {
	using String = std::string;

	class COMMON_API StringFormat {
	public:
		template<typename T>
		static String Hex(const T& input) {
			char buffer[16];
			std::snprintf(buffer, sizeof(buffer), "%02x", input);
			return String(buffer);
		}

		static String Float(float value, uint places = 2) {
			char buffer[32];
			std::snprintf(buffer, sizeof(buffer), "%.*f", places, value);
			return String(buffer);
		}

		template<typename T>
		static String ToString(const T& input) {
			return std::to_string(input);
		}
	};

	std::vector<String> SplitString(const String& string, const String& delimiters);
	std::vector<String> SplitString(const String& string, char delimiter);
	std::vector<String> Tokenize(const String& string);
	std::vector<String> GetLines(const String& string);

	bool StringContains(const String& string, const String& chars);
	bool StartsWith(const String& string, const String& start);
}