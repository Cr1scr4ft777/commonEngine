# CommonEngine

CommonEngine es un motor gráfico modular y extensible escrito en C++, diseñado para ser **multiplataforma**, **eficiente** y orientado a la **longevidad del software**. Su arquitectura está pensada para facilitar tanto el desarrollo de juegos como su distribución en múltiples plataformas.

---

## ✨ Características principales (en desarrollo)

- 🧩 Arquitectura basada en plugins
- 🧠 Separación clara entre motor gráfico y motor de juego
- 🖼️ Soporte para eventos personalizados (teclado, ratón, ventana, etc.)
- 🔁 Hot-reloading (planificado)
- 🧪 Herramientas integradas (debugger, profiler, editor visual)
- 📦 Sistema de recursos y scripting embebido (opcional)
- ⚙️ Compilación como librería estática (por ahora)

---

## 📁 Estructura del Proyecto

```
CommonEngine/
├── Core/               # Definiciones base, macros, utilidades
├── Events/             # Sistema de eventos (base + tipos concretos)
├── Graphics/           # (por implementar) Renderizado y recursos
├── Game/               # (por implementar) Motor de juego separado
├── Window/             # (por implementar) Abstracción multiplataforma de ventanas
├── Resources/          # (por implementar) Carga y gestión de recursos
├── Platform/           # Código específico por plataforma (Windows, Linux, etc.)
├── Editor/             # (planificado) Interfaz de usuario
├── CMakeLists.txt      # Soporte para CMake (opcional)
├── README.md
└── .gitignore
```

---

## 🔧 Compilación

Actualmente el proyecto está pensado para **Visual Studio 2022** con C++17 (o superior). Se compila como **librería estática** (`.lib`) y no requiere dependencias externas.

### Requisitos

- Visual Studio Community 2022
- C++17 o superior
- Sistema operativo: Windows (Linux planeado)

---

## 🛤️ Plan de desarrollo

1. [x] Sistema de eventos base
2. [ ] Eventos concretos (`KeyPressed`, `MouseMoved`, etc.)
3. [x] Dispatcher de eventos
4. [ ] Sistema de ventanas multiplataforma
5. [ ] Renderizado básico (OpenGL / Vulkan)
6. [ ] Motor de juego (escenas, entidades)
7. [ ] Editor visual y herramientas integradas

---

## 🧠 Filosofía

> **Diseñado para perdurar.**  
El objetivo de CommonEngine es ser una base sólida y extensible, escrita desde cero, que permita un desarrollo transparente, optimizado y mantenible a lo largo del tiempo.

---

## 📜 Licencia

**Licencia GNU GPLv3** – Este proyecto está licenciado bajo los términos de la [GNU General Public License v3.0](LICENSE), lo que garantiza libertad de uso, modificación y distribución bajo las mismas condiciones.

---

## ✍️ Autor

Desarrollado por Cristian Daza.  
Colaborador principal del diseño, arquitectura y desarrollo del motor gráfico desde su fase inicial.
