#include <windows.h>
#include <stdlib.h>
#include <stdio.h.>

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    FILE* fp;
    AllocConsole();
    freopen_s(&fp, "CONOUT$", "w", stdout);

    printf("Success! or whatever\n");
    while (!GetAsyncKeyState(VK_END)) 
    {
        //Do nothing
    }

    return TRUE;
}

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls((HMODULE)hInstance);
            CreateThread(0, 0, MainThread, 0, 0, 0);
            break;
        default:
            break;
    }

    return TRUE;
}
