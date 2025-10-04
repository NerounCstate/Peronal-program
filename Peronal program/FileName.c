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

//int main() {
//	int arr[] = { 10,20,30 };
//	int i, * p = arr;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("数组的第%d个值为：%d，内存地址是%p\n", i + 1, *p, p);
//		p++;
//	}
//	return 0;
//}


//查找
//#include<time.h>
//#include<stdlib.h>
//
//
//int arr[50] = {};
//int num = 0;
////我需要打乱一组长度为50的整数
//void init() {
//	srand(time(NULL));
//	for (int i = 0; i < 51; i++) {
//		arr[i] = i;
//	}
//	for (int i = 0; i < 51; i++) {
//		int r = rand() % 51;
//		int temp = arr[i];
//		arr[i] = arr[r];
//		arr[r] = temp;
//	}
//}
////我需要添加一个函数，专门用来查找某个数值
//int linearSearch(int num, int len) {
//	int* p = arr;
//	for(int i = 0; i < len; i++) {
//		if (*p == num) {
//			return i+1;
//		}
//		p++;
//		//if (i == len-1) {//int数组不会以\0为结尾
//		//	return -1;
//		//}多余判断，在循环到最后一位还没找到就会自动结束循环并返回-1
//	}
//}
//int main() {
//	init();
//	for (int i = 0; i < 51; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n请输入要查找的数值");
//	scanf("%d", &num);
//	int ret = linearSearch(num, sizeof(arr) / sizeof(arr[0]));
//	if (ret == -1) {
//		printf("没有找到\n");
//	}
//	else {
//		printf("找到了，是第%d位\n", ret);
//	}
//	return 0;
//}
//
#include<string.h>

//将指针与字符串结合使用，打印字符串。请求输入一个字符串和长度，将其打印出来
int main() {
	printf("请输入一个字符串：");
	/*arr = getchar();*/
	//getchar()只能获取一个字符,此处使用fgets()函数
	char arr[100];
	fgets(arr, sizeof(arr), stdin);//fets(存入的数组，数组长度，stdin)会把换行符也当作字符存入数组
	arr[strcspn(arr, "\n")] = '\0';//把换行符(括号内是字符串不是单个字符)替换为字符串结束符
	char* p = arr;
	int len;
	printf("请输入要打印的长度：");
	scanf("%d", &len);
	if (len > strlen(arr)) {
		len = strlen(arr);
	}
	printf("\n");
	for(int i = 0; i < len; i++) {
		printf("%c", *p);
		p++;
	}
}