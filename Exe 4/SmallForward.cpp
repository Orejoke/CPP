#include "SmallForward.h"

SmallForward::SmallForward(bool isNewValid) : isValid(isNewValid) {}
SmallForward::SmallForward(const SmallForward& SmallForward) : isValid(SmallForward.isValid){}
SmallForward& SmallForward::operator= (const SmallForward& SmallForward){
    if(this == &SmallForward) return *this;
    isValid = SmallForward.isValid;
    return *this;
}

void SmallForward::validateHeight(){
    float height = Player::getHight();
    if (height > 1.95)
    {
        cout << "The player is not standing the players' requirements " << endl;
        isValid = false;    
    }
    isValid = true;
}

        

        