#include "first_app.hpp"
		
namespace vtwelve {

void FirstApp::run() {
	while (!vtwelvewindow.shouldClose()) {
		glfwPollEvents();
	}
}
} //namespace vtwelve