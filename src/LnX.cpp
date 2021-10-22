#include "LnX.h"

LnX::LnX()
{
	m_str = "ln(x)";
}
//------------------------
void LnX::print(const string s) const
{
	cout << m_str;
}
//------------------------------
double LnX::eval(const double x) const
{
	return std::log(x) ;
}
//--------------------------------
string LnX::getString() const
{
	return m_str;
}
//--------------------------------