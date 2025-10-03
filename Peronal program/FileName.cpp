#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int n = 0;
//	int* p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		//当给需要输出指针所在位置的值时，需要用数组的类型输出指针变量
//		
//		printf("数组的第%d个值为：%d，内存地址是%p\n", n+1, *p, p);
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
//		//\0的ASCII值是0，所以可以直接把循环调节写成*p
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

//定义指针变量/数组时，不带*是这个值地址，带*是指针指向的值。地址用%p，值用值所属于的数据类型
//用作指针时，arr --> &arr[0]

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
		printf("数组的第%d个值为：%d，内存地址是%p\n", i + 1, *p, p);
		p++;
	}
	return 0;
}
