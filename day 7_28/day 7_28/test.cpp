//#include <string>
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void quchunum(string& s)
//{
//	for (size_t i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= '0'&&s[i] <= '9')
//			cout << s[i];
//	}
//	cout << endl;
//}
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		
//		quchunum(s);
//	}
//	system("pause");
//
//	return 0;
//}

#include <string>
#include <string.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int a[10][10] = { 0 };
char str[10][10];
int dir[4][2] = { { -1, 0 }, { 1, 0 },{0, -1}, { 0, 1 } };
void dfs(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int m = x + dir[i][0];
		int n = y + dir[i][1];
		if (m >= 0 && m < 10 && n >= 0 && n < 10 && str[m][n] != '#')
		{
			if (a[m][n] == 0 || a[x][y] + 1 < a[m][n])
			{
				a[m][n] = a[x][y] + 1;
				dfs(m, n);
			}
		}
	}
}

int main()
{
	char c;
	while (cin >> c)
	{
		str[0][0] = c;
		for (int i = 1; i < 10; i++)
		{
			cin >> c;
			str[0][i] = c;
		}
		getchar();
		for (int i = 1; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
                cin >> c;
			    str[i][j] = c;
			}
			getchar();
		}
		dfs(0, 1);
		cout << a[9][8] << endl;
		memset(a, 0, sizeof(a));
	}
	system("pause");
	return 0;
}