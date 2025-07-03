#pragma once
#include "Event.h"

namespace commonengine { namespace events {
	class COMMON_API KeyEvent : public Event {
		protected:
			int m_KeyCode;
			KeyEvent(int key,Event::Type type)
				: m_KeyCode(key), Event(type) {}
		public:
			inline int GetKeyCode() const { return m_KeyCode; }
			EVENT_CLASS_CATEGORY(KeyboardCategory | InputCategory)
	};

	class COMMON_API KeyPressedEvent : public KeyEvent {
		public:
			KeyPressedEvent(int key)
				: KeyEvent(key,Event::Type::KEY_PRESSED){ }

			String ToString() const override {
				return "KeyPressedEvent: " + StringFormat::ToString(m_KeyCode);
			}

			EVENT_CLASS_TYPE(KEY_PRESSED)
	};

	class COMMON_API KeyReleasedEvent : public KeyEvent {
	public:
		KeyReleasedEvent(int key)
			: KeyEvent(key,Event::Type::KEY_RELEASED) { }

		String ToString() const override {
			return "KeyReleasedEvent: " + StringFormat::ToString(m_KeyCode);
		}

		EVENT_CLASS_TYPE(KEY_RELEASED)
	};
} }