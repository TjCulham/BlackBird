#include <BlackBird.h>

class SandBox : public BlackBird::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

BlackBird::Application* BlackBird::CreateApplication()
{
	return new SandBox();
}