#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ���ƣ���׳�
//��Ŀ���ݣ��ݹ�ͷǵݹ�ֱ�ʵ��n�Ľ׳�
int fac(int n)
{
	if (n > 1)
	{
		return n*fac(n - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=fac(n);
	printf("%d\n", ret);
	return 0;
}

