#include<iostream>
using namespace std;
/*�̳к�����*/
//���̳е����Ϊ�������࣬�̳е����Ϊ�����������


//���� ��
class People
{
public:
	void setname ( char *name );
	void setage ( int age );
	char *getname ();
	int getage ();
private:
	char *m_name;
	int m_age;
};
void People::setname ( char *name ){m_name = name;}
void People::setage ( int age ){m_age = age;}
char* People::getname (){return m_name;}
int People::getage (){return m_age;}

//������ Student
class Student : public People
{
public:
	void setscore ( float score );
	float getscore ();
private:
	float m_score;
};
void Student::setscore ( float score )
{
	m_score = score;
}
float Student::getscore ()
{
	return m_score;
}
int mainstu ()
{
	Student stu;
	stu.setname ( "С��" );
	stu.setage ( 16 );
	stu.setscore ( 95.5f );
	cout << stu.getname () << "�������� " << stu.getage () << "���ɼ��� " << stu.getscore () << endl;
	return 0;
}
/*
class ��������:�ۼ̳з�ʽ�� ������{
	�����������ӵĳ�Ա
};
�����Ա���������еķ���Ȩ�޲��ø��ڼ̳з�ʽ��ָ����Ȩ�ޡ�
���ϣ������ĳ�Ա�Ȳ����Ⱪ¶������ͨ��������ʣ�����������������ʹ�ã���ôֻ������Ϊ protected
*/

//ʹ��using�ؼ��ֿ��Ըı�����Ա���������еķ���Ȩ��
class PeopleB
{
protected:
	char* m_name;
	int m_age;
public:
	PeopleB ( char*, int );
};
class student : public PeopleB
{
private:
	float m_score;
public:
	student ( char* name, int age, float score );
};
//����������еĳ�Ա��������Ա�����ͳ�Ա�������ͻ����еĳ�Ա������
//��ô�ͻ��ڱδӻ���̳й����ĳ�Ա
//ע�� �����Ա�������������Ա�������ᷢ������
//class Base
//{
//public:
//	void func ();
//	void func ( int );
//};
//class Derived :public Base
//{
//public:
//	void func ( char * );
//	void func ( bool );
//};
//����

//�����������Ĺ��캯��
PeopleB::PeopleB(char* name,int age):m_name(name),m_age(age){ }
student::student ( char*name, int age, float score ) :
PeopleB ( name, age ), m_score ( score ){ }

//�����������Ĺ��캯��
/*
�������������ʱ�����캯����ִ��˳��ͼ̳�˳����ͬ��
	����ִ�л��๹�캯������ִ�������๹�캯����
���������������ʱ������������ִ��˳��ͼ̳�˳���෴��
	����ִ��������������������ִ�л�������������
*/
