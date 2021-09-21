/*string类详解*/
#include <string>
#include<iostream>
using namespace std;
int main ()
{
//初始化
	string s1;
	string s2 = "Helloword";
	string s3 = s2;
	string s4 ( 5, 's' );//"sssss"
	
	//string类中的length()
	cout << s2.length() << endl;

	//转化为C字符串
	string path = "W.txt";
	cout << path.c_str() << endl;
	
	//拼接
	cout << path + s4 << endl;

	//插入 string& insert (size_t pos, const string& str);
	cout << s4.insert ( 4, "HelloWorlD" ) << endl;

	//删除 string& insert (size_t pos, const string& str);
	cout << s3.erase ( 2, 3 )<< endl;
	cout << s3 << endl;
	
	//字符串查找
	/*
size_t find (const string& str, size_t pos = 0) const;
size_t find (const char* s, size_t pos = 0) const;

...rfind(..)  //查找到第二个参数
	*/
	int index = s2.find ( "wo", 1 );
	cout << index << endl;
	
	//找到第一个出现的位置

	cout<<
		s2.find_first_of ( "o" ) << endl;
	

	return 0;


}

