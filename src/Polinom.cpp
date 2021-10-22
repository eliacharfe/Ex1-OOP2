#include "Polinom.h"

Polinom::Polinom(vector < double > coefficients)
	: m_coefficients(coefficients)
{
	for (int i = m_coefficients.size() - 1; i >= 0; i--) {
		if (m_coefficients[i] != 0)	{
			m_str.append(to_string(int(m_coefficients[i])));
			m_str.append("*x^");
			m_str.append(to_string(i));
		}
		if (i != 0 && m_coefficients[i] != 0 && m_coefficients[0] != 0)
			m_str.append(" + ");
	}
	bool zeroFunc = true;
	for (int i = m_coefficients.size() - 1; i >= 0; i--)
		if (m_coefficients[i] != 0)
			zeroFunc = false;
	if (m_coefficients.size() == 0)
		zeroFunc = true;

	if (zeroFunc)
		m_str.push_back('0');

}
//-----------------------------
void Polinom::print(const string s) const
{
	cout << m_str;
}
//----------------------------------------
double Polinom::eval(const double x) const
{
	double res = 0;
	for (int i = m_coefficients.size() - 1; i >= 0; i--)
		res += (m_coefficients[i] * pow(x, i));
	
	return res ;
}
//----------------------------------
string Polinom::getString() const
{
	return m_str;
}
