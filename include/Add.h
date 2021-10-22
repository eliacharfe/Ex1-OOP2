#pragma once
#include "Utillities.h"
#include "ComplexFunc.h"

class Add : public ComplexFunc
{
public:
	Add(shared_ptr < BaseFunction > funcA, shared_ptr < BaseFunction > funcB);

	void print(const string s) const override;
	double eval(const double x) const override;
	string getString() const override;

private:
	string m_str;
};
