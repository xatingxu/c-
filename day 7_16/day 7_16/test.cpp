//#include <iostream>
//#include <string>
//#include <cstdlib>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	string::iterator it;
//	while (cin>>s)
//	{
//		for (it = s.begin(); it < s.end(); it++)
//		{
//			if (*it == '_')
//			{
//				s.erase(it);
//				*it = toupper(*it);
//			}
//				
//		}
//
//       cout << s << endl;
//	}
//	
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	string str1;
//	string::iterator it;
//	while (cin >> str1)
//	{
//		for (it = str1.begin(); it < str1.end(); it++)
//		{
//			if (*it == '_')
//			{
//				str1.erase(it);
//				*it = toupper(*it);
//			}
//		}
//		cout << str1 << endl;
//	}
//	system("pause");
//	return 0;
//}


//istringstream的用法
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	string str;
//	string s1;
//	cout << "请输入一行字符:";
//	while (getline(cin, str))//从屏幕读取一行字符并赋给str
//	{
//		istringstream str1(str);      //创建istringstream对象并同时初始化，使
//		//其和字符串str绑定
//		str1 >> s1;              //以空格为分隔符把该行分隔开来
//		cout << s1 << endl;   //输出分隔开后的两个字符串
//	}
//	system("pause");
//	return 0;
//
//}

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
	string s;
	vector<string> vs;
	string s1;
	while (getline(cin, s1))
	{
		istringstream str1(s1);
		while (str1 >> s)
		{
			for (size_t i = 0; i != s.length(); ++i)
			{
				if (!((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z')))
				{
					s[i] = ' ';
				}
			}
			istringstream str2(s);
			while (str2 >> s)
			{
				vs.push_back(s);
			}
		}
		for (auto i = vs.rbegin(); i < vs.rend(); i++)
		{
			cout << *i<<' ';
		}
		cout << endl;
		vs.clear();
	}
	system("pause");
	return 0;
}

