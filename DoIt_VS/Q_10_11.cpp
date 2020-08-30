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
			cout << "a보다 크게 입력" << endl;
	} while (b <= a);

	cout << "b - a : " << b - a << endl;
	*/


	// 11
	int a = 0;
	do
	{
		cout << "a값을 입력 : ";
		cin >> a;

		if (a <= 0)
			cout << "양의 정수로 입력" << endl;
	} while (a <= 0);

	int jari = 0;

	while (a > 0)
	{
		a /= 10;
		jari++;
	}

	cout << "이 수는 " << jari << "자리수 입니다." << endl;
}