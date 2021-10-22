#pragma once
#include "Utillities.h"
#include "Consts.h"
#include "BaseFunction.h"
#include "SinX.h"
#include "LnX.h"
#include "Polinom.h"
#include "ComplexFunc.h"
#include "LogN.h"
#include "Add.h"
#include "Mul.h"
#include "Compose.h"

class FuncManager
{
public:
	FuncManager();

	void Run() ;

private:
	void createBasicFunc();
	void print() const;
	void eval();
	void poly() ;
	void add();
	void mul();
	void comp();
	void logN();
	void del();
	void help() const;
	void exitProg() const;

	vector < shared_ptr < BaseFunction > > m_baseFuncList;
	unsigned int m_func_numF, m_func_numG;
};