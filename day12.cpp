/*typeid运算符*/

//操作对象为表达式或数据类型
#include<iostream>
#include<typeinfo>
using namespace std;

class B{};
int mainA()
{
	int n = 10;
	const type_info &nInfo = typeid(n);
	const type_info &Binfo = typeid(B);
	cout << nInfo.name () << "|" << nInfo.raw_name () << "|" << nInfo.hash_code () << endl;
	cout << Binfo.name () << "|" << Binfo.raw_name () << "|" << Binfo.hash_code () << endl;
	char *str;
	if(typeid(n)!=typeid(str))
	{
		cout << "false" << endl;
	}
	return 0;
}


class Base{};
class Derived:public Base{};

int main ()
{
	Base obj1;
	Base *p1;
	Derived obj2;
	Derived *p2 = new Derived;
	p1 = p2;
	cout << (typeid(*p1) == typeid(Base)) << endl;
	return 0;
}





