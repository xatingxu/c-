//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Date{
//public:
//	//构造函数
//	Date(int year = 2019, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//拷贝构造函数
//	     Date(const Date d)
//	      {
//		     _year = d._year;
//		     _month = d._month;
//		     _day = d._day;
//		   }
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Date{
//public:
//	//构造函数
//	Date(int year = 2019, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <malloc.h>
//#include <stdlib.h>
//#include <string.h>
//using namespace std;
//
//class String{
//public:
//	String(const char* str = "Amy")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("me too");
//	String s2(s1);
//}
//

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Date{
//public:
//	//构造函数
//	Date(int year = 2019, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//拷贝构造函数
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	bool operator==(const Date& d1)
//	{
//		return _year == d1._year
//		       &&_month == d1._month
//		      &&_day == d1._day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//
//	Date d1(2018, 9, 26);    
//	Date d2(2018, 9, 27);    
//	cout << (d1 == d2) << endl;
//	system("pause");
//	return 0;
//}
//
//class Date { 
//public:    
//	Date(int year = 1900, int month = 1, int day = 1)    
//	{ _year = year;        
//	_month = month;        
//	_day = day; 
//	}        
//	Date(const Date& d)    
//	{ 
//		_year = d._year;       
//		_month = d._month;        _
//			day = d._day; 
//	}        
//	Date& operator=(const Date& d)    
//	{ 
//		if (this != &d)        
//	     { 
//	          _year = d._year;           
//			  _month = d._month;           
//			  _day = d._day; 
//		} 
//	} 
//private:    
//	int _year;    
//	int _month;   
//	int _day; 
//};