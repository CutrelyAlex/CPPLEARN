#include<iostream>
using namespace std;
class Person
{
//�ն���ռ���ڴ�ռ�Ϊ1���ֽ�
//��һ���Ǿ�̬��Ա����ʱ��4
//��̬��Ա��������������� ������������С
//��Ա����Ҳ�������������
	int a;

	static int m_B;

	void func(){ }
};
int Person::m_B = 10;
void test01 ()
{
	Person p;
	cout << "size of p" << sizeof ( p ) << endl;
}


/*this ָ��*/

//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//this����������ÿһ���Ǿ�̬��Ա������
//thisָ�벻��Ҫ����


//���βκͳ�Ա����ͬ����������thisָ������
//ʵ�������淶����
class Teacher
{
public:
	Teacher ( int age )
	{
		this->age = age;
	}
	//����ķǾ�̬��Ա�����з��ض����� ��ʹ��return *this
	Teacher& Taddage ( Teacher &p )
	{
		this->age += p.age;
		return *this;
	}
	int age;

};


void test04 ()
{
	Teacher t1 ( 10 );
	Teacher t2 ( 10 );



}


