/*string�����*/
#include <string>
#include<iostream>
using namespace std;
int main ()
{
//��ʼ��
	string s1;
	string s2 = "Helloword";
	string s3 = s2;
	string s4 ( 5, 's' );//"sssss"
	
	//string���е�length()
	cout << s2.length() << endl;

	//ת��ΪC�ַ���
	string path = "W.txt";
	cout << path.c_str() << endl;
	
	//ƴ��
	cout << path + s4 << endl;

	//���� string& insert (size_t pos, const string& str);
	cout << s4.insert ( 4, "HelloWorlD" ) << endl;

	//ɾ�� string& insert (size_t pos, const string& str);
	cout << s3.erase ( 2, 3 )<< endl;
	cout << s3 << endl;
	
	//�ַ�������
	/*
size_t find (const string& str, size_t pos = 0) const;
size_t find (const char* s, size_t pos = 0) const;

...rfind(..)  //���ҵ��ڶ�������
	*/
	int index = s2.find ( "wo", 1 );
	cout << index << endl;
	
	//�ҵ���һ�����ֵ�λ��

	cout<<
		s2.find_first_of ( "o" ) << endl;
	

	return 0;


}

