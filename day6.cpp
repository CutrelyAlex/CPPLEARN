/*��ʼ���б�*/
#include <iostream>
using namespace std;
class Student
{
private:
	char *m_name;
	int m_age;
	float m_score;
public:
	Student ( char *name, int age, float score );
	void show ();
};
//���ó�ʼ���б�
Student::Student ( char *name, int age, float score ) : m_name ( name ), m_age ( age ), m_score ( score )
{
	//TODO:
}
void Student::show ()
{
	cout << m_name << "��������" << m_age << "���ɼ���" << m_score << endl;
}
int main ()
{
	Student stu ( "С��", 15, 92.5f );
	stu.show ();
	Student *pstu = new Student ( "�", 16, 96 );
	pstu->show ();
	return 0;
}

//�䳤������
class VLA
{
private:
	const int m_len;
	int *m_arr;
	int *m_p;
public:
	void input ();
	void show ();
private:
	int *at ( int i );
public:
	VLA ( int len );
	~VLA ();
};
VLA::VLA ( int len ) : m_len ( len )
{
	if (len > 0)
	{
	m_arr = new int[len];
	}
	else
	{
		m_arr = nullptr;
	}
}
VLA::~VLA ()
{
	delete[] m_arr;
}
void VLA::input ()
{
	for (int i = 0; m_p = at ( i ); i++)
	{
		cin >> *at ( i );
	}
}
void VLA::show ()
{
	for (int i = 0; m_p = at ( i ); i++)
	{
		if (i == m_len - 1)
		{
			cout << *at ( i ) << endl;
		}
		else
		{
			cout << *at ( i ) << ", ";
		}
	}
}

