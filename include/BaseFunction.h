#pragma once
#include "Utillities.h"

class BaseFunction
{
public:
	BaseFunction();

	virtual void print(const string s) const = 0;
	virtual double eval(const double x) const = 0;
	virtual string getString() const = 0;

private:

};