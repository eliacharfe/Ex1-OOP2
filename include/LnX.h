#pragma once
#include "BaseFunction.h"

class LnX : public BaseFunction
{
public:
	LnX();

	void print(const string s) const override;
	double eval(const double x) const override;
	string getString() const override;

private:
	string m_str;
};