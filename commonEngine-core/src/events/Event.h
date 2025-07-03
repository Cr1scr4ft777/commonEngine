#pragma once

#include "core/Base.h"
#include "core/String.h"

namespace commonengine {namespace events {

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
				virtual const char* GetName() const = 0;
			protected:
				Event(Type t);
			public:
				virtual Type GetEventType() const = 0;
				inline bool IsHandled() const { return m_Handled; }
				virtual String ToString() const { return GetName(); };
				static String TypeToString(Type type);
				virtual int GetCategoryFlags() const = 0;

				inline bool IsInCategory(Category category) const {
					return GetCategoryFlags() & category;
				}

				virtual ~Event() = default;
		};
#define EVENT_CLASS_TYPE(type) \
	static Event::Type GetStaticType() { return Event::Type::type; } \
	virtual Event::Type GetEventType() const override { return GetStaticType(); } \
	virtual const char* GetName() const override { return #type; }

#define EVENT_CLASS_CATEGORY(category) \
	virtual int GetCategoryFlags() const override { return category; }

}}