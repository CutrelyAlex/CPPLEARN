/*���ݽṹ��*/
#include<iostream>
using namespace std;
//���ݽṹ
//Data Structure
//�洢���ݵĲ�ͬ��ʽ
//����:
//����:ÿ�����͵����ݽ�������
//����:ÿ���ڵ�洢�����͵����ݺ���һ���ڵ�ĵ�ַ

//ʲô���㷨
//ͬһ����Ĳ�ͬ�������
//�㷨��������ض����ݽṹ
//��:�������,���ң��������,����...

/*
ʱ�����:
	�����㷨ʱ���(���Ȳ���ѭ������)
	����:2�������㷨�ֱ�Ҫ1���1��
�ռ����
	����:2�������㷨һ��Ҫ1Gbһ��Ҫ10kb
*/

#include<time.h>
//ʱ�����
int mainds1 ()
{
	clock_t start = clock ();
	//for..�㷨
	clock_t ends = clock ();
	cout << (double)(ends - start) / CLOCKS_PER_SEC * 1000 << endl;
	return 0;
}

/*
Big O
ʱ��-����(����)��ģ
	�����Ǳ�Ҫ����
		ѭ������ֵ�������ʼ��
	�����ǲ���
		2n --- n
	�����ǵʹ���
		n^2+n--n^2
*/
/*
eg.
��������ĳ��λ�õ�ֵ
	ֻ��Ҫ����ƫ����������ʼ��������
	��ʱ��Ϊ���Ӷ�O(1)
��������ĳ��λ�õ�ֵ(һ��ʱ�临�Ӷ���������)
	O(n)
������ƽ����
	��n����������Ҫ��n��
	O(n)
*/

/*
���д�㷨����
	�ɼ򵥵�����
		��֤һ����һ��
		���ӡ�м���
	�Ⱦֲ�������
		û˼·��ϸ��
	�ȴֲں�ϸ
		��������
		���ϲ�
		�߽紦��
*/



/*����*/
/*
ѡ������ ��򵥵������㷨
ʱ��O(n^2)
���ȶ�
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