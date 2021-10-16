/*运算符重载*/

#include<iostream>
using namespace std;

class complex
{
public:
	complex ();
	complex ( double real, double imag );
	complex ( double real ) :m_real ( real ), m_imag ( 0.0 ) {}
public:
	//运算符重载
	friend complex operator+( const complex &c1, const complex &c2 );
	double real () const { return m_real; }
	double imag () const { return m_imag; }
	friend istream & operator >> ( istream &in, complex&A );
	friend ostream & operator<<( ostream & out, complex & A );
private:
	double m_real;
	double m_imag;
};
complex::complex ( double real, double imag ) :m_real ( real ), m_imag ( imag ) {}
complex::complex () : m_real ( 0.0 ), m_imag ( 0.0 ) {}

//实现
complex operator+( const complex &c1, const complex &c2 )
{
	complex c;
	c.m_real = c1.m_real + c2.m_real;
	c.m_imag = c1.m_imag + c2.m_imag;
	return c;
}
istream & operator >> ( istream &in, complex&A )
{
	in >> A.m_real >> A.m_imag;
	return in;
}
ostream & operator<<( ostream & out, complex & A )
{
	out << A.m_real << " + " << A.m_imag << " i ";
	return out;
}

int mainA ()
{
	complex c1 ( 4.3, 5.8 );
	complex c2 ( 2.4, 3.6 );
	complex c3, c4, c5;
	c3 = c1 + c2;
	c4 = c1 + 100;
	c5 = 100 + c1;
	cout << c3 << "|" << c4 << "|" << c5 << endl;
	return 0;
}


//重载变长数组
class Array
{
public:
	Array ( int length = 0 );
	~ Array ();
public:
	int & operator[]( int i );
	const int & operator[]( int i )const;
public:
	int length () const { return m_length; }
private:
	int m_length;
	int *m_p; //指向数组内存
};
Array::Array ( int length ) :m_length ( length )
{
	if (length == 0)
	{
		m_p = nullptr;
	}
	else
	{
		m_p = new int[length];
	}
}
Array::~Array ()
{
	delete[] m_p;
}

int& Array::operator[]( int i )
{
	return m_p[i];
}
const int & Array::operator[]( int i ) const
{
	return m_p[i];
}
int main ()
{
	int n;
	cin >> n;
	Array A ( n );
	for (int i = 0; i < A.length (); i++)
	{
		A[i] = i * 5;
	}
	cout << A[2] << endl;
	return 0;
}
