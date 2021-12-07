#include "console.h"

std::string donecolor()
{
#ifdef _WIN32
    return "";
#endif

    return "\u001b[32m";
}

std::string errcolor()
{
#ifdef _WIN32
    return "";
#endif

    return "\u001b[31m";
}

std::string warncolor()
{
#ifdef _WIN32
    return "";
#endif

    return "\u001b[33m";
}

std::string outputcolor()
{
    return "";
}
