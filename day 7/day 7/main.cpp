//�󼸲����Ե���쳲��������У���һ��һ��Ų�����������쳲���������Ȼ����N��ȥ��ߵ������ұߵ�����ȥN�����ĸ���С�����ĸ�ֵ��
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
//�����Ƿ�Ϸ�����ջ�����������Ž�ջ�������ų�ջ
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