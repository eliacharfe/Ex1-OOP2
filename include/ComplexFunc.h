#pragma once
#include "Utillities.h"
#include "BaseFunction.h"

class ComplexFunc : public BaseFunction
{
public:
	ComplexFunc();
	ComplexFunc(shared_ptr < BaseFunction > funcA, shared_ptr < BaseFunction > funcB);

protected:
	shared_ptr < BaseFunction > m_funcA;
	shared_ptr < BaseFunction > m_funcB;

};