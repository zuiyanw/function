#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ���ƣ���׳�
//��Ŀ���ݣ�ʵ��n�Ľ׳�
void fac(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = i*ret;
	}
	printf("%d\n", ret);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	fac(n);
	return 0;
}