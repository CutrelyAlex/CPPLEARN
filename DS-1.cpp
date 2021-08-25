/*数据结构课*/
#include<iostream>
using namespace std;
//数据结构
//Data Structure
//存储数据的不同方式
//例子:
//数组:每个类型的数据紧密排列
//链表:每个节点存储着类型的数据和下一个节点的地址

//什么是算法
//同一问题的不同解决方法
//算法往往针对特定数据结构
//例:链表插入,查找，数组插入,查找...

/*
时间测算:
	计算算法时间差(幅度不够循环来凑)
	例子:2个排序算法分别要1年和1秒
空间测算
	例子:2个排序算法一个要1Gb一个要10kb
*/

#include<time.h>
//时间测算
int mainds1 ()
{
	clock_t start = clock ();
	//for..算法
	clock_t ends = clock ();
	cout << (double)(ends - start) / CLOCKS_PER_SEC * 1000 << endl;
	return 0;
}

/*
Big O
时间-问题(数据)规模
	不考虑必要操作
		循环，赋值，程序初始化
	不考虑参数
		2n --- n
	不考虑低次项
		n^2+n--n^2
*/
/*
eg.
访问数组某个位置的值
	只需要计算偏移量，而初始化不考虑
	故时间为复杂度O(1)
访问链表某个位置的值(一般时间复杂度是最差情况)
	O(n)
求数组平均数
	有n个数，就需要加n次
	O(n)
*/

/*
如何写算法程序
	由简单到复杂
		验证一步走一步
		多打印中间结果
	先局部后整体
		没思路先细分
	先粗糙后精细
		变量更名
		语句合并
		边界处理
*/



/*排序*/
/*
选择排序 最简单的排序算法
时间O(n^2)
不稳定
*/
void selectsort (int *arr,int len)
{
	for (int i = 0; i < len-1; i++)
	{
		int minPos = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				minPos = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minPos];
		arr[minPos] = temp;
	}
}


int mainss ()
{
	int arr[5] = { 5,3,2,4,1 };
	int len = sizeof ( arr ) / sizeof ( arr[0] );
	selectsort ( arr, len );
	for (int i = 0; i < len; i++)
	{
		printf ( "%d ", arr[i] );
	}
	return 0;
}