#pragma once
#include "Event.h"
#include "game/maths/Vec2D.h"
namespace commonengine {namespace events {
	class COMMON_API MouseButtonEvent : public Event {
	protected:
		int m_Button;
		maths::Vec2D m_Posicion;
		MouseButtonEvent(int button, float x, float y, Event::Type t)
			: m_Button(button), m_Posicion(x,y), Event(t){ }
	public:
		inline int GetButtonCode() const { return m_Button; }
		const maths::Vec2D& GetPosition() const { return m_Posicion; }
		EVENT_CLASS_CATEGORY(MouseCategory | InputCategory)
	};

	class COMMON_API MousePressedEvent : public MouseButtonEvent {
	public:
		MousePressedEvent(int button, float x, float y)
			: MouseButtonEvent(button,x,y,Event::Type::MOUSE_PRESSED) { }
		

		EVENT_CLASS_TYPE(MOUSE_PRESSED)

	};

	class COMMON_API MouseReleasedEvent : public MouseButtonEvent {
	public:
		MouseReleasedEvent(int button, float x, float y)
			: MouseButtonEvent(button,x,y,Event::Type::MOUSE_RELEASED){ }
		EVENT_CLASS_TYPE(MOUSE_RELEASED)
	};

	class COMMON_API MouseMovedEvent : public Event {
	private:
		maths::Vec2D m_Position;
		bool m_Dragged;
	public:
		MouseMovedEvent(float x, float y, bool dragged)
			: m_Position(x,y), m_Dragged(dragged), Event(Event::Type::MOUSE_MOVED){ }

		EVENT_CLASS_CATEGORY(InputCategory | MouseCategory)
		EVENT_CLASS_TYPE(MOUSE_MOVED)
	};
}}