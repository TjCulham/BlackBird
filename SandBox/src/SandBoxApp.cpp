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

int main() {

	SandBox* sandbox = new SandBox();
	sandbox->Run();
	delete sandbox;

 }