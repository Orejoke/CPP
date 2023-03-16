#pragma once
#include <iostream>
#include <string>
#include "Forward.h"


using namespace std;


class PowerForward : public Forward
{
    private:
        bool isPower;
    public:
        PowerForward(bool = false);
        PowerForward(const PowerForward& powerForward);
        PowerForward& operator= (const PowerForward& powerForward);
        
        void calculate();
};