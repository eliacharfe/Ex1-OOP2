#pragma once
#include "Utillities.h"
#include "BaseFunction.h"

class LogN : public BaseFunction
{
public:
	LogN(const int base, shared_ptr < BaseFunction > function);

	void print(const string s) const override;
	double eval(const double x)const  override;
	string getString() const override;

private:
	int m_base;
	shared_ptr < BaseFunction > m_function;
	string m_str;
};