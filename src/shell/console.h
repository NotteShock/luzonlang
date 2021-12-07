#ifndef SHELLCONSOLE_H
#define SHELLCONSOLE_H

#include <iostream>

using namespace std;

class ShellConsole
{
public:
    static std::string donecolor();
    static std::string errcolor();
    static std::string warncolor();
    static std::string outputcolor();
};

#endif // SHELLCONSOLE_H
