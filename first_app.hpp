#pragma once

#include "vtwelve_window.hpp"

namespace vtwelve {
class FirstApp {

	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		vtwelveWindow vtwelvewindow{ WIDTH, HEIGHT, "VULKAN" };
};
}