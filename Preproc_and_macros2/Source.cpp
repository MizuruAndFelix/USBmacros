#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;

#define SUB(a, b) ((a)-(b))

int main()
{
	setlocale(LC_ALL, ".UTF8");
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	SetConsoleCP(1251); //������� �� �������
	SetConsoleOutputCP(1251);

	int a = 6;
	int b = 5;
	int c = 2;
	cout << SUB(a, b) << endl;
	cout << SUB(a, b) * c << endl;
	cout << SUB(a, b + c) * c << endl;
}