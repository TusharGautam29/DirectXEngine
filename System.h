#pragma once
#ifndef _SYSTEMCLASS_H
#define _SYSTEMCLASS_H

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include "Input.h"
#include "Application.h"

class System {
public:
	System();
	System(const System&);

	~System();
	int initialize();
	void run();
	void shutdown();

	LRESULT CALLBACK messageHandler(HWND, UINT, WPARAM, LPARAM);
private:
	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

private:
	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;

	Input* m_Input;
	Application* m_Application;
};

static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

static System* ApplicationHandle = 0;


#endif
