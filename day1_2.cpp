#include<iostream>
using namespace std;
/*C++�����߼�*/


/*������ռλ����*/
//����ֵ ������(��������){ }
//Ŀǰ�׶��ݼǼ���
//ռλ����������Ĭ�ϲ���
//void func ( int a ,int = 10)
//{
//	cout << "func" << endl;
//}
//int main ()
//{
//	func ( 10, 20 );
//	return 0;
//}

/*��������*/
//������������ͬ����߸�����
//������������
//ͬһ�������򣬺���������ͬ��
//�����������ͣ�����������˳��ͬ(��������ֵ���Ǻ�����������)
//ע��:���ü�const����Ϊ��������
//�������س���Ĭ�ϲ���������ɶ�����
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







