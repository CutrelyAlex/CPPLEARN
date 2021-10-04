//��̳�
#include<iostream>
using namespace std;


/*
Ϊ�˽����̳�ʱ��������ͻ�������������⣬C++ �������̳У�
ʹ������������ֻ����һ�ݼ�ӻ���ĳ�Ա��
�ڼ̳з�ʽǰ����� virtual �ؼ��־�����̳�
*/
//class A
//{
//protected:
//	int m_a;
//};
////��̳е�Ŀ������ĳ����������������ŵԸ�⹲�����Ļ���
//class B :virtual public A //�����
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
//		m_a = a;//��ȷ,������ D �о�ֻ������һ�ݳ�Ա���� m_a
//	}
//private:
//	int m_d;
//};
//int mainA ()
//{
//	D d;
//	return 0;
//}


//����������Ĺ��캯������Ҫ���������Ĺ��캯��



/*�����������ת��*/

//�����������ֵ���������

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
//����C
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
//����������D
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
	////��ֵǰ
	//a.display ();
	//b.display ();
	//cout << "--------------" << endl;
	////��ֵ��
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