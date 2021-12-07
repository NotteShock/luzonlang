#include "inputloop.h"

InputLoop::InputLoop()
{
    running = false;
    shell = "";
}

void InputLoop::start()
{
    if (running)
    {
        return;
    }

    running = true;

    do {
        cout << "luzonshell >> ";
        getline(cin, shell);
        InputParser::parse(shell);
    } while (running);
}

void InputLoop::stop()
{
    if (!running)
    {
        return;
    }

    running = false;
}

bool InputLoop::isrunning()
{
    return running;
}
