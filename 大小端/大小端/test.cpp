//强转指针实现
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0x19345768;
	char* p = (char*)&i;
	if (*p == 0x68)
	{
		printf("是小端\n");
	}
	else
	{
		printf("是大端\n");
	}
	system("pause");
}

//利用union类型--可以利用共同体类型数据的特点：所有成员的起始地址一致

#include <stdio.h>
#include <stdlib.h>
int checkSystem()
{
	union un
	{
		int a;
		char ch;
	}un;
	un.a = 1;
	return(un.ch == 1);
}


int main()
{
	if (checkSystem()== 1)
		{
			printf("是小端\n");
		}
		else
		{
			printf("是大端\n");
		}
		system("pause");
	
}


//使用union和宏定义

#include <stdio.h>
#include <stdlib.h>

static union
{
	char a[4];
	unsigned long un;
}endian = { { 'L', '?', '?', 'B' } };

#define ENDIAN ((char)endian.un)
int main()
{
	printf("%c\n", ENDIAN);
	system("pause");
	return 0;
}