#include <iostream>

using namespace std;


int main()
{
	// 10
	/*
	int a, b = 0;
	cout << "a : ";
	cin >> a;

	do
	{
		cout << "b : ";
		cin >> b;

		if (b <= a)
			cout << "a���� ũ�� �Է�" << endl;
	} while (b <= a);

	cout << "b - a : " << b - a << endl;
	*/


	// 11
	int a = 0;
	do
	{
		cout << "a���� �Է� : ";
		cin >> a;

		if (a <= 0)
			cout << "���� ������ �Է�" << endl;
	} while (a <= 0);

	int jari = 0;

	while (a > 0)
	{
		a /= 10;
		jari++;
	}

	cout << "�� ���� " << jari << "�ڸ��� �Դϴ�." << endl;
}