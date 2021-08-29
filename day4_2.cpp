#include<iostream>
using namespace std;
class Person
{
//空对象占用内存空间为1个字节
//有一个非静态成员变量时是4
//静态成员变量不属于类对象 不计入类计算大小
//成员函数也不属于类对象上
	int a;

	static int m_B;

	void func(){ }
};
int Person::m_B = 10;
void test01 ()
{
	Person p;
	cout << "size of p" << sizeof ( p ) << endl;
}


/*this 指针*/

//this指针指向被调用的成员函数所属的对象
//this正在是隐含每一个非静态成员函数内
//this指针不需要定义


//当形参和成员变量同名，可以用this指针区分
//实际情况请规范命名
class Teacher
{
public:
	Teacher ( int age )
	{
		this->age = age;
	}
	//在类的非静态成员函数中返回对象本身 可使用return *this
	Teacher& Taddage ( Teacher &p )
	{
		this->age += p.age;
		return *this;
	}
	int age;

};


void test04 ()
{
	Teacher t1 ( 10 );
	Teacher t2 ( 10 );



}


