#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	int sum = Add(a, b);
//	cout << sum << endl;
//	system("pause");//按任意键继续功能 
//	return 0;
//}

//void swap(int x, int y)
//{
//	cout << x << " " << y << endl;
//	int z = x;
//	x = y;
//	y = z;
//	cout << x << " " << y << endl;
//}
//int main()
//{
//	int a = 1;
//	int b = 5;
//	swap(a, b);
//	system("pause");
//	return 0;
//}

//利用指针访问数组中的元素
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(int i=0;i<sz;i++)
//	{
//		cout << *p << endl;
//		p++;
//	}
//	system("pause");
//	return 0;
//}

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	cout << a << " " << b << endl;
	swap(&a, &b);
	cout << a << " " << b << endl;
	system("pause");
	return 0;
}