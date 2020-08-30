#include <iostream>

using namespace std;

int max4(int a, int b, int c, int d);
int min3(int a, int b, int c);
int min4(int a, int b, int c, int d);

int main()
{

	cout << max4(1, 5, 2, 10) << endl;
	cout << min3(1, 5, 2) << endl;
	cout << min4(3, 5, 0, 10) << endl;

}

int max4(int a, int b, int c, int d)
{
	int answer = a;

	if (answer < b)
		answer = b;
	if (answer < c)
		answer = c;
	if (answer < d)            
		answer = d;

	return answer;
}
int min3(int a, int b, int c)
{
	int answer = a;

	if (answer > b)
		answer = b;
	if (answer > c)
		answer = c;

	return answer;
}

int min4(int a, int b, int c, int d)
{
	int answer = a;

	if (answer > b)
		answer = b;
	if (answer > c)
		answer = c;
	if (answer > d)
		answer = d;

	return answer;
}
