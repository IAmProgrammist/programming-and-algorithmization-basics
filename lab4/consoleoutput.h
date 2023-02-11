//
// Created by vladi on 22.10.2022.
//

#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_CONSOLEOUTPUT_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_CONSOLEOUTPUT_H

#ifdef __has_include
    #if __has_include(<windows.h>)
        #include <windows.h>
    #else
        #define CP_UTF8 0
        void SetConsoleOutputCP(int code) {};
    #endif
#else
    #include <windows.h>
#endif

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_CONSOLEOUTPUT_H
