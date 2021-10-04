//多继承 --一个派生类可以有两个或多个基类
/*多继承容易让代码逻辑复杂、思路混乱，一直备受争议，中小型项目中较少使用 \
，后来的 Java、C#、PHP 等干脆取消了多继承。*/

#include<iostream>
using namespace std;
class BaseA
{
public:
	BaseA ( int a, int b );
	~ BaseA ();
protected:
	int m_a;
	int m_b;
};
BaseA::BaseA ( int a, int b ):m_a ( a ), m_b ( b )
{
	cout << "BaseA ct" << endl;
}
BaseA::~BaseA ()
{
	cout << "BaseA dt" << endl;
}

//基类B
class BaseB
{
public:
	BaseB ( int c, int d );
	~BaseB ();
protected:
	int m_c;
	int m_d;
};
BaseB::BaseB ( int c, int d ) :m_c ( c ), m_d ( d )
{
	cout << "BaseB ct" << endl;
}
BaseB::~BaseB ()
{
	cout << "base b dt" << endl;
}

//派生類
class Derived :public BaseA, public BaseB
{
public:
	Derived ( int a, int b, int c, int d, int e );
	~Derived();
public:
	void show ();
private:
	int m_e;
};
Derived::Derived ( int a, int b, int c, int d, int e ) :BaseA ( a, b ), BaseB ( c, d ), m_e ( e )
{
	cout << "der ct" << endl;
}
Derived::~Derived ()
{
	cout << "der dt" << endl;
}
void Derived::show ()
{
	cout << m_a << " " << m_b << " " <<m_c<<" "<< m_d << " " << m_e << " ";
}
//int main ()
//{
//	Derived obj ( 1, 2, 3, 4, 5 );
//	obj.show ();
//	return 0;
//}
