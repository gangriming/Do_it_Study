#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	int i;
	int* a;
	int na;
	printf_s("요소 개수 : ");
	scanf_s("%d", &na);

	a = (int*)calloc(na, sizeof(int));

	if (a == NULL)
		puts("메모리 확보에 실패했습니다.");
	else
	{
		cout << a << "주소의 메모리 확보" << endl;
		
		printf_s("%d개의 정수를 입력하세요. \n", na);
		for (int i = 0; i < na; ++i)
		{
			printf_s("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
	}

	printf_s("각 요소값을 출력합니다.\n");
	
	for (int i = 0; i < na; ++i)
	{
		printf_s("a[%d] : %d\n", i, a[i]);
	}

	free(a);
}