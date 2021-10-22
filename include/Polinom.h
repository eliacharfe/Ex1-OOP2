#pragma once
#include "BaseFunction.h"
 
class Polinom : public BaseFunction
{
public:
	Polinom(vector < double > coefficients);

	void print(const string s) const override;
	double eval(const double x) const override;
	string getString() const override;

private:
	vector < double > m_coefficients;
	string m_str;
};