#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"Rus");
	int Var1, Var2, Var3;
	const char NL =  '\n';
	cout << "������� ��� ����� :" << NL;
	cin >> Var1 >> Var2 >> Var3;
	int summ = Var1 + Var2 + Var3;
	int multiple = Var1 * Var2 * Var3;
	double avg = (double)(Var1 + Var2 + Var3) / 3;
	cout << "�������� ����� ��������� ����� = " << Var1 + Var2 + Var3 << NL;
	cout << "�������� ������������ ��������� ����� = " << Var1 * Var2 * Var3 << NL;
	cout << "������� �������������� ��������� ����� = " << (double)(Var1 + Var2 + Var3) / 3 << NL;
}