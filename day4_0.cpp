/*对象初始化和清理续1*/
#include<iostream>
using namespace std;
//调用无参构造函数，就不会调用默认构造
//调用了有参构造函数，就不会调用默认无参构造函数,但会调用默认拷贝构造
//调用了拷贝构造函数，就不会调用默认拷贝构造函数

//默认拷贝构造函数的调用
class Bclass
{
public:
	int m_Age;
};
void test4_1 ()
{
	Bclass p;
	p.m_Age = 18;
	Bclass p2 ( p );
}
int main4_1 ()
{
	test4_1 ();
	return 0;
}


//深拷贝和浅拷贝
/*
浅拷贝:简单的赋值拷贝操作
深拷贝:新向堆区申请空间，进行拷贝操作
如果属性有在堆区开辟，一定要自己写一份深拷贝
*/

class Dclass
{
public:
	Dclass ()
	{
		cout << "默认构造" << endl;
	}
	Dclass ( int a, int heap )
	{
		a = M_a;
		//浅拷贝
		/*m_heap = new int ( heap )*/; //new 表达式  动态开辟内存，堆区
		cout << "有参构造" << endl;
	}
	Dclass ( const Dclass &p )
	{
		cout << "拷贝构造函数" << endl;
		m_heap = new int ( *p.m_heap );
	}
	~ Dclass ()
	{
		//析构代码,将堆区开辟的数据释放
		//浅拷贝崩溃原因:
		//浅拷贝 拷贝地址相同,指针被释放2次
		if (m_heap != nullptr)
		{
			delete m_heap;//delete释放 和new对应
			m_heap = nullptr;
		}
		cout << "析构" << endl;
	}
	int M_a;
	int *m_heap;
};
void test4_3 ()
{
	Dclass p1 ( 18, 160 );
	cout << p1.M_a << " " << p1.m_heap << endl;
	Dclass p2 ( p1 );
	cout << p2.M_a << p2.m_heap << endl;;
}



/*初始化列表*/
//构造函数():属性1(值1),性2(值2),...{ }
class Eclass
{
public:
	//传统初始化操作
	//Eclass (int a,int b,int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}
	//初始化列表
	Eclass ( int a, int b, int c ) : m_a ( a ), m_b ( b ), m_c ( c )
	{
	}

	int m_a;
	int m_b;
	int m_c;
};

/*类对象作为类成员*/
//成员中的类对象会先被构造
//析构的顺序相反
class A
{
};
class B
{
	A a;
};


class Phone
{
public:

	Phone ( string pName )
	{
		m_PName = pName;
	}

	string m_PName;

};

class Student
{
public:
	Student ( string name, string pName ) :m_Name ( name ), m_Phone ( pName )
	{
	}
	string m_Name;
	Phone m_Phone;
};
int main ()
{
	return 0;
}








