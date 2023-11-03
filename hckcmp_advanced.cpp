#include <iostream>
#include <windows.h>

char fuck_boys[] = "FuckBoysClub";
char key[] = "Dakeyis69";
char url[] = "http://whereismyip.com";
char pass[] = "decryptpass123";


int main()
{
    char buff[50] = { 0 };
    char buff2[50] = { 0 };
    wprintf(L"Treak or Treat!! Enter the key: ");
    gets_s(buff, sizeof(buff));

    strncpy_s(buff2, fuck_boys, sizeof(fuck_boys));

    if (strcmp((CHAR*)key, (CHAR*)key)) {
        MessageBoxA(0, "incorrecto", "Treat!! Happy Hckhalloween", 0);
    }

    if (strcmp((CHAR*)fuck_boys, buff)) {
        MessageBoxA(0, "incorrecto", "Treat!! Happy Hckhalloween", 0);
        exit(1);
    }

    MessageBoxA(0, "This is halloweeeen", "Trick!!! Happy Hckhalloween", 0);
    return 0;
}

