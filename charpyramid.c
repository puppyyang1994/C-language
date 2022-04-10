#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
void CharPyramid(int n, char ch)
{
	int i, j, k;
	//控制行数
	for (i = 1; i <= n; i++)
	{
		//输出左边的空格，每行有n-i个空格
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		//每一行左边空格输完后输出数字，n行n个数字（数字后面有一个空格）
		for (k = 1; k <= i; k++)
		{
			printf("%c ", ch);
		}
		//换行
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

