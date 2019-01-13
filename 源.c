#include<stdio.h>      /*输入01模式的ip地址，变为10进制*/
#include<stdlib.h>
int main()
{
	char ip[33];
	int i, sum1=0,sum2=0,sum3=0,sum4=0;
	scanf_s("%s", ip,33);
	for (i = 0; i<=7; i++)
	{
		if (ip[i] == '1')
			sum1 = sum1 * 2 + ip[i]-'0';
		else
			sum1 = sum1 * 2;
	}
	for (i = 8; i <= 15; i++)
	{
		if (ip[i] == '1')
			sum2 = sum2 * 2 + ip[i] - '0';
		else
			sum2 = sum2* 2;
	}
	for (i = 16; i <= 23; i++)
	{
		if (ip[i] == '1')
			sum3 = sum3 * 2 + ip[i] - '0';
		else
			sum3 = sum3 * 2;
	}
	for (i = 24 ;i <= 31; i++)
	{
		if (ip[i] == '1')
			sum4 = sum4 * 2 + ip[i] - '0';
		else
			sum4 = sum4 * 2;
	}
	printf("%d.%d.%d.%d", sum1,sum2,sum3,sum4);
	system("pause");
	return 0;
}
