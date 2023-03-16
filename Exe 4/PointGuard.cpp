#include "PointGuard.h"

PointGuard::PointGuard(float pointGuard) : ratio(pointGuard) {}
PointGuard::PointGuard(const PointGuard& pointGuard) : ratio(pointGuard.ratio){}
PointGuard& PointGuard::operator= (const PointGuard& pointGuard){
    if(this == &pointGuard) return *this;
    ratio = pointGuard.ratio;
    return *this;
}
float PointGuard::calculate(){
    
    int sumAssists = Player::getAssists();
    int sumTotalScores = Player::getSumPoints();
    if(sumTotalScores == 0) {cout << "Can't divide by zero." << endl; return -1;}
    float ratio = sumAssists/sumTotalScores;
    if (ratio)
    {
        cout << "The ratio is too low!" << endl;
    }
    
    return ratio; 
}
        