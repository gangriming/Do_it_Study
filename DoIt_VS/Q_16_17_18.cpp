#include <iostream>

using namespace std;

///////// 16
void triangleLB(int n);
void triangleLU(int n);
void triangleRU(int n);
void triangleRB(int n);
///////////////
//////// 17
void spire(int n);

int main()
{
	//triangleLB(5);
	//triangleRB(10);
}

void triangleLB(int n)
{

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
			cout << "*";
		cout << endl;
	}
}

void triangleLU(int n)	// 왼쪽 위가 직각
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - i; j > 0; --j)
			cout << "*";
		cout << endl;
	}
}

void triangleRU(int n)		// 오른쪽 위가 직각
{
	for (int i = 0; i < n; ++i)
	{
		int temp = i;
		for (int j = n; j > 0; --j)
		{
			if (temp > 0)
				cout << " ";
			else
				cout << "*";
			temp--;
		}

		cout << endl;
	}
}

void triangleRB(int n)	// 오른쪽 아래가 직각
{
	for (int i = 1; i <= n; ++i)
	{
		int temp = n - i;
		for (int j = n; j > 0; --j)
		{
			if (temp > 0)
				cout << " ";
			else
				cout << "*";
			temp--;
		}

		cout << endl;
	}
}

void spire(int n)
{
	for (int i = 0; i < n; ++i)
	{
		int temp = i;
		//for(int j = 0 ; j < )
	}
}
