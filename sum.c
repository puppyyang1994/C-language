#define _CRT_SECURE_NO_WARNINGS 1
// Ҫ��ʵ��һ������m~n��m<n��֮�����������ĺ͵ļ򵥺�����
#include <stdio.h>

int sum(int m, int n);

int main()
{
    int m, n;

    scanf ("%d %d", &m, &n);

    printf("sum = %d\n", sum(m, n));

    return 0;
}


int sum(int m, int n)
{
    int sum=0;

    for (m; m <=n; m++)  //��ѭ����䣬���������<= �������©��n
    {
        sum += m;
    }
        
    return sum;
}
