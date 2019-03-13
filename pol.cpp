#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <fstream>
#include <ctime>
#include <sstream>
#include <iomanip>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");
	ofstream fout;
	ifstream fin;
	fout.open("input.txt");
	int n,s;
	cout << "сколько чисел фибоначчи хотите добавить в файл" << endl;
	n = -1;
	int a = 0;
	int b = 1;
	while (n <= 0)
	{
		cin >> n;
		if (n > 0)
		{
			for (int i = 0; i < n; i++)
			{
				fout << a << " ";
				s = a + b;
				a = b;
				b = s;
			}
		}
		else
		{
			cout << "введите Ќј“”–јЋ№Ќќ≈ число" << endl;
		}
	}
	fout.close();
	system("pause");
}