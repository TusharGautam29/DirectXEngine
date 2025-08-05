#include "System.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	System* system;	
	int result;
	system = new System;

	result = system->initialize();
	if (result)
		system->run();


	system->shutdown();
	delete system;

	return 0;
}