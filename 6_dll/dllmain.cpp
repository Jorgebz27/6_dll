// dllmain.cpp : Define el punto de entrada de la aplicación DLL.
#include "pch.h"
#include <string>

extern "C"
{
    __declspec(dllexport) const char* GetCodename()
    {
        const char* msg = "Codename Aldo";
        return msg;
    }

    __declspec(dllexport) double sumar(double a, double b)
    {
        return a + b;
    }

    __declspec(dllexport) std::string* concatenacion(std::string* A, std::string* B, std::string* C)
    {
        return A + B + C;
    }
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

