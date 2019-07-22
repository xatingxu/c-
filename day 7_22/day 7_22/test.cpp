//数据库连接池
//题目描述
//Web系统通常会频繁地访问数据库，如果每次访问都创建新连接，性能会很差。
//为了提高性能，架构师决定复用已经创建的连接。当收到请求，并且连接池中没有剩余可用的连接时，
//系统会创建一个新连接，当请求处理完成时该连接会被放入连接池中，供后续请求使用。
//现在提供你处理请求的日志，请你分析一下连接池最多需要创建多少个连接。
//输入描述：
//输入包含多组数据，每组数据第一行包含一个正整数n（1sn≤1000），表示请求的数量。
//紧接着n行，每行包含一个请求编号id（A、B、C..……Z）和操作（connect或disconnect）。
//输出描述：
//对应每一组数据，输出连接池最多需要创建多少个连接。

//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		string id, CZ;
//		cin >> id >> CZ;
//		set<string> s;
//		int finsize = 0;
//		for (int i = 0; i < n; i++)
//		{
//
//			if (CZ == "connect")
//			{
//				s.insert(id);
//
//			}
//			else if (CZ == "disconnect")
//			{
//				s.erase(id);
//			}
//			int size = s.size();
//			finsize = max(size, finsize);
//		}
//		cout << finsize << endl;
//	}
//	system("pause");
//	return 0;
//	
//	
//
//}
//mkdir
//工作中，每当要部署一台新机器的时候，就意味着有一堆目录需要创建。
//例如要创建目录“ / usr / local / bin”，就需要此次创建"/usr”、" / usr / local"以及
//“ / usr / local / bin"。好在，Linux下mkdir提供了强大的“-p”选项，只要一条命令
//“mkdir - p / usr / local / bin"就能自动创建需要的上级目录。
//现在给你一些需要创建的文件夹目录，请你帮忙生成相应的“mkdir - p'命令。
//输入描述：
//输入包含多组数据。
//每组数据第一行为一个正整数n（1sn≤1024）。
//紧接着n行，每行包含一个待创建的目录名，目录名仅由数字和字母组成，长度不超过200个字符。
//输出描述：
//对应每一组数据，输出相应的、按照字典顺序排序的“mkdir - p”命令。
//每组数据之后输出一个空行作为分隔。

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<bool> flag(n, true);
		vector<string> ming(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> ming[i];
		}
		sort(ming.begin(), ming.end());
		for (int i = 0; i < ming.size() - 1; i++)
		{
			if (ming[i] == ming[i + 1])
			{
				flag[i] = false;
			}
			else if (ming[i].size() < ming[i + 1].size() && ming[i + 1][ming[i].size()] == '/')
			{
				flag[i] = false;
			}
		}
	
		for (int i = 0; i < ming.size(); ++i)
		if (flag[i]) cout << "mkdir -p " << ming[i] << endl;
		cout << endl;
	 }
	    system("pause");
	    return 0;
	}
