#ifndef INPUTLOOP_H
#define INPUTLOOP_H

#include <iostream>
#include "inputparser.h"

using namespace std;

class InputLoop
{
public:
    InputLoop();
    void start();
    void stop();
    bool isrunning();

private:
    bool running;
    string shell;
};

#endif // INPUTLOOP_H
