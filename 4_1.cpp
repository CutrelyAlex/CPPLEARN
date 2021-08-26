/*静态成员*/
//在成员变量或成员函数加上关键字static
#include<iostream>
using namespace std;
//静态成员变量
/*
所有对象共享一份数据
在编译阶段分配内存
类内声明，类外初始化
*/
/*静态成员变量 不属于某个对象上
有2种访问方式
	1.通过对象访问
	2.通过类名访问
类外无法访问私有的静态成员变量
*/

class Person
{
public:
	static int m_A;
};
int Person::m_A = 100;
void test01 ()
{
	Person p;
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;

	cout << Person::m_A << endl;
}

void test02 ()
{


}


//静态成员函数
/*
所有对象共享一个函数
静态成员函数只能访问静态成员变量
*/

class Student
{
public:
	static void func ()
	{
		m_A = 100; //访问静态成员变量
		//m_B =200 不可访问非静态成员变量
		cout << "static void func调用" << endl;
	}
	static int m_A;
	int m_B;
private:
	//类外无法直接访问
	static void fun2 ()
	{
		cout << "func2" << endl;
	}
};
void test04 ()
{
	//1通过对象访问
	Student p;
	p.func ();

	//2通过类名
	Student::func ();
}