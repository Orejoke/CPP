#pragma once
#include <iostream>

using namespace std;

class Fraction
{
    protected:
        int num, den;
    public:
        Fraction(int = 0, int = 1);
        Fraction(const Fraction& frac);

        int getNumerator() const {return num; }
        void setNumerator(int newNum) { num = newNum; }
        int getDenominator() const {return den; }
        void setDenominator(int newDen) { den = newDen; }

        Fraction& operator = (const Fraction& frac);
        Fraction& operator += (const Fraction& frac);//int and float included
        Fraction& operator -= (const Fraction& frac);//The same as += but in decreasing
        Fraction operator + (const Fraction& frac) const;
        Fraction operator ++ (int something);
        Fraction& operator ++ ();
        Fraction operator ()();

        bool operator == (const Fraction& frac) const;
        bool operator < (const Fraction& frac) const;
        Fraction operator !() const;

        void reduce();


};

ostream& operator << (ostream& out, const Fraction& frac);
istream& operator >> (istream& in, Fraction& frac);