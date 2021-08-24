#include<iostream>  //标准输出输入流
#include<string>
using namespace std;  //命名空间

/*
Cpp学习(继C)
*/
//CPP新数据类型
//int main ()
//{
//	/*字符串类型string*/
//	//C
//	char strC[] = "hello world";
//	//C++ 包含头文件<string>
//	string strCpp = "ABCD";
//	cout << strCpp << endl;
//
//
//	/*布尔类型bool*/
//	//占用1字节
//	//true = 1; false = 0
//	bool flag = true;
//	cout << flag << endl;
//
//return 0;
//}


//C++数据输入关键字
//int main ()
//{
//	int a = 0;
//	//cin关键字
//	cin >> a;
//	//cout<<...<<...<<endl  输出到标准输出流
//	cout << a << endl;
//	system ( "pasue" );
//	return 0;
//}



//C++引用
/*
引用的本质
是指针常量
例:
int &ref  = a;
等价于
int* const ref = &a;
ref = 20;
等价于
*ref = 20;
*/
//数据类型 &别名 = 原名
//int main ()
//{
//	int a = 10;
//	int c = 15;
//	//引用不能空引用，必须“连接”合法空间
//	//错误:int &b;
//	int &b = a;
//	//引用在初始化后不可改变
//	//错误int &b = c
//	b = c; //这是赋值操作
//}

//值传递，地址传递
//现在有 引用传递
//例:交换函数

//void mySwap (int &a , int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main ()
//{
//	int a = 10;
//	int b = 20;
//	mySwap ( a, b );
//	cout << "a:"<<a << endl;
//	cout << "b:"<<b << endl;
//}

//引用做函数返回值
//1.不要返回局部变量引用
//int& test01 ()
//{
//	int a = 10;
//	return a;
//}
//
//int main ()
//{
//	int &ref = test01 ();
//	cout << ref << endl; //第一次结果正确，编译器做保留
//	cout << ref << endl; //非法内存操作
//	return 0;
//}

//2.函数的调用可以作为左值
//int & test02 ()
//{
//	static int a = 10;
//	return a;
//}
//int main ()
//{
//	int &ref2 = test02 ();
//	cout <<ref2 << endl; //a不会被释放，不会出现非法
//	test02 () = 1000;//函数调用可以作为左值 返回(int&)a
//	cout << ref2 << endl;
//	return 0;
//}


//常量引用
//一般修饰形参
//void showValue ( const int &val )
//{
//	cout << val << endl;
//}
//int main ()
//{
//	//编译器将代码修改为int temp = 10;int & ref = temp;
//	const int & ref = 10;
//	//const int * conts ref = & temp;
//	int a = 100;
//	showValue ( a );
//}


//C++中形参列表中可以有默认值
//传入时使用传入值,缺省时使用默认值
//注意,某个位置已有默认参数，则右边必须都是默认参数
//函数声明有默认参数,实现则不能有默认参数,防止出现二义性
//int func ( int a, int b = 10, int c = 5 )
//{
//	return a + b + c;
//}
//int main ()
//{
//	cout << func (5,20) << endl;
//	//5+20+5=30
//	return 0;
//}