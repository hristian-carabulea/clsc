// clsc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdlib.h> /*for system()*/
using namespace std;

#ifdef __unix__                          /* __unix__ is usually defined by compilers targeting Unix systems */
#define OS_Windows 0
#elif defined(_WIN32) || defined(WIN32)  /* _Win32 is usually defined by compilers targeting 32 or 64 bit Windows systems */
#define OS_Windows 1
#include <windows.h>
#endif

int main() {
    if (OS_Windows) {
        system("CLS");
    }
    else
        system("clear");

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
