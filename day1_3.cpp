/*��Ͷ���*/
#include<iostream>
using namespace std;
#include<string>
//C++���������������:��װ���̳У���̬

//���������Ϊ����
//�����������Ժ���Ϊ
//������ͬ���ʵĶ��󣬿��Գ���Ϊ��
//������ ��������������ߣ�... ��Ϊ���ܣ������Է���... ���������� �����ڳ���
//���е����Ժ���Ϊͳ��Ϊ��Ա
//���Գ�Ϊ��Ա����/��Ա����   ��Ϊ��Ϊ��Ա����/��Ա����

//����һ����:struct��class
//��װ:�����Ժ���Ϊ��Ϊ���壬�ͼ���Ȩ�޿���
//��:��class���һ��Բ�ࣨԲ�ܳ�=2*PI*�뾶��
const double PI = 3.14;

//Բ��
class Circle
{
	//����Ȩ��
public:  //����Ȩ��
	//����
	int m_r;
	//��Ϊ
	double calZC ()
	{
		return 2 * PI*m_r;
	}
};


int main1 ()
{
	//ͨ��Բ�ഴ��Բ���� --ʵ����
	Circle c1;
	//�Զ���ֵ
	c1.m_r = 10;
	cout << c1.calZC () << endl;
	return 0;
}

//���ѧ����
class Student
{
public:
	string m_name;
	int m_id;
	void showStudent ()
	{
		cout << "����:" << m_name << " \nID:" << m_id << endl;
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
	s1.m_name = "����";
	s1.showStudent ();
	s1.setId ( 123 );
	return 0;
}

//����Ȩ��
//public ����Ȩ�� ��Ա ���ڿɷ��� ����ɷ���
//protected ����Ȩ�� ��Ա ���ڿɷ��� ���ⲻ�ɷ��� �ӿɷ��ʸ�����
//private ����Ȩ�� ��Ա ���ڿɷ��� ���ⲻ�ɷ��� �Ӳ��ɷ��ʸ�����

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
		m_Name = "����";
		m_Car = "������";
		m_Password = 12345;
	}
};
int main3 ()
{
	Person p1;
	p1.m_Name = "����";
	//p1.m_Car ���ɷ���
}

/*
struct��class����
Ĭ�Ϸ���Ȩ�޲�ͬ
structĬ��Ȩ��Ϊ����
classĬ��Ȩ��Ϊ˽��
*/

//��Ա���Ծ�������Ϊ˽��
//�ŵ�:�����Լ����ƶ�дȨ��
//����дȨ�޿��Լ�����ݵ���Ч��
//һ����ṩ�ӿ����޸�˽�г�Ա����

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