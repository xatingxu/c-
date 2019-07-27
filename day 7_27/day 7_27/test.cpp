//��Ŀ����
//NowCoder��������������壬���ڸ���һ����֣������æ�ж�������û���������飨�������Ҳ�㣩��
//����������
//�����ж������ݣ�ÿ������Ϊһ��20x20�����̡�
//���к�����"*"����ʾ�������á� + ����ʾ���հ�λ���á�.����ʾ��
//���������
//��������ϴ����������飨����������ɫ�����ӣ������롰Yes"���������No"��
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//#define N 20
//
//int count(string table[], char ch, int x, int y)
//{
//	int maxcount = 0;
//	int dir[4][2][2] = { { { -1, 0 }, { 1, 0 } }, { { 0, 1 }, { 0, -1 } }, { { -1, 1 }, { 1, -1 } }, { { 1, 1 }, { -1, -1 } } };
//	for (int i = 0; i < 4; i++)
//	{
//		int cou = 0;
//		for (int j = 0; j < 2; j++)
//		{
//			int nx = x, ny = y;
//			while (nx >= 0 && nx < N&&ny >= 0 && ny < N&&table[nx][ny] == ch)
//			{
//				nx += dir[i][j][0];
//				ny += dir[i][j][1];
//				cou++;
//			}
//		}
//		maxcount = (maxcount > cou ? maxcount : cou);
//	}
//	return maxcount - 1;
//}
//
//bool solve(string table[])
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (table[i][j] == '*' || table[i][j] == '+')
//			{
//				if (count(table, table[i][j], i, j) >= 5)
//					return true;
//			}
//		}
//	}
//	return false;
//
//}
//
//int main()
//{
//	string table[N];
//	while (cin >> table[0])
//	{
//		for (int i = 1; i < N; i++)
//			cin >> table[i];
//		cout << (solve(table) ? "Yes" : "No") << endl;
//	}
//	system("pause");
//	return 0;
//
//
//}


//����������
//��������������ݡ�
//ÿ�����ݰ������У���һ����һ��������n��3��n��50���������ŵڶ��а���n������ֵ���������ɵ��б�
//�� + -*/ n�ֱ�Ϊ�Ӽ��˳��������㣬���г���Ϊ��������"5 / 3 = 1"��
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		getchar();
		stack<int> s;
		for (size_t i = 0; i < n; i++)
		{
			int sum = 0;
			string ch;
			cin >> ch;
			if (ch[0] == '+' || ch[0] == '-' || ch[0] == '*' || ch[0] == '/')
			{
				//��ÿ��������ĺ���ջ	
				int right = s.top();
				s.pop();
				int left = s.top();
				s.pop();
				if (ch[0] == '+')
					sum = left + right;
				if (ch[0] == '-')
					sum = left - right;
				if (ch[0] == '*')
					sum = left * right;
				if (ch[0] == '/')
				{
					if (right != 0)
						sum = left / right;
					else
						return 0;
				}
				s.push(sum);

			}
			else
				s.push(atoi(ch.c_str()));//�ַ���ת������ע����c���Ե�������Ҫ����c_str;
		}
		cout << (int)s.top() << endl;

	}
	system("pause");
	return 0;
}
