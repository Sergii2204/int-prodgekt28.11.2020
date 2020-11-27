#include"INT.h"

void main()
{
	int a, b;


	cout << "Number a = ";
	cin >> a;
	INT* ex1 = new INT(a);

	cout << "Numbor b = ";
	cin >> b;

	INT ex2(b);

	INT res;
	
	res = ex1->sumAddition(b);
	cout << res.getA() << endl;//сумма
	res = ex1->multiplicotion(b);
	cout << res.getA()<<endl;//умножение
	res = ex1->substraction(b);
	cout << res.getA() << endl;;//вычитание

}