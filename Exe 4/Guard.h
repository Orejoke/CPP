#pragma once
#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class Guard : public Player
{
    protected:
        int sum;
    public:
        Guard(int = 0);
        Guard(const Guard& guard);
        int getSum() const { return sum;}
        void setSum(int newSum) { sum = newSum; }
        Guard& operator= (const Guard& guard); 
        virtual float calculate() = 0;       
};