// OOP2_ex01.cpp 
#include "Consts.h"
#include "Utillities.h"
#include "FuncManager.h"

#define RunFunc 1

int main()
{
#if RunFunc 
	std::cout << std::setprecision(2) << std::fixed;
	FuncManager funcManager;
	funcManager.Run();

#endif

	return EXIT_SUCCESS;
}
