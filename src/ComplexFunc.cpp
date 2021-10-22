#include "ComplexFunc.h"

ComplexFunc::ComplexFunc()
{ }
//-------------------------------------------------------
ComplexFunc::ComplexFunc(shared_ptr < BaseFunction > funcA, shared_ptr < BaseFunction > funcB)
{
	m_funcA = funcA;
	m_funcB = funcB;
}
//-----------------------
