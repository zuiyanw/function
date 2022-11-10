#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //��Ŀ���ƣ���������ż��˳��
//��Ŀ���ݣ���������ʹ����ȫ��λ��ż��ǰ��
//��Ŀ������һ���������飬ʵ��һ�������������������������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿��

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	//���ų���ߵ�����
	while (left<right)
	{
		while ((left < right) && (arr[left] % 2 == 1))//���ǵ�ȫ����������ż������� ��Ҫleft<right �������ڶ���������ʱ ���һ�������ж�
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))//ͬ�� ��Ҫ�������� left<right
		{
			right--;
		}
		if (left<right)//�����м��Ԫ���ǣ�7 5 6 4   7���±�+1 �ҵ�5 ��+1�ҵ�6  4���±�-1�ҵ�6 ��ʱleft=right ����Ҫ���� 
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}
