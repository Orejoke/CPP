#include "Guard.h"

using namespace std;

Guard::Guard(int newSum):sum(newSum){};
Guard::Guard(const Guard& guard):sum(guard.sum){};
Guard& Guard::operator=(const Guard& guard){
    if(this == &guard) return *this;
    sum = guard.sum;
    return *this;
}