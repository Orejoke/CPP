#pragma once
#include <iostream>
#include <string>
#include "Guard.h"


using namespace std;


class ShootingGuard : public Guard
{
    private:
        int sumTrying;
    public:
    public:
        ShootingGuard(int = 0);
        ShootingGuard(const ShootingGuard& shootingGuard);
        int getSumTrying() const { return sumTrying;}
        void setSumTrying(int newSum) { sumTrying = newSum; }
        ShootingGuard& operator= (const ShootingGuard& shootingGuard); 
        float calculate(); 
    
};