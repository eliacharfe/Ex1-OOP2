#include "SinX.h"

SinX::SinX()
{
	m_str = "sin(x)";
}
//-----------------------
void SinX::print(const string s) const
{
	cout << m_str ;
}
//------------------------
double SinX::eval(const double x) const
{
	return sin(x) ;
}
//-------------------------------------
string SinX::getString() const
{
	return m_str;
}
