/*��̬��Ա*/
//�ڳ�Ա�������Ա�������Ϲؼ���static
#include<iostream>
using namespace std;
//��̬��Ա����
/*
���ж�����һ������
�ڱ���׶η����ڴ�
���������������ʼ��
*/
/*��̬��Ա���� ������ĳ��������
��2�ַ��ʷ�ʽ
	1.ͨ���������
	2.ͨ����������
�����޷�����˽�еľ�̬��Ա����
*/

class Person
{
public:
	static int m_A;
};
int Person::m_A = 100;
void test01 ()
{
	Person p;
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;

	cout << Person::m_A << endl;
}

void test02 ()
{


}


//��̬��Ա����
/*
���ж�����һ������
��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
*/

class Student
{
public:
	static void func ()
	{
		m_A = 100; //���ʾ�̬��Ա����
		//m_B =200 ���ɷ��ʷǾ�̬��Ա����
		cout << "static void func����" << endl;
	}
	static int m_A;
	int m_B;
private:
	//�����޷�ֱ�ӷ���
	static void fun2 ()
	{
		cout << "func2" << endl;
	}
};
void test04 ()
{
	//1ͨ���������
	Student p;
	p.func ();

	//2ͨ������
	Student::func ();
}