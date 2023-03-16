#include "Fraction.h"

using namespace std;

Fraction::Fraction(int nNum, int nDen) : num(nNum), den(nDen){}

Fraction::Fraction(const Fraction& frac) : num(frac.num), den(frac.den){}

Fraction& Fraction::operator = (const Fraction& frac){
    if(this == &frac) return *this;
    num = frac.num;
    den = frac.den;
    return *this;
}

Fraction& Fraction::operator += (const Fraction& frac){
    Fraction ((num * frac.den + den * frac.num), (den * frac.den));
    reduce();
    return *this;
}

Fraction& Fraction::operator -= (const Fraction& frac){
    Fraction ((num * frac.den - den * frac.num), (den * frac.den));
    reduce();
    return *this; 
}

Fraction Fraction::operator + (const Fraction& frac) const{
    Fraction result = *this;
    result += frac;
    result.reduce();
    return result;
}

Fraction Fraction::operator ++ (int something){
    Fraction tmp(*this);
    tmp.num += tmp.den;
    tmp.reduce(); 
    return tmp;
}

Fraction& Fraction::operator ++ (){
    num += den;
    reduce();
    return *this;
}

Fraction Fraction::operator ()(){
      return (float) num / den;
}

bool Fraction::operator == (const Fraction& frac) const{
    if(num == frac.num && den == frac.den)
        return true;
    return false;
}

bool Fraction::operator < (const Fraction& frac) const{
    float first = num / den, sec = frac.num / frac.den;
    if(first < sec)
        return true;
    return false;
}

Fraction Fraction::operator !() const{
    Fraction tmp(this->den, this->num);
    return tmp; 
}

ostream & operator<<(ostream & out, const Fraction& frac)
{
	out << frac.getNumerator() << "/" << frac.getDenominator() << endl;
	return out;
}

istream & operator>>(istream& in, Fraction& frac)
{
	int nNum, nDen;
	in >> nNum >> nDen;
    frac.setNumerator(nNum);
    frac.setDenominator(nDen);
	return in;
}

void Fraction::reduce(){
	int n = num < 0 ? -num : num;
	int d = den;
	int large = n > d ? n : d;
	int gcd = 0;
	for (int i = large; i>= 2; i--)
		if(num % i == 0 && den % i == 0){
			gcd = i;
			break;
		}
	if (gcd != 0) {
		num /= gcd;
		den /= gcd;
		}
}