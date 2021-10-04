//虚继承
#include<iostream>
using namespace std;


/*
为了解决多继承时的命名冲突和冗余数据问题，C++ 提出了虚继承，
使得在派生类中只保留一份间接基类的成员。
在继承方式前面加上 virtual 关键字就是虚继承
*/
//class A
//{
//protected:
//	int m_a;
//};
////虚继承的目的是让某个类做出声明，承诺愿意共享它的基类
//class B :virtual public A //虚基类
//{
//protected:
//	int m_b;
//};
//class C :virtual public A
//{
//protected:
//	int m_c;
//};
//class D :public B, public C
//{
//public:
//	void seta ( int a )
//	{
//		m_a = a;//正确,派生类 D 中就只保留了一份成员变量 m_a
//	}
//private:
//	int m_d;
//};
//int mainA ()
//{
//	D d;
//	return 0;
//}


//最终派生类的构造函数必须要调用虚基类的构造函数



/*派生类的向上转型*/

//将派生类对象赋值给基类对象

class A
{
public:
	A ( int a );
public:
	void display ();
public:
	int m_a;
};
A::A ( int a ) :m_a ( a ){}
void A::display(){ 
	cout << "Class A:M_a = " << m_a << endl;
}
class B : public A
{
public:
	B ( int a, int b );
public:
	void display ();
public:
	int m_b;
};
B::B ( int a, int b ) : A ( a ), m_b ( b )
{
}
void B::display ()
{
	cout << "Class B: m_a=" << m_a << ", m_b=" << m_b << endl;
}
//基类C
class C
{
public:
	C ( int c );
public:
	void display ();
protected:
	int m_c;
};
C::C ( int c ) : m_c ( c )
{
}
void C::display ()
{
	cout << "Class C: m_c=" << m_c << endl;
}
//最终派生类D
class D : public B, public C
{
public:
	D ( int a, int b, int c, int d );
public:
	void display ();
private:
	int m_d;
};
D::D ( int a, int b, int c, int d ) : B ( a, b ), C ( c ), m_d ( d )
{
}
void D::display ()
{
	cout << "Class D: m_a=" << m_a << ", m_b=" << m_b << ", m_c=" << m_c << ", m_d=" << m_d << endl;
}
int main ()
{
	//A a ( 10 );
	//B b ( 66, 99 );
	////赋值前
	//a.display ();
	//b.display ();
	//cout << "--------------" << endl;
	////赋值后
	//a = b;
	//a.display ();
	//b.display ();
	//return 0;

	A *pa = new A ( 1 );
	B *pb = new B ( 2,30 );
	C *pc = new C ( 3 );
	D *pd = new D ( 4, 40, 400, 4000 );
	pa = pd;
	pa->display ();
	pb = pd;
	pb->display ();
	pc = pd;
	pc->display ();
	cout << "-----------------------" << endl;
	cout << "pa=" << pa << endl;
	cout << "pb=" << pb << endl;
	cout << "pc=" << pc << endl;
	cout << "pd=" << pd << endl;
	return 0;
}