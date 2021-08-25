#include<iostream>
using namespace std;
/*C++函数高级*/


/*函数的占位参数*/
//返回值 函数名(数据类型){ }
//目前阶段暂记即可
//占位参数可以是默认参数
//void func ( int a ,int = 10)
//{
//	cout << "func" << endl;
//}
//int main ()
//{
//	func ( 10, 20 );
//	return 0;
//}

/*函数重载*/
//函数名可以相同，提高复用性
//重载满足条件
//同一个作用域，函数名称相同，
//函数参数类型，参数个数或顺序不同(函数返回值不是函数重载条件)
//注意:引用加const可作为重载条件
//函数重载出现默认参数容易造成二义性
void func ()
{
	cout << "func" << endl;
}
void func ( int a, double b )
{
	cout << "func2" << endl;
}
void func ( double a ,int b)
{
	cout << "func3" << endl;
}
//int main ()
//{
//	func ();
//	func ( 10,2.31 );
//	func ( 3.14 ,100);
//	return 0;
//}







