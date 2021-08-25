#include<iostream>
using namespace std;

/*类封装巩固*/
//设计立方体类 求立方体面积和体积

class Cube
{
public:
	//行为
		//获取面积
	int calS ()
	{
		return 2 * m_L*m_W + 2 * m_W*m_H + 2 * m_L*m_H;
	}
		//获取长宽高
	//...
		//设置长宽高
	void setCube (int h,int l,int w)
	{
		m_H = h;
		m_L = l;
		m_W = w;
	}
		//
	//属性
private:
	int m_H;
	int m_L;
	int m_W;
};
//利用全局函数判断两个立方体是否相等
bool isSame ( Cube &c1, Cube&c2 )
{
	//if..
}


int mainCUbe ()
{
	Cube c1;
	c1.setCube ( 10, 10, 10 );
	cout << c1.calS () << endl;
}


//设计一个圆类和一个点类，判断圆和点关系

//点类
class Point
{
public:
	//设置点坐标
	void setPoint ( int x, int y );
	//获取x
	int getX ()
	{
		return m_X;
	}
	int getY ()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
//圆类
class Circle
{
public:
	//设置半径
	void setR (int r)
	{
		m_R = r;
	}
	//获取半径
	int getR ()
	{
		return m_R;
	}
	void setCenter ( Point center )
	{
		m_Center = center;
	}
	//获取圆心
	Point GetP ()
	{
		return m_Center;
	}
private:
	int m_R;
	Point m_Center; //圆心
};

void isInCircle ( Circle &c, Point &p )
{
	//计算2点距离²
	int distance = 
	(c.GetP ().getX () - p.getX ())*(c.GetP ().getX () - p.getX ())
		- (c.GetP ().getY () - p.getY ())*(c.GetP ().getY () - p.getY ());
	//半径²
	int rDis = c.getR () * c.getR ();
	if (distance == rDis)
	{
		cout << "在圆上" << endl;
	}
	//else if ....
}

#include"day2_0.h"
/*
对于封装类中的方法
一般在头文件中写类
在类中声明
在其他cpp文件实现
实现中这样写：
*/
//int Point::setPoint ( int x,int y )
//{
//	m_X = x;
//	m_Y = y;
//}