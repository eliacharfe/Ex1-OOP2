#pragma once
#include "BaseFunction.h"

class SinX : public BaseFunction
{
public:
	SinX();

	void print(const string s) const override;
	double eval(const double x) const override;

	string getString() const override;

private:
	string m_str;
};