#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ���ƣ�����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//��Ŀ���ݣ�дһ���ݹ麯��Digitsum(n),����һ���Ǹ����������������������֮��
//���磬����Digitsum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
//���룺1729�������19

int Digitsum(int n)
{
	if (n > 9)
	{
		return n % 10 + Digitsum(n / 10);
	}
	else
	{
		return n;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Digitsum(n);
	printf("%d\n", ret);
	return 0;
}