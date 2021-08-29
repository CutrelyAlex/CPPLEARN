/*空指针访问成员函数*/
#include<iostream>
using namespace std;


class Person
{
public:
	void showClassName ()
	{
		cout << "PersonClass" << endl;
	}
	void showPersonAge ()
	{
		//防止传入指针未空指针
		if (this == NULL)
		{
			return;
		}
		cout << "Age" << m_Age << endl;
	}
	int m_Age;

};
void test01 ()
{
	
	Person * p = NULL;
	p->showClassName ();  //没有崩溃
	//p->showPersonAge (); 未判断指针NULL时崩溃
	/*
	原因:类内方法内每个变量前默认有this->变量
	如果this是空指针，无法访问其中属性
	*/
}
/*const修饰成员属性*/

class Student
{
public:
	void showPerson () const 
		//在成员后面加const 修饰this指针
	{
		//this指针的本质是指针常量，指针指向不可修改
		this->m_B = 100;
	}
	void func ()
	{

	}
	int m_A;
	mutable int m_B; //特殊变量，在常函数，也可以修改这个值
};
void test02 ()
{
	Student p;
	p.showPerson ();
	const Student p2;
	p2.m_A = 100; //常对象不可修改普通成员变量
	p2.m_B = 200;
	p2.showPerson (); //常对象可修改常函数
	p2.func() //常对象不能调用普通方法
}








