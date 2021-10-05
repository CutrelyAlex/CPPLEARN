/*RTTI机制*/
#include<iostream>
using namespace std;

//存在多态时，有些表达式的类型在编译期间就无法确定了
class Base
{
public:
	void func ();
protected:
	int m_a;
	int m_b;
};
void Base::func () { cout << "Base" << endl; }

class Derived :public Base
{
public:
	void func ();
private:
	int m_c;
};
void Derived::func () { cout << "Derived" << endl; }

int mainA ()
{
	Base *p;
	int n;
	cin >> n;

	if (n <= 100)
	{
		p = new Base ();
	}
	else
	{
		p = new Derived ();
	}
	cout << typeid(p).name() << endl;
	cout << typeid(*p).name () << endl;
	return 0;
}
/*编译器会在虚函数表 vftable 的开头插入一个指针，指向当前类对应的 type_info 对象。
当程序在运行阶段获取类型信息时，可以通过对象指针 p 找到虚函数表指针 vfptr，
再通过 vfptr 找到 type_info 对象的指针，进而取得类型信息。*/


//具体应用

class People
{
public:
	virtual void func(){}
};
class  Student: public People{};

int main ()
{
	People *p;
	int n;
	cin >> n;
	if (n <= 100)
	{
		p = new People ();
	}
	else
	{
		p = new Student ();
	}

	if(typeid(*p) == typeid(People))
	{
		cout << "im human" << endl;
	}
	else
	{
		cout << "im student"<<endl;
	}
	return 0;
}