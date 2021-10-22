#include "LogN.h"

LogN::LogN(const int base, shared_ptr < BaseFunction > function)
	: m_base(base), m_function(function)
{
	m_str.append("Log ");
	m_str.append(to_string(m_base));
	m_str.append(" (");
	m_str.append(m_function->getString());
	m_str.append(")");
}
//--------------------------
void LogN::print(const string s) const
{
	cout << m_str;
}
//-----------------------------------
double LogN::eval(const double x) const
{
	return (log(m_function->eval(x)) / log(m_base));
}
//------------------------------
string LogN::getString() const
{
	return m_str;
}
