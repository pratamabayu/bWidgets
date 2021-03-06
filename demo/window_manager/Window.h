/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Original work Copyright (c) 2018 Julian Eisel
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#pragma once

#include "bwUtil.h"

struct GLFWwindow;

namespace bWidgets {
class bwPoint;
}

namespace bWidgetsDemo {

class Window
{
public:
	Window(
	        const std::string& name,
	        unsigned int size_x = 600, unsigned int size_y = 350);
	~Window();

	enum WindowAction {
		WINDOW_ACTION_CONTINUE,
		WINDOW_ACTION_CLOSE,
	};
	WindowAction processEvents();
	void draw();

	const bWidgets::bwPoint getCursorPosition() const;
	void handleResizeEvent(const int new_win_x, const int new_win_y);

	bWidgets::bwPtr<class Stage> stage;

	GLFWwindow& getGlfwWindow() const;

	int getWidth() const;
	int getHeight() const;

	friend bool operator==(const Window& lhs, const Window& rhs)
	{
		if (lhs.glfw_window == rhs.glfw_window) {
			assert(lhs.stage == rhs.stage);
			assert(lhs.width == rhs.width);
			assert(lhs.height == rhs.height);
			return true;
		}
		return false;
	}


private:
	GLFWwindow* glfw_window;
	unsigned int VertexArrayID = 0;

	int width, height;
};

} // namespace bWidgetsDemo
