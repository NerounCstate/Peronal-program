#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int n = 0;
//	int* p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		//������Ҫ���ָ������λ�õ�ֵʱ����Ҫ��������������ָ�����
//		
//		printf("����ĵ�%d��ֵΪ��%d���ڴ��ַ��%p\n", n+1, *p, p);
//		n++;
//		p++;
//	}
//}
const int MAX = 18;

//int main() {
//	char arr[] = "Republic of Gamers";
//	char* p = arr;
//	int c = 0;
//	while (*p) {
//		//\0��ASCIIֵ��0�����Կ���ֱ�Ӱ�ѭ������д��*p
//		
//		if ('a' <= *p && *p <= 'z') {
//			*p = *p - 32;
//		}
//		
//		printf("%c\n", *p);
//		c++,p++;
//		
//
//	}
//}

//����ָ�����/����ʱ������*�����ֵ��ַ����*��ָ��ָ���ֵ����ַ��%p��ֵ��ֵ�����ڵ���������
//����ָ��ʱ��arr --> &arr[0]

//int main() {
//	int arr[] = { 10,20,30 };
//	int i, * p[MAX];
//	for (i = 0; i < MAX; i++) {
//		p[i] = &arr[i];
//	}
//	for (i = 0; i < MAX; i++) {
//		printf("%d", *p[i]);
//	}
//	return 0;
//}

int main() {
	int arr[] = { 10,20,30 };
	int i, * p = arr;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("����ĵ�%d��ֵΪ��%d���ڴ��ַ��%p\n", i + 1, *p, p);
		p++;
	}
	return 0;
}
