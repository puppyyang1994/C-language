#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
void CharPyramid(int n, char ch)
{
	int i, j, k;
	//��������
	for (i = 1; i <= n; i++)
	{
		//�����ߵĿո�ÿ����n-i���ո�
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		//ÿһ����߿ո������������֣�n��n�����֣����ֺ�����һ���ո�
		for (k = 1; k <= i; k++)
		{
			printf("%c ", ch);
		}
		//����
		printf("\n");
	}
}

int main()
{
	int n;
	char ch;
	scanf_s("%d %c", &n, &ch);
	CharPyramid(n, ch);
	
	return 0;
}

