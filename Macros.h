#pragma once
#define LOG_HRESULT(hr) { \
    char msg[256]; \
    sprintf_s(msg, "D3D Error at line %d: HRESULT = 0x%08X\n", __LINE__, hr); \
    OutputDebugStringA(msg); \
}