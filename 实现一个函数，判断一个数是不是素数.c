#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�����ж�����  �����ֳ�������һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ�������������������������Ϊ�������涨1�Ȳ�������Ҳ���Ǻ�������
void prime(int n)
{
	int count = 0;
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			count++;
			printf("%d��������\n", n);
			break;
		}
	}
	if (count == 0)
	{
		printf("%d������\n", n);
	}
}
int main()
{
	int n = 0;
A:
	scanf("%d", &n);
	if (n > 1)
	{
		prime(n);//�����жϺ���
	}
	else
	{
		printf("�����������������һ������1����Ȼ��>:\n");
		goto A;
	}
	return 0;
}