//ǿתָ��ʵ��
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0x19345768;
	char* p = (char*)&i;
	if (*p == 0x68)
	{
		printf("��С��\n");
	}
	else
	{
		printf("�Ǵ��\n");
	}
	system("pause");
}

//����union����--�������ù�ͬ���������ݵ��ص㣺���г�Ա����ʼ��ַһ��

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
			printf("��С��\n");
		}
		else
		{
			printf("�Ǵ��\n");
		}
		system("pause");
	
}


//ʹ��union�ͺ궨��

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