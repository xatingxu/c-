//求几步可以到达斐波那契数列：先一步一步挪到最近的两个斐波那契数，然后用N减去左边的数，右边的数减去N，看哪个数小就是哪个值；
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int min(int x, int y)
//{
//	return x < y ? x : y;
//}
//int main()
//{
//	int N = 0;
//	cin >> N;
//	int n1 = 0;
//	int n2 = 1;
//	while (N > n2)
//	{
//		int tmp = n1;
//		n1 = n2;
//		n2 += tmp;
//	}
//
//	cout << min(N - n1, n2 - N) << endl;
//	system("pause");
//	return 0;
//}
//括号是否合法：用栈，遇见左括号进栈，右括号出栈
//#include <iostream>
//#include <stdlib.h>
//#include <string>
//#include <stack>
//using namespace std;
//
//class Parenthesis {
//public:    bool chkParenthesis(string A, int n) {
//			   stack<char> sc;
//			   for (auto e : A)
//			   {
//				   switch (e)
//				   {
//				   case '(':
//					   sc.push(e);
//					   break;
//				   case ')':
//				   {
//							   if (sc.empty() || sc.top() != '(')
//								   return false;
//							   sc.pop();
//				   }
//					   break;
//				   default:
//					   return false;
//				   }
//			   }
//			   return true;
//  }
//};