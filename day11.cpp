//�麯��

#include <iostream>
using namespace std;

//class People
//{
//public:
//	People ( char *name, int age );
//	virtual void display(); //�麯��
//protected:
//	char *m_name;
//	int m_age;
//};
//People::People(char* name,int age):m_name(name),m_age(age){ }
//void People::display ()
//{
//	cout << m_name << "����" << m_age << "���ˣ��Ǹ���ҵ����" << endl;
//}
//class Teacher :public People
//{
//public:
//	Teacher ( char*name, int age, int salary );
//	virtual ~ Teacher ();
//	virtual void display ();
//private:
//	int m_salary;
//};
//Teacher::Teacher ( char *name, int age, int salary ) :People ( name, age ), m_salary ( salary ){}
//Teacher::~Teacher ()
//{
//}
//void Teacher::display ()
//{
//	cout << m_name << "����" << m_age << "���ˣ���һ����ʦ��ÿ����" << m_salary << "Ԫ�����롣" << endl;
//}
//int main ()
//{
//	People *p = new People ("��",23);
//	p->display ();
//
//	p = new Teacher ( "��", 45, 8200 );
//	p->display ();
//	
//	return 0;
//}

//�󲿷�����¶�Ӧ�ý������������������Ϊ�麯����




/*�麯����*/
//����ú����Ƿ��麯������ô�����������ָ��������ҵ��ú���
//����ú������麯����������������ͬ���ĺ����ڱ�������ô�����������ָ���ָ���ҵ��ú�����
//Ҳ����˵��ָ��ָ��Ķ��������ĸ���͵����ĸ���ĺ���������Ƕ�̬��

//���һ����������麯������ô�ڴ�������Ķ���ʱ�ͻ���������һ�����飬
//�����е�ÿһ��Ԫ�ض����麯������ڵ�ַ
#include <string>
class People
{
public:
	People ( string name, int age );
public:
	virtual void display ();
	virtual void eating ();
protected:
	string m_name;
	int m_age;
};
People::People ( string name, int age ) : m_name ( name ), m_age ( age ){}
void People::display ()
{
	cout << "Class People��" << m_name << "����" << m_age << "���ˡ�" << endl;
}
void People::eating ()
{
	cout << "Class People�������ڳԷ����벻Ҫ����˵��..." << endl;
}
class Student :public People
{
public:
	Student ( string name,int age, float score );
public:
	virtual void display ();
	virtual void examing ();
protected:
	float m_score;
};
Student::Student(string name,int age,float score): 
	People(name,age),m_score(score){ }
void Student::display ()
{
	cout << "Class Student��" << m_name << "����" << m_age << "���ˣ�����" << m_score << "�֡�" << endl;
}
void Student::examing ()
{
	cout << "Class Student��" << m_name << "���ڿ��ԣ��벻Ҫ����T����" << endl;
}
class Senior : public Student
{
public:
	Senior ( string name, int age, float score, bool hasJob );
public:
	virtual void display ();
	virtual void partying ();
private:
	bool m_hasJob;
};
Senior::Senior ( string name, int age, float score, bool hasJob ) :
	Student ( name, age, score ), m_hasJob ( hasJob )
{
}
void Senior::display ()
{
	if (m_hasJob)
	{
		cout << "Class Senior��" << m_name << "��" << m_score << "�ĳɼ��Ӵ�ѧ��ҵ�ˣ�����˳���ҵ��˹�����Ta����" << m_age << "�ꡣ" << endl;
	}
	else
	{
		cout << "Class Senior��" << m_name << "��" << m_score << "�ĳɼ��Ӵ�ѧ��ҵ�ˣ������ҹ�����˳����Ta����" << m_age << "�ꡣ" << endl;
	}
}
void Senior::partying ()
{
	cout << "Class Senior�����ҵ�ˣ���Ҷ��ڳ�ɢ�ﷹ..." << endl;
}

int main ()
{
	People *p = new People ( "�Ժ�", 29 );
	p->display ();
	p = new Student ( "����", 16, 84.5 );
	p->display ();
	p = new Senior ( "����", 22, 92.0, true );
	p->display ();
	return 0;
}





