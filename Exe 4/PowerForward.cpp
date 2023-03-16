
#include "PowerForward.h"

PowerForward::PowerForward(bool isNewPower) : isPower(isNewPower) {}
PowerForward::PowerForward(const PowerForward& powerForward) : isPower(powerForward.isPower){}
PowerForward& PowerForward::operator= (const PowerForward& powerForward){
    if(this == &powerForward) return *this;
    isPower = powerForward.isPower;
    return *this;
}

void PowerForward::calculate(){
    int blocks = Player::getBlocks();
    int sumPoints = Player::getSumPoints();
    if (sumPoints != 0)
    {
        float newRatio = blocks / sumPoints;
        if (newRatio < 0.25)
            {
                cout << "The ratio is too low!" << endl;
            }
    }else{

        cout << "You didn't score points, No ratio to calculate" << endl;
    }
}

        

        