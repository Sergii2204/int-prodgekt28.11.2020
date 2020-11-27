#include"INT.h"
INT::INT(int a)
{
	this->a = a;
}
void INT:: setA(int as)
{
	a = as;
}
int INT :: sumAddition(int bs)
{
	return (a + bs);
}
int INT::substraction(int bs)
{
	return (a - bs);
}
int INT::multiplicotion(int bs)
{
	return(a * bs);
	
}

int INT:: getA() const
{
	return a;
}