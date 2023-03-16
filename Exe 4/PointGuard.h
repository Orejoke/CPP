#pragma once
#include <iostream>
#include <string>
#include "Guard.h"


using namespace std;


class PointGuard : public Guard
{
    private:
        float ratio;
    public:
        PointGuard(float = 0.0);
        PointGuard(const PointGuard& pointGuard);
        PointGuard& operator= (const PointGuard& pointGuard);
        
        float calculate();

        float getTotalPointGuard() const {return ratio;};
        void setTotalPointGuard(float newTotal) {ratio = newTotal;} 

};