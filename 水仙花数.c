#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //��Ŀ���ƣ���ӡˮ�ɻ���
#include <stdlib.h>//��Ŀ���ݣ����0-100000֮�����еġ�ˮ�ɻ����������
//ˮ�ɻ��� ��ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������磺153=1^3+5^3+3^3
#include <math.h>
int main()
{
	int i = 0;

	for (i = 0; i < 100000; i++)
	{
		int n = 1;//λ��
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)//1.�жϳ����ֵ�λ��n
		{
			n++;//i����10 �̲�Ϊ0 λ��+1
		}
		tmp = i;//������ѭ���ڲ��ı�i 
		while (tmp)//2.���ÿһλ��n�η�֮��sum
		{
			sum += pow(tmp % 10, n);//�ȼ���ĩλ��n�η�
			tmp /= 10;//ȥ��ĩλ
		}
		if (sum == i)//3.���sum == i, ��Ϊˮ�ɻ���
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
