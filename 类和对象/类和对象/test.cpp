//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	//const int a = 10;
//	////int& ra;//δ���г�ʼ������������б���
//	//int& ra = a;//��Ϊa��const����������Ҳ������const����
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
//	//int& ra = a;//�������Ͳ�ͬ
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
//float &fn2(float r){ //&˵�����ص���temp�����ã����仰˵���Ƿ���temp����
//	  temp = r*r*3.14;
//	  return temp;
//	
//}
// int main(){
//	     float a = fn1(5.0); //case 1������ֵ
//	     //float &b=fn1(5.0); //case 2:�ú����ķ���ֵ��Ϊ���õĳ�ʼ��ֵ [Error] invalid initialization of non-const reference of type 'float&' from an rvalue of type 'float'
//		//����Щ���������Գɹ��������䣬�������һ��warning�� 
//		 float c = fn2(5.0);//case 3����������
//	     float &d = fn2(5.0);//case 4���ú������ص�������Ϊ�����õĳ�ʼ��ֵ
//	     cout << a << endl;//78.5
//	    //cout<<b<<endl;//78.5
//		cout << c << endl;//78.5
//	    cout << d << endl;//78.5
//	    return 0;
//	
//}
//ADD��SWAP�ĺ꺯��
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
//	auto c = 3, d = 4.1;//�������ᱨ��c��d�ı������Ͳ�һ����auto�޷������Ƶ�
//}

//void test()
//{
//	int a[] = { 1, 1, 2 };
//	auto b[] = a;//�������ᱨ��
//}

//��Χ��forѭ��
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
//	for (auto& e : a)//�������ã���e�ı䣬Ҳ�ı��˶�a�ĸı�
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
	cout << strlen(str) << endl;//0��strlen����\0�ͽ���
	system("pause");
	return 0;
}