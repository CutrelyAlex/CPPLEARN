/*��ָ����ʳ�Ա����*/
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
		//��ֹ����ָ��δ��ָ��
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
	p->showClassName ();  //û�б���
	//p->showPersonAge (); δ�ж�ָ��NULLʱ����
	/*
	ԭ��:���ڷ�����ÿ������ǰĬ����this->����
	���this�ǿ�ָ�룬�޷�������������
	*/
}
/*const���γ�Ա����*/

class Student
{
public:
	void showPerson () const 
		//�ڳ�Ա�����const ����thisָ��
	{
		//thisָ��ı�����ָ�볣����ָ��ָ�򲻿��޸�
		this->m_B = 100;
	}
	void func ()
	{

	}
	int m_A;
	mutable int m_B; //����������ڳ�������Ҳ�����޸����ֵ
};
void test02 ()
{
	Student p;
	p.showPerson ();
	const Student p2;
	p2.m_A = 100; //�����󲻿��޸���ͨ��Ա����
	p2.m_B = 200;
	p2.showPerson (); //��������޸ĳ�����
	p2.func() //�������ܵ�����ͨ����
}








