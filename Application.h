#pragma once
#ifndef _APPLICATIONCLASS_H_
#define _APPLICATIONCLASS_H_

#include <windows.h>
// GLOBALS //
/////////////
const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.3f;

class Application {
public:
	Application();
	Application(const Application&);
	~Application();
	bool Initialize(int screenWidth, int screenHeight, HWND hwnd);
	void Shutdown();
	bool Frame();
	bool Render();
};
#endif