/*
����ĳ�ʼ��������
*/
//C++ÿ�����󶼻��г�ʼ���ú� ��������ǰ���������ݵ�����
#include<iostream>
using namespace std;
/*
���캯��
��������
*/
//����ĳ�ʼ���ɹ��캯�����
//�����������������
//����������û�ṩ������±��������Զ��ṩ�����ǿ�ʵ�ֵ�
//���캯�����ڴ�������Ϊ����ĳ�Ա���Ը�ֵ ���������ڶ�������ǰ����


//���캯��
//����(){}
//���캯�� û�з���ֵҲ����дvoid
//��������������ͬ
//���캯�������в��������Է�������
//������ö���ʱ���Զ����ù��죬�����ֶ����ã�����ֻ�����һ��

//��������
//~����(){}
//��������,û�з���ֵ
//������ǰ����~
//�������в��������ܷ�������
//��������ǰ���Զ����������������ֶ����ã�ֻ�����һ��

class Person
{
	//1.���캯��
public:
	Person ()
	{
		cout << "���캯���Զ�����" << endl;
	}

	//��������
	~Person ()
	{
		cout << "��������" << endl;
	}

};
void test01 ()
{
	Person p;
	Person p2;//ÿ�����󶼳�ʼ������һ��
	//��ջ�ϵ�����,��test01ִ����Ϻ���ͷ��������
}
int main01()
{
	test01 ();
	return 0;
}


/*���캯��
����:
	��������Ϊ:���вι�����޲ι���
	�����ͷ�Ϊ:��ͨ����Ϳ�������
���÷�ʽ
	���ŷ�
	��ʾ��
	��ʽת����
*/

class Person1
{
public:
	Person1 ()
	{
		cout << "�޲�(Ĭ��)����" << endl;
	}

	Person1 (int a)
	{
		cout << "�вι���" << endl;
	}
	//�������캯��
	Person1 (const  Person1 &p )
	{
		age = p.age;
		cout << "��������" << endl;
	}

	~ Person1 ()
	{
		cout << "����" << endl;
	}

	int age;
};

//����
void test02 ()
{
	////1.���ŷ�
	//Person1 p; //Ĭ�Ϲ��캯������,��Ҫ�� ( )
	//Person1 p2 ( 10 ); //�вι��캯��
	//p2.age = 10;
	//Person1 p3 ( p2 );//�������캯��
	////cout << "p2����:" << p2.age << endl; //10
	////cout << "p3����:" << p3.age << endl;  //10

	//2.��ʾ��
	Person1 p1;
	Person1 p2 = Person1 ( 10 );
	Person1 p3 = Person1 ( p2 );
//.�������� ��Ҫ�ÿ������캯����ʼ����������
	Person1 ( 10 );//��ִ����ɺ������
	cout << "˳�����" << endl;

	//3.��ʽת����
	Person1 p4 = 10; //�ȼ���Person1 p4 = Person1(10)
	Person1 p5 = p4;
}

int main02 ()
{
	test02 ();
	return 0;
}


/*���������ĵ���ʱ��*/
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
class PersonC
{
public:
	PersonC ()
	{
		cout << "Ĭ�Ϲ���" << endl;
	}
	PersonC ( int age )
	{
		m_Age = age;
	}
	PersonC ( const PersonC & p )
	{
		m_Age = p.m_Age;
	}
	~ PersonC ()
	{
		;
	}

	int m_Age;
};

void testB01 ()
{
	PersonC p1 ( 20 );
	PersonC p2 ( p1 );
}


int mainB ()
{
	testB01 ();
	return 0;
}

//2ֵ���ݷ�ʽ������������ֵ
void doWork ( PersonC p )
{

}
void testC ()
{
	PersonC p;
	doWork ( p );
}
int main ()
{
	testC ();
}
//3ֵ��ʽ���ؾֲ�����(
PersonC dowork2 ()
{
	PersonC p1;
	return p1; 
}

