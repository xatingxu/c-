//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char a[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', 0 }, *p;
//	int i;
//	i = 8;
//	p = a + i;
//	printf("%s\n", p - 3);
//
//	system("pause");
//	return 0;
//}

//#include <cstdlib>
//#include <iostream>
//using namespace std;
//
//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++)
//	{
//		k++;
//	}
//	return k;
//}
//
//int main()
//{
//	cout << (func());
//	system("pause");
//	return 0;//�տ�ʼi��j��Ϊ�㣬j���������-1���������ֱ��û�н�forѭ��
//}

//#include <iostream>       
//#include <vector> 
//using namespace std;
//
//int main()
//{
//	vector<int> array;
//	array.push_back(100);
//	array.push_back(300);
//	array.push_back(300);
//	array.push_back(300);
//	array.push_back(300);
//	array.push_back(500);
//	vector<int>::iterator itor;
//	for (itor = array.begin(); itor != array.end(); itor++)
//	{
//		if (*itor == 300)
//		{
//			itor = array.erase(itor);
//		}
//	}
//	for (itor = array.begin(); itor != array.end(); itor++)
//	{
//		cout << *itor << " ";
//	}
//	system("pause");
//	return 0;
//}
//���100 300 300 500
//��Ϊ������ɾ����һ��300ʱ����Ѻ����ֵ����1���λ�ã���ɾ���ڶ���300
//ʱ���Ѻ����ֵ����1���λ�ã�������λ��Ϊ3.

//�ַ������ҳ���������ַ���
//����һ���ַ���str������ַ���str�е�����������ִ�
//
//�������� :
//��������������1������������һ���ַ���str�����Ȳ�����255��
//
//
//������� :
//��һ�������str��������������ִ���
//ʾ��1
//����
//abcd12345ed125ss123456789
//���
//123456789

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string str, res, cur;
	cin >> str;
	for (int i = 0; i <=str.size(); i++)
	{
		if (str[i] >= '0'&&str[i] <= '9')
		{
			cur += str[i];
		}
		else
		{
			if (res.size() < cur.size())
			{
				res = cur;
			}
			else
			{
				cur.clear();
			}
		}
	}
	cout << res << endl;
	system("pause");
	return 0;
}


#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	vector<int> v;
	//������һ���������
	while (cin >> n)
	{
		v.push_back(n);
	}
	int count = 1;
	int temp = v[0];

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] == temp)
			count++;
		else
			count--;
		//��������������ڵģ�����temp�Ż���Ź������

		if (count == 0)
		{
			temp = v[i];
			count++;
		}
	}
	cout << temp << endl;
	system("pause");
	return 0;
}



