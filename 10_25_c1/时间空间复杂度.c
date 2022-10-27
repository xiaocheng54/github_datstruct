#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<time.h>
//
//int main() {
//	size_t n = 0;
//	size_t begin = clock();//记录循环起始的时刻
//	for (size_t j = 0; j < 10; j++) {
//		for (size_t i = 0; i < 10000000; ++i) {
//			++n;   //一层是O（1） 23ms
//
//		} //两层O（n^2）223ms  所消耗时间增长了很多
//	}
//	size_t end = clock();//记录程序循环结束的时刻
//	printf("%d ms", end - begin);//输出时间=end-begin
//	return 0;
//}
////冒泡排序时间复杂度
//void Swap(int a,int b) {
//	int c = a ;
//	a = b;
//	b = c;
//}
//
//void Bubblesort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end) {
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i]) 
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//		break;
//	}
//	return 0;
//	}
//二分查找时间复杂度