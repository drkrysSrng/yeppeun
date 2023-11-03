#include <iostream>
#include <windows.h>

char fuck_boys[] = "hckcmp";


int main()
{
    char buff[50] = { 0 };
    wprintf(L"Treak or Treat!! Enter the key: ");
    gets_s(buff, sizeof(buff));

    if (strcmp((CHAR*)fuck_boys, buff)) {
        MessageBoxA(0, "incorrecto", "Treat!! Happy Hckhalloween", 0);
        exit(1);
    }

    MessageBoxA(0, "Bien Hecho", "Trick!!! Happy Hckhalloween", 0);
    return 0;
}

