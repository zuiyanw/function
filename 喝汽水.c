#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //��Ŀ���ƣ�����ˮ
//��Ŀ���ݣ�1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ���ƿ��ˮ

int main()
{
	int money = 0;
	int empty = 0;//��ƿ����
	int total = 0;//һ�����˶���ƿ
	scanf("%d", &money);
	empty = money;//��һ�κ���ʣ�µĿ�ƿ��
	total = money;//��һ�κȵ�ƿ��
	while (empty>=2)
	{
		total = total + empty / 2;//һ��ʼ��ƿ��+�û�����ƿ��
		empty = empty / 2 + empty % 2;//ֱ������ƿ��+��һ��ʣ���ƿ��(5%2=1)
	}
	printf("%d\n", total);
	return 0;
}
