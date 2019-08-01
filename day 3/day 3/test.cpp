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
//	return 0;//刚开始i和j都为零，j不满足等于-1这个条件，直接没有进for循环
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
//输出100 300 300 500
//因为迭代器删除第一个300时，会把后面的值赋给1这个位置，当删除第二个300
//时，把后面的值赋给1这个位置，迭代器位置为3.

//字符串中找出连续最长的字符串
//读入一个字符串str，输出字符串str中的连续最长的数字串
//
//输入描述 :
//逐个测试输入包含1个测试用例，一个字符串str，长度不超过255。
//
//
//输出描述 :
//在一行内输出str中里连续最长的数字串。
//示例1
//输入
//abcd12345ed125ss123456789
//输出
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
	//先输入一个数组的数
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
		//过半的数会有相邻的，所以temp才会存着过半的数

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



