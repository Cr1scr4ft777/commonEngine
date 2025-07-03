#pragma once
#include "Events.h"

namespace commonengine { namespace events {

	class EventDispatcher {
	private:
		Event& m_Event;

	public:
		explicit EventDispatcher(Event& event)
			: m_Event(event) {}

		/// <summary>
		/// ejemplo:
		/// dispatcher.Dispatch<KeyPressedEvent>([](KeyPressedEvent& e) {
		///		std::cout << "Se manejó KeyPressed con código: " << e.GetKeyCode() << std::endl;
		///		return true;
		///	});
		/// </summary>
		/// <typeparam name="T"></typeparam>
		/// <typeparam name="F"></typeparam>
		/// <param name="func"></param>
		/// <returns></returns>
		template<typename T, typename F>
		bool Dispatch(F&& func) {
			if (m_Event.GetTypeEvent() == T::GetStaticType()) {
				m_Event.m_Handled = func(static_cast<T&>(m_Event));
				return true;
			}
			return false;
		}
	};

}}