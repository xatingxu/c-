//题目描述
//NowCoder最近爱上了五子棋，现在给你一个棋局，请你帮忙判断其中有没有五子连珠（超过五颗也算）。
//输入描述：
//输入有多组数据，每组数据为一张20x20的棋盘。
//其中黑子用"*"机表示，白子用“ + ”表示，空白位置用“.”表示。
//输出描述：
//如果棋盘上存在五子连珠（无论哪种颜色的棋子），输入“Yes"，否则输出No"。
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


//输入描述：
//输入包含多组数据。
//每组数据包括两行：第一行是一个正整数n（3≤n≤50）；紧接着第二行包含n个由数值和运算符组成的列表。
//“ + -*/ n分别为加减乘除四则运算，其中除法为整除，即"5 / 3 = 1"。
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
				//把每次运算完的和入栈	
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
				s.push(atoi(ch.c_str()));//字符串转整数，注意是c语言的整数，要加上c_str;
		}
		cout << (int)s.top() << endl;

	}
	system("pause");
	return 0;
}
