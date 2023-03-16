#pragma once
#include <iostream>
#include <string>
#include "Forward.h"


using namespace std;


class SmallForward : public Forward
{
    private:
        bool isValid;
    public:
        SmallForward(bool = false);
        SmallForward(const SmallForward& smallForward);
        SmallForward& operator= (const SmallForward& smallForward);
        void validateHeight();
};