/*
对象的初始化和清理
*/
//C++每个对象都会有初始设置和 对象销毁前的清理数据的设置
#include<iostream>
using namespace std;
/*
构造函数
析构函数
*/
//对象的初始化由构造函数解决
//清理由析构函数解决
//两个函数在没提供的情况下编译器会自动提供，但是空实现的
//构造函数用于创建对象为对象的成员属性赋值 析构函数在对象销毁前调用


//构造函数
//类名(){}
//构造函数 没有返回值也不用写void
//函数名和类名相同
//构造函数可以有参数，可以发生重载
//程序调用对象时会自动调用构造，无需手动调用，而且只会调用一次

//析构函数
//~类名(){}
//析构函数,没有返回值
//在名称前加上~
//不可以有参数，不能发生重载
//对象销毁前会自动调用析构，无需手动调用，只会调用一次

class Person
{
	//1.构造函数
public:
	Person ()
	{
		cout << "构造函数自动调用" << endl;
	}

	//析构函数
	~Person ()
	{
		cout << "析构函数" << endl;
	}

};
void test01 ()
{
	Person p;
	Person p2;//每个对象都初始化调用一次
	//在栈上的数据,在test01执行完毕后才释放这个对象
}
int main01()
{
	test01 ();
	return 0;
}


/*构造函数
分类:
	按参数分为:分有参构造和无参构造
	按类型分为:普通构造和拷贝构造
调用方式
	括号法
	显示法
	隐式转换法
*/

class Person1
{
public:
	Person1 ()
	{
		cout << "无参(默认)构造" << endl;
	}

	Person1 (int a)
	{
		cout << "有参构造" << endl;
	}
	//拷贝构造函数
	Person1 (const  Person1 &p )
	{
		age = p.age;
		cout << "拷贝构造" << endl;
	}

	~ Person1 ()
	{
		cout << "析构" << endl;
	}

	int age;
};

//调用
void test02 ()
{
	////1.括号法
	//Person1 p; //默认构造函数调用,不要加 ( )
	//Person1 p2 ( 10 ); //有参构造函数
	//p2.age = 10;
	//Person1 p3 ( p2 );//拷贝构造函数
	////cout << "p2年龄:" << p2.age << endl; //10
	////cout << "p3年龄:" << p3.age << endl;  //10

	//2.显示法
	Person1 p1;
	Person1 p2 = Person1 ( 10 );
	Person1 p3 = Person1 ( p2 );
//.匿名对象 不要用拷贝构造函数初始化匿名对象
	Person1 ( 10 );//当执行完成后就析构
	cout << "顺序检验" << endl;

	//3.隐式转换法
	Person1 p4 = 10; //等价于Person1 p4 = Person1(10)
	Person1 p5 = p4;
}

int main02 ()
{
	test02 ();
	return 0;
}


/*拷贝函数的调用时机*/
//1.使用一个已经创建完毕的对象来初始化一个新对象
class PersonC
{
public:
	PersonC ()
	{
		cout << "默认构造" << endl;
	}
	PersonC ( int age )
	{
		m_Age = age;
	}
	PersonC ( const PersonC & p )
	{
		m_Age = p.m_Age;
	}
	~ PersonC ()
	{
		;
	}

	int m_Age;
};

void testB01 ()
{
	PersonC p1 ( 20 );
	PersonC p2 ( p1 );
}


int mainB ()
{
	testB01 ();
	return 0;
}

//2值传递方式给函数参数传值
void doWork ( PersonC p )
{

}
void testC ()
{
	PersonC p;
	doWork ( p );
}
int main ()
{
	testC ();
}
//3值方式返回局部对象(
PersonC dowork2 ()
{
	PersonC p1;
	return p1; 
}

