#pragma once
#include "Event.h"
namespace commonengine{ namespace events{
	/// <summary>
	/// Interfaz de Oyente de Eventos
	/// </summary>
	class COMMON_API IEventListener {
	public:
		virtual ~IEventListener() = default;

		/// <summary>
		/// ejemplo de uso
		/// class PlayerController : public IEventListener {
		///	public:
		///		bool OnEvent(Event& e) override {
		///			EventDispatcher dispatcher(e);
		///			dispatcher.Dispatch<KeyPressedEvent>([this](KeyPressedEvent& e) {
		///				if (e.GetKeyCode() == 87) { // W
		///					std::cout << "Player se mueve hacia adelante." << std::endl;
		///					return true;
		///				}
		///				return false;
		///			});
		///			return e.Handled;
		///		}
		///	};
		/// </summary>
		/// <param name="e"></param>
		/// <returns></returns>
		virtual bool OnEvent(Event& e) = 0;
	};

} }