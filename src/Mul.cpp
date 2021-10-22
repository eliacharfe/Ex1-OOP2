#include "Mul.h"

Mul::Mul(shared_ptr<BaseFunction> funcA, shared_ptr<BaseFunction> funcB)
{
	m_funcA = funcA;
	m_funcB = funcB;

	m_str.push_back('(');
	m_str.append(m_funcA->getString());
	m_str.append(") * (");
	m_str.append(m_funcB->getString());
	m_str.push_back(')');
}
//--------------------------------
void Mul::print(const string s) const
{
	cout << m_str;
}
//------------------------------------
double Mul::eval(const double x) const
{
	return (m_funcA->eval(x) * m_funcB->eval(x));
}
//---------------------------
string Mul::getString() const
{
	return m_str;
}
