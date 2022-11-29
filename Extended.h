#pragma once

#ifndef XRCORE_API
using u32 = unsigned int;
using u8 = unsigned char;
using xstring = std::string;
using string128 = char[128];
#elif !defined(PLATFORM_STRING) // no need for Oxy
using xstring = xr_string;
#endif

// @ Цвета для консоли
inline int DEFAULT_COLOR = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
inline int ERROR_COLOR = 28;
inline int OK_COLOR = 26;
inline int COLOR_DEFAULT = 27;

#ifdef USE_CORE
#pragma unmanaged
#include "../../engine.vc2008/xrCore/xrCore.h"
#pragma comment(lib, "xrCore.lib")
#pragma managed
#endif

#define STB_IMAGE_WRITE_IMPLEMENTATION

#pragma managed
#include <vcclr.h>

template <int Size>
inline void ConvertWidecharToAscii(const wchar_t* pData, unsigned int size, char(&OutStr)[Size])
{
	WideCharToMultiByte(CP_ACP, 0, pData, size, OutStr, Size, nullptr, nullptr);
}

template <int Size>
inline void ConvertDotNetStringToAscii(::System::String^ InStr, char(&OutStr)[Size])
{
	pin_ptr<const wchar_t> pinString = PtrToStringChars(InStr);
	ConvertWidecharToAscii(pinString, InStr->Length, OutStr);
}