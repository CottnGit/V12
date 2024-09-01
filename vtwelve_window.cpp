#include "vtwelve_window.hpp"

namespace vtwelve {

	vtwelveWindow::vtwelveWindow(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name } {
		initWindow();
	}

	vtwelveWindow::~vtwelveWindow() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void vtwelveWindow::initWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
} //namespace vtwelve