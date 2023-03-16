#include "Forward.h"

Forward::Forward(float newRatio) : ratio(newRatio) {}
Forward::Forward(const Forward& forward) : ratio(forward.ratio){}
Forward& Forward::operator= (const Forward& forward){
    if(this == &forward) return *this;
    ratio = forward.ratio;
    return *this;
}

