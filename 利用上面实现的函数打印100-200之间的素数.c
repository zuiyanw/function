��������ʵ�ֵĺ�����ӡ100 - 200֮�������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�����ж�����  �����ֳ�������һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ�������������������������Ϊ�������涨1�Ȳ�������Ҳ���Ǻ�������
int prime(int n)
{
	int count = 0;
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			count = 1;
			return 0;
		}
	}
	if (count == 0)
	{
		return 1;
	}
}
int main()
{
	int m = 100;
	int n = 200;
	int i = 0;
	int ret = 0;
	int count = 0;//�ƴ�
	for (i = 101; i <= 200; i += 1)//100Ϊż�� ��101��ʼ�ж� +=1Ϊ����ż��
	{
		ret = prime(i);//�����жϺ��� �����жϺ�������ֵ���ж� 1/0
		if (ret == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("count=%d", count);
	return 0;
}