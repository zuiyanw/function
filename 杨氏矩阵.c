#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
//��Ŀ���ƣ����Ͼ���
//��Ŀ���ݣ���һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��0(N);
int find_k(int arr[3][3], int k, int *px, int *py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px &&y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		if (arr[x][y] < k)
		{
			x++;
		}
		if (arr[x][y] == k)
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	//  1 2 3  1.����find_k���� 2.��arr[0][3]Ϊ������ ���3>k,y--(3���ڵ������޳� ��Ϊ�ǵ�������)
	//  4 5 7                                         ���3<k,x++(3���ڵĺ����޳� ��Ϊ�ǵ�������)
	//  6 8 9  if�ҵ� return 1; û��return 0; ��Ҫ����whileѭ�� x�ı߽磺x<=row  y>=0
	int arr[3][3] = { 1, 2, 3, 3, 5, 7, 7, 8, 9 };
	int k = 10;
	int x = 3;
	int y = 3;
	int ret =find_k(arr, k, &x, &y);//�����еĵ�ַ�ϴ���ȥ
	if (ret == 1)
		printf("�ҵ���,k��������:%d,%d\n", x, y);
	else
		printf("û�ҵ�\n");
	return 0;
}