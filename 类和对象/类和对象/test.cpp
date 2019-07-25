//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	//const int a = 10;
//	////int& ra;//未进行初始化编译器会进行报错
//	//int& ra = a;//因为a是const常量，引用也必须是const类型
//	//cout << ra << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	double a = 10.5;
//	//int& ra = a;//报错，类型不同
//	const int& ra = a;
//	cout << ra << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//float temp;
//float fn1(float r){
//	  temp = r*r*3.14;
//	  return temp;
//	
//}
//float &fn2(float r){ //&说明返回的是temp的引用，换句话说就是返回temp本身
//	  temp = r*r*3.14;
//	  return temp;
//	
//}
// int main(){
//	     float a = fn1(5.0); //case 1：返回值
//	     //float &b=fn1(5.0); //case 2:用函数的返回值作为引用的初始化值 [Error] invalid initialization of non-const reference of type 'float&' from an rvalue of type 'float'
//		//（有些编译器可以成功编译该语句，但会给出一个warning） 
//		 float c = fn2(5.0);//case 3：返回引用
//	     float &d = fn2(5.0);//case 4：用函数返回的引用作为新引用的初始化值
//	     cout << a << endl;//78.5
//	    //cout<<b<<endl;//78.5
//		cout << c << endl;//78.5
//	    cout << d << endl;//78.5
//	    return 0;
//	
//}
//ADD和SWAP的宏函数
//#include <stdio.h>
//#include <stdlib.h>
//#define ADD(x,y) ((x)+(y))
//#define SWAP(x,y) do{x=x+y;y=x-y;x=x-y;}while(0)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int d = ADD(a, b);
//	SWAP(a, b);
//	printf("%d %d\n", a,b);
//	system("pause");
//	return 0;
//}

//auto
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c= 'a';
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	auto b = &a; //(int*)
//	auto* c = &a;//(int*)
//	auto& d = a;//(int)
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	system("pause");
//	return 0;
//}

//void testauto()
//{
//	auto a = 1, b = 2;
//	auto c = 3, d = 4.1;//编译器会报错，c和d的变量类型不一样，auto无法进行推导
//}

//void test()
//{
//	int a[] = { 1, 1, 2 };
//	auto b[] = a;//编译器会报错
//}

//范围化for循环
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a[] = { 1, 2, 4, 67, 7, 8 };
//	cout << " ------------c++98------------" << endl;
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		a[i] *= 2;
//		cout << a[i] << endl;
//	}
//		
//	cout << " ------------c++11------------" << endl;
//	for (auto& e : a)//加上引用，对e改变，也改变了对a的改变
//	{
//		cout << e << endl;
//	}
//
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	char str[] = "\0";
	cout << sizeof(str) << endl;//2
	cout << strlen(str) << endl;//0，strlen遇到\0就结束
	system("pause");
	return 0;
}