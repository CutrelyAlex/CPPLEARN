/*�����ʼ����������1*/
#include<iostream>
using namespace std;
//�����޲ι��캯�����Ͳ������Ĭ�Ϲ���
//�������вι��캯�����Ͳ������Ĭ���޲ι��캯��,�������Ĭ�Ͽ�������
//�����˿������캯�����Ͳ������Ĭ�Ͽ������캯��

//Ĭ�Ͽ������캯���ĵ���
class Bclass
{
public:
	int m_Age;
};
void test4_1 ()
{
	Bclass p;
	p.m_Age = 18;
	Bclass p2 ( p );
}
int main4_1 ()
{
	test4_1 ();
	return 0;
}


//�����ǳ����
/*
ǳ����:�򵥵ĸ�ֵ��������
���:�����������ռ䣬���п�������
����������ڶ������٣�һ��Ҫ�Լ�дһ�����
*/

class Dclass
{
public:
	Dclass ()
	{
		cout << "Ĭ�Ϲ���" << endl;
	}
	Dclass ( int a, int heap )
	{
		a = M_a;
		//ǳ����
		/*m_heap = new int ( heap )*/; //new ���ʽ  ��̬�����ڴ棬����
		cout << "�вι���" << endl;
	}
	Dclass ( const Dclass &p )
	{
		cout << "�������캯��" << endl;
		m_heap = new int ( *p.m_heap );
	}
	~ Dclass ()
	{
		//��������,���������ٵ������ͷ�
		//ǳ��������ԭ��:
		//ǳ���� ������ַ��ͬ,ָ�뱻�ͷ�2��
		if (m_heap != nullptr)
		{
			delete m_heap;//delete�ͷ� ��new��Ӧ
			m_heap = nullptr;
		}
		cout << "����" << endl;
	}
	int M_a;
	int *m_heap;
};
void test4_3 ()
{
	Dclass p1 ( 18, 160 );
	cout << p1.M_a << " " << p1.m_heap << endl;
	Dclass p2 ( p1 );
	cout << p2.M_a << p2.m_heap << endl;;
}



/*��ʼ���б�*/
//���캯��():����1(ֵ1),��2(ֵ2),...{ }
class Eclass
{
public:
	//��ͳ��ʼ������
	//Eclass (int a,int b,int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}
	//��ʼ���б�
	Eclass ( int a, int b, int c ) : m_a ( a ), m_b ( b ), m_c ( c )
	{
	}

	int m_a;
	int m_b;
	int m_c;
};

/*�������Ϊ���Ա*/
//��Ա�е��������ȱ�����
//������˳���෴
class A
{
};
class B
{
	A a;
};


class Phone
{
public:

	Phone ( string pName )
	{
		m_PName = pName;
	}

	string m_PName;

};

class Student
{
public:
	Student ( string name, string pName ) :m_Name ( name ), m_Phone ( pName )
	{
	}
	string m_Name;
	Phone m_Phone;
};
int main ()
{
	return 0;
}








