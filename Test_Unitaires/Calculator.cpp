#include "Calculator.h"
#include <limits>


Calculator::Calculator()
{

}

Calculator::~Calculator()
{

}

bool Calculator::add(int addend1, int addend2)
{


	if (addend1 > 0 && addend2 > 0)
	{
		if (INT_MAX - addend1 < addend2)
			return false;
	}

	if (addend1 < 0 && addend2 < 0)
	{
		if (INT_MIN - addend1 > addend2)
			return false;
	}

	m_lastResult = addend1 + addend2;
	return true;
}

bool Calculator::mul(int factor1, int factor2)
{	



	if (factor2 != 0 && abs(INT_MAX / factor2) <= abs(factor1))
		return false;

	if (factor1 != 0 && abs(INT_MAX / factor1) <= abs(factor2))
		return false;

	m_lastResult = factor1 * factor2;
	return true;

}

bool Calculator::div(int dividend, int divisor)
{	

	if (divisor == 0)
	{ 
		m_lastResult = 0;
		return false;
	}

	m_lastResult = dividend / divisor;

	return true;
}

int Calculator::get_last_result()
{	

	return m_lastResult;
}


/*
int operation (int x, int y,int (*function)(int,int)){return function(x,y);}
int operation2(int x, int y,std::function<int(int, int)> function){return function(x,y);}*/