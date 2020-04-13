#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int n1, n2;
	cout << "N1: ";
	cin >> n1;
	cout << "N2: ";
	cin >> n2;

	for (int i = n1; i <= n2; ++i)
	{
		int value = i; //копируем переменную, чтобы не изменять внутри проверки
		int reversed = 0; //разворачиваем число используя 10 систему счисления
		do
		{
			reversed = reversed * 10 + value % 10;
			value /= 10;
		}
		while (value != 0);
		
		if (reversed == i)
		{
			cout << i << " Палиндром\n";
		}
	}

	system("pause");
}
