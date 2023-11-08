#pragma once

#include "KeyCodes.h"

#include <glm/glm.hpp>

namespace Walnut {

	class Input
	{
	public:
		static bool IsKeyDown(KeyCode keycode);
		static bool IsMouseButtonDown(MouseButton button);

		static glm::vec2 GetMousePosition();
		static void SetMousePosition(const double& x, const double& y);

		static void SetCursorMode(CursorMode mode);
	};

}
