#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"Rus");
	int Var1, Var2, Var3;
	const char NL =  '\n';
	cout << "Введите три числа :" << NL;
	cin >> Var1 >> Var2 >> Var3;
	int summ = Var1 + Var2 + Var3;
	int multiple = Var1 * Var2 * Var3;
	double avg = (double)(Var1 + Var2 + Var3) / 3;
	cout << "Значение суммы введенных чисел = " << Var1 + Var2 + Var3 << NL;
	cout << "Значение произведения введенных чисел = " << Var1 * Var2 * Var3 << NL;
	cout << "Среднее арифметическое введенных чисел = " << (double)(Var1 + Var2 + Var3) / 3 << NL;
}