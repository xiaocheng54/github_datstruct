#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<time.h>
//
//int main() {
//	size_t n = 0;
//	size_t begin = clock();//��¼ѭ����ʼ��ʱ��
//	for (size_t j = 0; j < 10; j++) {
//		for (size_t i = 0; i < 10000000; ++i) {
//			++n;   //һ����O��1�� 23ms
//
//		} //����O��n^2��223ms  ������ʱ�������˺ܶ�
//	}
//	size_t end = clock();//��¼����ѭ��������ʱ��
//	printf("%d ms", end - begin);//���ʱ��=end-begin
//	return 0;
//}
////ð������ʱ�临�Ӷ�
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
//���ֲ���ʱ�临�Ӷ�