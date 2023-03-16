#include "ShootingGuard.h"

using namespace std;

ShootingGuard::ShootingGuard(int newSum):sumTrying(newSum){};
ShootingGuard::ShootingGuard(const ShootingGuard& shootingGuard):sumTrying(shootingGuard.sumTrying){};
ShootingGuard& ShootingGuard::operator=(const ShootingGuard& shootingGuard){
    if(this == &shootingGuard) return *this;
    sumTrying = shootingGuard.sum;
    return *this;
}
float ShootingGuard::calculate(){
    
    sum = Player::getSumPoints();
    sumTrying = Player::getThrow2() + Player::getThrow3(); 
    if(sum == 0) {cout << "Can't divide by zero." << endl; return -1;}
    float ratio = sumTrying / sum;
    if (ratio < 0.3 )
    {
        cout << "The ratio is too low!" << endl;
    }
    
    return ratio; 
}