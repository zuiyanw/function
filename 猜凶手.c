#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()        
{                 
	             
//��Ŀ���ƣ�������
//��Ŀ���ݣ��ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��
//������4�����ɷ��Ĺ��ʣ�
//A˵�������� 1   
//B˵����C 1
//C˵����D 0
//D˵: C�ں�˵ 1
//��֪������˵���滰��1����˵�˼ٻ� �����滰Ϊ1 �ٻ�Ϊ0 A+B+C+D=3  ѧ�������ת��Ϊ����˼ά ��1   0��
	char killer = '0';
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
		{
			printf("killer�ǣ�%c\n", killer);
		}
	}
	
	return 0;
}