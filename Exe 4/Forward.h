#pragma once
#include <iostream>
#include <string>
#include "Player.h"


using namespace std;


class Forward : public Player
{
    private:
        float ratio;
    public:
        Forward(float = 0.0);
        Forward(const Forward& forward);
        Forward& operator= (const Forward& forward);
        

        float getRatio() const{return ratio;}
        void setRatio(float newTotal) {ratio = newTotal;} 

};