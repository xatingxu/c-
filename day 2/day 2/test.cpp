//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	int *b = a;
//	*b += 2;
//	*(b + 2) = 2;
//	b++;
//	printf("%d, %d\n", *b, *(b + 2));
//	system("pause");
//	return 0;
//}
//


//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	struct A{
//		unsigned a : 19;
//		unsigned b : 11;
//		unsigned c : 4;
//		unsigned d : 29;
//		char index;
//	};
//	printf("%d\n", sizeof(struct A));
//	system("pause");
//	return 0;
//
//}

//��������32ƽ̨��ѡ��ȱʡ���������£�ÿ��֧��4���ֽڼ�32��bitλ��
//a��b19+11=30����ʣ�����ֽڣ�����cռ4���ֽڣ���һ�в�����ֻ�ܷ�����һ��
//����Ϊdռ29���ֽڣ�29+4>32������dֻ�ܷ�����һ��
//����a,b,c,d��ռ��12���ֽڣ�charֻռһ���ֽڣ������ڴ���룬����ռ4���ֽڡ�



//ţţ��������������Ϊһ��������һ��������������, ��������������Ƿǵ������߷ǵݼ�����ġ�ţţ��һ������Ϊn����������A, ��������һ�������ǰ�����A��Ϊ���ɶ�����������, ţţ��֪�������ٿ��԰���������Ϊ��������������.
//��������ʾ, ţţ���԰�����A����Ϊ[1, 2, 3]��[2, 2, 1]��������������, ������Ҫ����Ϊ2������������, �������2
//
//�������� :
//����ĵ�һ��Ϊһ��������n(1 �� n �� 10 ^ 5)
//�ڶ��а���n������A_i(1 �� A_i �� 10 ^ 9), ��ʾ����A��ÿ�����֡�
//
//
//������� :
//���һ��������ʾţţ���Խ�A���ٻ���Ϊ���ٶ�����������
//
//ʾ��1
//
//
//����
//6
//1 2 3 2 2 1
//
//
//���
//2

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> v;
		v.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		int ret = 1;
		for (int i = 1; i < n - 1; i++)
		{
			if ((v[i - 1]<v[i] && v[i]>v[i + 1]) || (v[i - 1] > v[i] && v[i] < v[i + 1]))
			{
				ret++;
				if (i != n - 3)
					i++;
			}
		}
		cout << ret << endl;
	}
	system("pause");
	return 0;
	

}
//

//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	cin >> s2;
//	while (cin >> s1)
//	{
//		s2 = s1 + " " + s2;
//		if (cin.get() == '\n')
//			break;
//	}
//	cout << s2 << endl;
//	system("pause");
//}
