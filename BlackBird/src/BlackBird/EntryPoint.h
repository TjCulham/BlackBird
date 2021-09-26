#pragma once

#ifdef BB_PLATFORM_WINDOWS

extern BlackBird::Application* BlackBird::CreateApplication();

int main(int argc, char** argv) {

	auto app = BlackBird::CreateApplication();
	app->Run();
	delete app;

}

#endif