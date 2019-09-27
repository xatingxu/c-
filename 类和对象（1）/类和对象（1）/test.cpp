//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Date
//{
//public:
//	Date()
//	{
//		cout << "Date()" << endl;
//	}
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void print()
//	{
//		cout << _year << '-' << _month << '-' << _day << endl;
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
//	d1.print();
//	Date d2(2019,7,25);
//	d2.print();
//	system("pause");
//	return 0;
//}

//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hours = _minute = _second = 0;
//	}
//private:
//	int _hours;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//public:
//	
//	void print()
//	{
//		cout << _year << '-' << _month << '-' << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//
//int main()
//{
//	Date d1;
//	d1.print();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//#include <malloc.h>
//#include <assert.h>
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		_array = (int*)malloc(_capacity*sizeof(int));
//		assert(_array);
//		_capacity = capacity;
//		_size = 0;
//	}
//	~SeqList()
//	{
//		if (_array)
//		{
//			free(_array);
//			_capacity = 0;
//			_size = 0;
//		}
//		cout << "~SeqList()" << endl;
//	}
//private:
//	int* _array;
//	int _capacity;
//	int _size;
//};
//
//void Test()
//{
//	SeqList s;//û����������ʱ���������������ջ�ϵĿռ䱻�ͷţ������ڶ��ϵ�malloc�ռ��޷������ͷš�
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


#include <iostream>
#include <cstdlib>

using namespace std;

class String{
public:
	String(const char*  str = " ")
	{
		cout << "String(char* const str):" << this << endl;
		if (nullptr == str)
			_str = "";
		_str = (char*)malloc(strlen(str) + 1);
		_str = str;
	}
	~String()
	{
		cout << "~String():" << this << endl;
		free(_str);
		_str = nullptr;
	private:
		char* _str;
	}
};

	class Person{
		//������Ĭ�ϵĹ��캯������������_name,_gender������String��������
		//����Ĭ�ϵ�������������_name��_gender����String������������
	private:
		String _name;
		String _gender;
		int _age;
	};
	void TestPerson()
	{
		Person p;
	}

	int main()
	{
		TestPerson();
		system("pause");
		return 0;
	}


	class Date{
	public:
		Date(int year, int month, int day)
		{
			_year = year;
			_month = month;
			_day = day;
			cout << "Date(int,int,int)" << endl;
		}

	private:
		int _year;
		int _month;
		int _day;
	};

	void TestDate()
	{
		Date d(2019.9.6);
	}

	int main()
	{
		TestDate();
		return 0;
	}
