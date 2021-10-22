#include "Compose.h"

Compose::Compose(shared_ptr < BaseFunction > funcA, shared_ptr < BaseFunction > funcB)
{
	m_funcA = funcA;
	m_funcB = funcB;
	for (int i = 0; i < m_funcA->getString().size(); i++)
	{
		if (m_funcA->getString()[i] != 'x')
			m_str.push_back(m_funcA->getString()[i]);
		else
			m_str.append(m_funcB->getString());
	}
}
//------------------------------------
void Compose::print(const string s) const
{
	cout << m_str;
}
//------------------------------------
double Compose::eval(const double x) const
{
	return (m_funcA->eval(m_funcB->eval(x)));
}
//-------------------------------------
string Compose::getString() const
{
	return m_str;
}
