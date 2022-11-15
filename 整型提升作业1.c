#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ 
	unsigned char a = 200;//unsigned char - 占用1个字节 - 8个bit位 符号位不再是符号位 全是整数
	unsigned char b = 100;//它的范围是 0-255 11111111
	unsigned char c = 0;
	c = a + b;
	printf("%d %d", a + b, c);//%d 打印10进制数的有符号数 
//  100,200可以储存在unsigned char中,  a+b 2个char类型的变量 则会整型提升： unsigned 高位补0 有符号数高位补符号位
//200: 00000000 00000000 00000000 11001000
//100: 00000000 00000000 00000000 01100100
//a+b 不存的话是: 00000000 00000000 00000001 00101100 - 300 
//存到c的是:100101100  由于c是char类型 只能存储8个bit位 则c: 00101100   
//c按照%d打印也需要整型提升： c是unsigned char,高位补0：00000000 00000000 00000000 00101100-44
	return 0;
}
