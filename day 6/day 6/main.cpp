//不要二
//#include <iostream>
//
//#include <stdlib.h>
//using namespace std;
//
//int a[1000][1000] = { 0 };
//int main()
//{
//	int m, n;
//	int res = 0;
//	cin >> m >> n;
//	for (int i = 0; i < m; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			if (a[i][j] == 0)
//			{
//				res++;
//				if ((i + 2) < m)
//					a[i + 2][j] = -1;
//				if ((j + 2) < n)
//					a[i][j + 2] = -1;
//
//			}
//		}
//	}
//	cout << res << endl;
//	system("pause");
//	return 0;
//
//}

//把字符转化成整数
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
			return 0;
		int flag = 1;
		if (str[0] = '-')
		{
            flag = -1;
		    str[0] = '0';
		}
			
		else if (str[0] = '+')
		{
			flag = -1;
			str[0] = '0';
		}
		int num = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				num = 0;
				break;
			}
			num = num * 10 + str[i] - '0';
		}
		cout << num << endl;
		system("pause");
		return 0;

	}
};