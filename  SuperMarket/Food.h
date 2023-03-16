#pragma once

#include "Product.h"

class Food : public Product
{
public:
	Food(const string& name, double price, int calories) : Product(name, price), m_calories(calories) {}
    Food() : m_calories(0)  {}
	virtual ~Food() {}


public: 
    istream& read(istream& in)override;
    virtual ostream& write(ostream& out);

private:
    int		m_calories;
};