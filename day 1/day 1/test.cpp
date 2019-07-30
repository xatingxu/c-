//组织竞赛
//牛牛举办了一次编程比赛, 参加比赛的有3*n个选手, 每个选手都有一个水平值a_i.现在要将这些选手进行组队, 一共组成n个队伍, 即每个队伍3人.牛牛发现队伍的水平值等于该队伍队员中第二高水平值。
//例如 :
//一个队伍三个队员的水平值分别是3, 3, 3.那么队伍的水平值是3
//一个队伍三个队员的水平值分别是3, 2, 3.那么队伍的水平值是3
//一个队伍三个队员的水平值分别是1, 5, 2.那么队伍的水平值是2
//为了让比赛更有看点, 牛牛想安排队伍使所有队伍的水平值总和最大。
//如样例所示 :
//如果牛牛把6个队员划分到两个队伍
//如果方案为 :
//team1 : {1, 2, 5}, team2 : {5, 5, 8}, 这时候水平值总和为7.
//而如果方案为 :
//   team1 : {2, 5, 8}, team2 : {1, 5, 5}, 这时候水平值总和为10.
//		   没有比总和为10更大的方案, 所以输出10.
//
//	   输入描述 :
//			输入的第一行为一个正整数n(1 ≤ n ≤ 10 ^ 5)
//			第二行包括3*n个整数a_i(1 ≤ a_i ≤ 10 ^ 9), 表示每个参赛选手的水平值.
//
//
//		输出描述 :
//			 输出一个整数表示所有队伍的水平值总和最大值.
//
//			 输入
//
//			 2
//			 5 2 8 5 1 5
//
//
//
//			 输出
//
//			 10



//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	
//	while (cin >> n)
//	{
//		long long sum = 0;
//		vector<int> v;
//		v.resize(n * 3);
//		
//		for (int i = 0; i < (n * 3); i++)
//		{
//			cin >> v[i];
//		}
//		//下面开始排序
//		std::sort(v.begin(), v.end());
//		for (int i = n; i <= 3 * n - 2; i += 2)
//		{
//			sum += v[i];
//		}
//		cout << sum <<endl;
//	}
//	system("pause");
//	return 0;
//}
//输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
//例如，输入”They are students.”和”aeiou”，
//则删除之后的第一个字符串变成”Thy r stdnts.”
//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	//这里不要用cin接收，cin遇到空格会结束，在OJ中输入字符串最好用getline
//	getline(cin,s1);
//	getline(cin,s2);
//	//将一个字符映射到hashtable这个数组中，用来判断这个字符在字符串
//	int hashtable[256] = { 0 };
//	for (size_t i = 0; i < s2.size(); ++i)
//	{
//		hashtable[s2[i]]++;
//	}
//
//	string ne;
//	//遍历第一个字符串，将s1[i]映射到hashtable中，如果没有出现过九放到新字符串中
//	for (size_t i = 0; i < s1.size(); ++i)
//	{
//		if (hashtable[s1[i]] == 0)
//		{
//			ne += s1[i];
//		}
//	}
//	cout << ne << endl;
//	system("pause");
//	return 0;
//}
//求和
//输入两个整数 n 和 m，从数列1，2，3.......n 中随意取几个数,
//使其和等于 m, 要求将其中所有的可能组合列出来

//class Test
//{
//private:
//	static int a;//静态数据成员
//};

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[] = { 1, 2, 3, 4 };
	int* b = a;
	*b += 2;
	*(b + 2) = 2;
	b++;
	printf("%d,%d\n", *b, *(b + 2));
	system("pause");
}