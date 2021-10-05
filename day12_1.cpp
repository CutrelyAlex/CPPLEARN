/*RTTI����*/
#include<iostream>
using namespace std;

//���ڶ�̬ʱ����Щ���ʽ�������ڱ����ڼ���޷�ȷ����
class Base
{
public:
	void func ();
protected:
	int m_a;
	int m_b;
};
void Base::func () { cout << "Base" << endl; }

class Derived :public Base
{
public:
	void func ();
private:
	int m_c;
};
void Derived::func () { cout << "Derived" << endl; }

int mainA ()
{
	Base *p;
	int n;
	cin >> n;

	if (n <= 100)
	{
		p = new Base ();
	}
	else
	{
		p = new Derived ();
	}
	cout << typeid(p).name() << endl;
	cout << typeid(*p).name () << endl;
	return 0;
}
/*�����������麯���� vftable �Ŀ�ͷ����һ��ָ�룬ָ��ǰ���Ӧ�� type_info ����
�����������н׶λ�ȡ������Ϣʱ������ͨ������ָ�� p �ҵ��麯����ָ�� vfptr��
��ͨ�� vfptr �ҵ� type_info �����ָ�룬����ȡ��������Ϣ��*/


//����Ӧ��

class People
{
public:
	virtual void func(){}
};
class  Student: public People{};

int main ()
{
	People *p;
	int n;
	cin >> n;
	if (n <= 100)
	{
		p = new People ();
	}
	else
	{
		p = new Student ();
	}

	if(typeid(*p) == typeid(People))
	{
		cout << "im human" << endl;
	}
	else
	{
		cout << "im student"<<endl;
	}
	return 0;
}