#include <iostream>

using namespace std;


int main()
{
	/*	// 7
	int input = 0;
	cout << "������� ���ұ��? : ";
	cin >> input;

	int sum = 0;

	for (int i = 1; i <= input; ++i)
	{
		sum += i;
	}
	cout << endl << "Output : " << sum << endl;
	*/


	/*	//8
	int input = 0;
	cout << "������� ���ұ��? : ";
	cin >> input;

	int sum = 0;

	if (input % 2 == 0)	// ¦
	{
		sum = (1 + input) * (input / 2);
	}
	else						// Ȧ
	{
		sum = (1 + input) * (input / 2) + (input / 2 + 1);		// �߰���.
	}
	// å �ش�
	//	sum = (n + 1) * (n / 2) + (n % 2 == 1 ? (n + 1) / 2 : 0);
	
	cout << endl << "Output : " << sum << endl;
	*/

	int a, b = 0;
	cout << "a, b : ";
	cin >> a >> b;

	int sum = 0;

	if (a < b)
	{
		for (; a <= b; ++a)
		{
			sum += a;
		}
	}
	else
	{
		for (; b <= a; ++b)
		{
			sum += b;
		}
	}

	cout << endl << "Output : " << sum << endl;

}
