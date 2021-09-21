#include<iostream>
using namespace std;
/*继承和派生*/
//被继承的类称为父类或基类，继承的类称为子类或派生类


//基类 人
class People
{
public:
	void setname ( char *name );
	void setage ( int age );
	char *getname ();
	int getage ();
private:
	char *m_name;
	int m_age;
};
void People::setname ( char *name ){m_name = name;}
void People::setage ( int age ){m_age = age;}
char* People::getname (){return m_name;}
int People::getage (){return m_age;}

//派生类 Student
class Student : public People
{
public:
	void setscore ( float score );
	float getscore ();
private:
	float m_score;
};
void Student::setscore ( float score )
{
	m_score = score;
}
float Student::getscore ()
{
	return m_score;
}
int mainstu ()
{
	Student stu;
	stu.setname ( "小明" );
	stu.setage ( 16 );
	stu.setscore ( 95.5f );
	cout << stu.getname () << "的年龄是 " << stu.getage () << "，成绩是 " << stu.getscore () << endl;
	return 0;
}
/*
class 派生类名:［继承方式］ 基类名{
	派生类新增加的成员
};
基类成员在派生类中的访问权限不得高于继承方式中指定的权限。
如果希望基类的成员既不向外暴露（不能通过对象访问），还能在派生类中使用，那么只能声明为 protected
*/

//使用using关键字可以改变基类成员在派生类中的访问权限
class PeopleB
{
protected:
	char* m_name;
	int m_age;
public:
	PeopleB ( char*, int );
};
class student : public PeopleB
{
private:
	float m_score;
public:
	student ( char* name, int age, float score );
};
//如果派生类中的成员（包括成员变量和成员函数）和基类中的成员重名，
//那么就会遮蔽从基类继承过来的成员
//注意 基类成员函数和派生类成员函数不会发生重载
//class Base
//{
//public:
//	void func ();
//	void func ( int );
//};
//class Derived :public Base
//{
//public:
//	void func ( char * );
//	void func ( bool );
//};
//报错

//基类和派生类的构造函数
PeopleB::PeopleB(char* name,int age):m_name(name),m_age(age){ }
student::student ( char*name, int age, float score ) :
PeopleB ( name, age ), m_score ( score ){ }

//基类和派生类的构造函数
/*
创建派生类对象时，构造函数的执行顺序和继承顺序相同，
	即先执行基类构造函数，再执行派生类构造函数。
而销毁派生类对象时，析构函数的执行顺序和继承顺序相反，
	即先执行派生类析构函数，再执行基类析构函数。
*/
