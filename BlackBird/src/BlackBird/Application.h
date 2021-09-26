#pragma once

#include "Core.h"


namespace BlackBird {
	
	class BLACKBIRD_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
