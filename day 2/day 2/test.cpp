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

//解析：在32平台下选择缺省对齐的情况下，每行支持4个字节即32个bit位。
//a和b19+11=30，还剩两个字节，但是c占4个字节，第一行不够，只能放在下一行
//又因为d占29个字节，29+4>32，所以d只能放在下一行
//所以a,b,c,d共占有12个字节，char只占一个字节，但因内存对齐，所以占4个字节。



//牛牛定义排序子序列为一个数组中一段连续的子序列, 并且这段子序列是非递增或者非递减排序的。牛牛有一个长度为n的整数数组A, 他现在有一个任务是把数组A分为若干段排序子序列, 牛牛想知道他最少可以把这个数组分为几段排序子序列.
//如样例所示, 牛牛可以把数组A划分为[1, 2, 3]和[2, 2, 1]两个排序子序列, 至少需要划分为2个排序子序列, 所以输出2
//
//输入描述 :
//输入的第一行为一个正整数n(1 ≤ n ≤ 10 ^ 5)
//第二行包括n个整数A_i(1 ≤ A_i ≤ 10 ^ 9), 表示数组A的每个数字。
//
//
//输出描述 :
//输出一个整数表示牛牛可以将A最少划分为多少段排序子序列
//
//示例1
//
//
//输入
//6
//1 2 3 2 2 1
//
//
//输出
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
