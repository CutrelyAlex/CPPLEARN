/*类和对象*/
#include<iostream>
using namespace std;
#include<string>
//C++面向对象三大特性:封装，继承，多态

//万事万物皆为对象
//对象上有属性和行为
//具有相同性质的对象，可以抽象为类
//比如人 属性有姓名，身高，... 行为有跑，跳，吃饭，... 人属于人类 车属于车类
//类中的属性和行为统称为成员
//属性称为成员属性/成员变量   行为称为成员函数/成员方法

//创建一个类:struct或class
//封装:把属性和行为作为整体，和加以权限控制
//例:用class设计一个圆类（圆周长=2*PI*半径）
const double PI = 3.14;

//圆类
class Circle
{
	//访问权限
public:  //公共权限
	//属性
	int m_r;
	//行为
	double calZC ()
	{
		return 2 * PI*m_r;
	}
};


int main1 ()
{
	//通过圆类创建圆对象 --实例化
	Circle c1;
	//对对象赋值
	c1.m_r = 10;
	cout << c1.calZC () << endl;
	return 0;
}

//设计学生类
class Student
{
public:
	string m_name;
	int m_id;
	void showStudent ()
	{
		cout << "姓名:" << m_name << " \nID:" << m_id << endl;
	}
	void setName ( string name )
	{
		m_name = name;
	}
	void setId ( int id )
	{
		m_id = id;
	}
};


int main2 ()
{
	Student s1;
	s1.m_id = 1;
	s1.m_name = "张力";
	s1.showStudent ();
	s1.setId ( 123 );
	return 0;
}

//访问权限
//public 公共权限 成员 类内可访问 类外可访问
//protected 保护权限 成员 类内可访问 类外不可访问 子可访问父内容
//private 保护权限 成员 类内可访问 类外不可访问 子不可访问父内容

class Person
{
public:
	string m_Name;
protected:
	string m_Car;
private:
	int m_Password;
public:
	void fun ()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 12345;
	}
};
int main3 ()
{
	Person p1;
	p1.m_Name = "张三";
	//p1.m_Car 不可访问
}

/*
struct和class区别
默认访问权限不同
struct默认权限为公共
class默认权限为私有
*/

//成员属性经常设置为私有
//优点:可以自己控制读写权限
//对于写权限可以检测数据的有效性
//一般会提供接口来修改私有成员属性

class Me
{
public:
	void setName (string name)
	{
		m_Name = name;
	}
	string getName ()
	{
		return m_Name;
	}
private:
	string m_Name;
	int m_Age;
	string m_Lover;
};