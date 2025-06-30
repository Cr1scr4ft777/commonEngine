#pragma once

#include "core/Base.h"
#include "core/String.h"

namespace CommonEngine { namespace events {
	class COMMON_API Event {
	private:
		friend class EventDispatcher;
	public:
		enum class Type {
			None = 0,
			KEY_PRESSED,
			KEY_RELEASED,

			MOUSE_PRESSED,
			MOUSE_RELEASED,
			MOUSE_MOVED,

			WINDOW_RESIZE,
			WINDOW_CLOSE
		};
		enum Category {
			None = 0,
			ApplicationCategory = BIT(0),
			InputCategory = BIT(1),
			KeyboardCategory = BIT(2),
			MouseCategory = BIT(3),
			MouseButtonCategory = BIT(4)
		};
	protected:
		bool m_Handled;
		Type m_Type;
	protected:
		Event(Type t);
	public:
		inline Type GetType() const { return m_Type; }
		inline bool IsHandled() const { return m_Handled; }
		virtual String ToString() const = 0;
		static String TypeToString(Type type);
	};
} }