#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	int i;
	int* a;
	int na;
	printf_s("��� ���� : ");
	scanf_s("%d", &na);

	a = (int*)calloc(na, sizeof(int));

	if (a == NULL)
		puts("�޸� Ȯ���� �����߽��ϴ�.");
	else
	{
		cout << a << "�ּ��� �޸� Ȯ��" << endl;
		
		printf_s("%d���� ������ �Է��ϼ���. \n", na);
		for (int i = 0; i < na; ++i)
		{
			printf_s("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
	}

	printf_s("�� ��Ұ��� ����մϴ�.\n");
	
	for (int i = 0; i < na; ++i)
	{
		printf_s("a[%d] : %d\n", i, a[i]);
	}

	free(a);
}