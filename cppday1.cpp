#include<iostream>  //��׼���������
#include<string>
using namespace std;  //�����ռ�

/*
Cppѧϰ(��C)
*/
//CPP����������
//int main ()
//{
//	/*�ַ�������string*/
//	//C
//	char strC[] = "hello world";
//	//C++ ����ͷ�ļ�<string>
//	string strCpp = "ABCD";
//	cout << strCpp << endl;
//
//
//	/*��������bool*/
//	//ռ��1�ֽ�
//	//true = 1; false = 0
//	bool flag = true;
//	cout << flag << endl;
//
//return 0;
//}


//C++��������ؼ���
//int main ()
//{
//	int a = 0;
//	//cin�ؼ���
//	cin >> a;
//	//cout<<...<<...<<endl  �������׼�����
//	cout << a << endl;
//	system ( "pasue" );
//	return 0;
//}



//C++����
/*
���õı���
��ָ�볣��
��:
int &ref  = a;
�ȼ���
int* const ref = &a;
ref = 20;
�ȼ���
*ref = 20;
*/
//�������� &���� = ԭ��
//int main ()
//{
//	int a = 10;
//	int c = 15;
//	//���ò��ܿ����ã����롰���ӡ��Ϸ��ռ�
//	//����:int &b;
//	int &b = a;
//	//�����ڳ�ʼ���󲻿ɸı�
//	//����int &b = c
//	b = c; //���Ǹ�ֵ����
//}

//ֵ���ݣ���ַ����
//������ ���ô���
//��:��������

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

//��������������ֵ
//1.��Ҫ���ؾֲ���������
//int& test01 ()
//{
//	int a = 10;
//	return a;
//}
//
//int main ()
//{
//	int &ref = test01 ();
//	cout << ref << endl; //��һ�ν����ȷ��������������
//	cout << ref << endl; //�Ƿ��ڴ����
//	return 0;
//}

//2.�����ĵ��ÿ�����Ϊ��ֵ
//int & test02 ()
//{
//	static int a = 10;
//	return a;
//}
//int main ()
//{
//	int &ref2 = test02 ();
//	cout <<ref2 << endl; //a���ᱻ�ͷţ�������ַǷ�
//	test02 () = 1000;//�������ÿ�����Ϊ��ֵ ����(int&)a
//	cout << ref2 << endl;
//	return 0;
//}


//��������
//һ�������β�
//void showValue ( const int &val )
//{
//	cout << val << endl;
//}
//int main ()
//{
//	//�������������޸�Ϊint temp = 10;int & ref = temp;
//	const int & ref = 10;
//	//const int * conts ref = & temp;
//	int a = 100;
//	showValue ( a );
//}


//C++���β��б��п�����Ĭ��ֵ
//����ʱʹ�ô���ֵ,ȱʡʱʹ��Ĭ��ֵ
//ע��,ĳ��λ������Ĭ�ϲ��������ұ߱��붼��Ĭ�ϲ���
//����������Ĭ�ϲ���,ʵ��������Ĭ�ϲ���,��ֹ���ֶ�����
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