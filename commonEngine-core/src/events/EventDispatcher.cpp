#include "EventDispatcher.h"

namespace commonengine { namespace events {
	template<typename T, typename F>
	inline bool EventDispatcher::Dispatch(F&& func)	{
		if (m_Event.GetTypeEvent() == T::GetStaticType()) {
			m_Event.m_Handled = func(static_cast<T&>(m_Event));
			return true;
		}
		return false;
	}
} }
