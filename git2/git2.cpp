﻿#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int  b, c, d;

	cout << "что хотите сделать?" << endl;
	cout << "введите 1 если хотите сложить" << endl << "введите 2 если хотите вычесть" << endl;
	cout << "введите 3 если хотите умножить" << endl << "введите 4 если хотите поделить" << endl;
	cin >> b;
	cout << endl;

	switch (b)
	{
	case 1:
		// Сумма
		cout << "ввдите a и b" << endl;
		cin >> c >> d;
		cout << MySum(c, d) << endl;
		break;
	case 2:
		// Вычитание
		cout << "ввдите a и b" << endl;
		cin >> c >> d;

		cout  << MySub(c, d) << endl;
		break;
	case 3:
		// умножение
		cout << "ввдите a и b" << endl;
		cin >> c >> d;

		cout << MyMul(c, d) << endl;
		break;
	case 4:
		// деление
		cout << "ввдите a и b" << endl;
		cin >> c >> d;
		cout << MyDiv(c, d) << endl;
		break;

	}
	system("pause");
	return 0;
}

