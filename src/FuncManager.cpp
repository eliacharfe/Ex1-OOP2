#include "FuncManager.h"

FuncManager::FuncManager()
{
	createBasicFunc();
	print();
}
//-------------------------------------------
void FuncManager::Run()
{
	char func_name[MAX_STR];
	while (cin >> func_name)
	{
		if (strcmp(func_name, "eval") == 0)
			eval();
		else if (strcmp(func_name, "poly") == 0)
			poly();
		else if (strcmp(func_name, "add") == 0)
			add();
		else if (strcmp(func_name, "mul") == 0)
			mul();
		else if (strcmp(func_name, "comp") == 0)
			comp();
		else if (strcmp(func_name, "log") == 0)
			logN();
		else if (strcmp(func_name, "del") == 0)
			del();
		else if (strcmp(func_name, "help") == 0)
			help();
		else if (strcmp(func_name, "exit") == 0)
			exitProg();
		cout << endl;
		print();
	}
}
//-------------------------------------
void FuncManager::createBasicFunc()
{
	shared_ptr sinx = make_shared < SinX >();
	m_baseFuncList.push_back(sinx);
	shared_ptr lnx = make_shared < LnX >();
	m_baseFuncList.push_back(lnx);
}
//----------------------------------
void FuncManager::print() const
{
	cout << "This is the function list :" << endl;
	int i = 0;
	for (auto & function : m_baseFuncList) {
		cout << i++ << ": ";
		function->print("x");  cout << "\n";
	}
	cout << "Please enter a command ('help' for command list): ";
}
//----------------------------
void FuncManager::eval() 
{
	double num;
	cin >> m_func_numF >> num;
	for (int i = 0; i < m_baseFuncList[m_func_numF]->getString().size(); i++)
	{
		if (m_baseFuncList[m_func_numF]->getString()[i] != 'x')
			cout << m_baseFuncList[m_func_numF]->getString()[i]; // get the char
		else if (m_baseFuncList[m_func_numF]->getString()[i] == 'x')
			cout << num ; // print the num of the input
	}
	cout << " = ";
	cout << m_baseFuncList[m_func_numF]->eval(num) << endl; // result
}
//----------------------
void FuncManager::poly() 
{
	unsigned int num_coefficient;
	cin >> num_coefficient;
	vector < double > coefficients;
	coefficients.resize(num_coefficient);

	for (unsigned int i = 0; i < num_coefficient; i++)
		cin >> coefficients[i];

	shared_ptr polynome = make_shared < Polinom >(coefficients);
	m_baseFuncList.push_back(polynome);
}
//--------------------------------
void FuncManager::add()
{
	cin >> m_func_numF >> m_func_numG;
	shared_ptr addition = make_shared < Add >(m_baseFuncList[m_func_numF], m_baseFuncList[m_func_numG]);
	m_baseFuncList.push_back(addition);
}
//-----------------------------
void FuncManager::mul()
{
	cin >> m_func_numF >> m_func_numG;
	shared_ptr multiply = make_shared < Mul >(m_baseFuncList[m_func_numF], m_baseFuncList[m_func_numG]);
	m_baseFuncList.push_back(multiply);
}
//--------------------------------
void FuncManager::comp()
{
	cin >> m_func_numF >> m_func_numG;
	shared_ptr comp = make_shared < Compose >(m_baseFuncList[m_func_numF], m_baseFuncList[m_func_numG]);
	m_baseFuncList.push_back(comp);
}
//-----------------------------------
void FuncManager::logN()
{
	int base;
	cin >> base  >> m_func_numF;
	shared_ptr logFunc = make_shared < LogN >(base, m_baseFuncList[m_func_numF]);
	m_baseFuncList.push_back(logFunc);
}
//------------------------------
void FuncManager::del()
{
	cin >> m_func_numF;
	m_baseFuncList.erase(m_baseFuncList.begin() + m_func_numF);
}
//------------------------------
void FuncManager::help() const
{
	cout <<
		"Following is the list of the calculator's available commands:\n"
		"eval(uate) num x - Evaluates function #num on x\n"
		"poly(nomial) N c0 c1 ... c(N-1) - Creates a polynomial with N coefficients\n"
		"mul(tiply) num1 num2 - Creates a function that is the multiplication of\n"
		"function #num1 and function #num2\n"
		"add num1 num2 - Creates a function that is the sum of function #num1 and\n"
		"function #num2\n"
		"comp(osite) num1 num2 - Creates a function that is the composition of\n"
		"function #num1 and function #num2\n"
		"log N num - Creates a function that computes log N of function #num\n"
		"del(ete) num - Deletes function #num from function list" 
		"help - Prints this help screen\n"
		"exit - Exits the program" << endl;
}
//--------------------------------
void FuncManager::exitProg() const
{
	cout << "Goodbye" << endl;
	exit(EXIT_SUCCESS);
}
