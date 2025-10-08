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

//int main() {
//	int arr[] = { 10,20,30 };
//	int i, * p = arr;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("����ĵ�%d��ֵΪ��%d���ڴ��ַ��%p\n", i + 1, *p, p);
//		p++;
//	}
//	return 0;
//}


//����
//#include<time.h>
//#include<stdlib.h>
//
//
//int arr[50] = {};
//int num = 0;
////����Ҫ����һ�鳤��Ϊ50������
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
////����Ҫ����һ��������ר����������ĳ����ֵ
//int linearSearch(int num, int len) {
//	int* p = arr;
//	for(int i = 0; i < len; i++) {
//		if (*p == num) {
//			return i+1;
//		}
//		p++;
//		//if (i == len-1) {//int���鲻����\0Ϊ��β
//		//	return -1;
//		//}�����жϣ���ѭ�������һλ��û�ҵ��ͻ��Զ�����ѭ��������-1
//	}
//}
//int main() {
//	init();
//	for (int i = 0; i < 51; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n������Ҫ���ҵ���ֵ");
//	scanf("%d", &num);
//	int ret = linearSearch(num, sizeof(arr) / sizeof(arr[0]));
//	if (ret == -1) {
//		printf("û���ҵ�\n");
//	}
//	else {
//		printf("�ҵ��ˣ��ǵ�%dλ\n", ret);
//	}
//	return 0;
//}
//
#include<string.h>

// //将数组与指针结合使用，实现输入一个字符串和一个整数n，打印该字符串的前n个字符。
// int main() {
// 	printf("请输入字符串：");
// 	/*arr = getchar();*/
// 	//getchar()用于读取一个字符，单独使用可以用于吃掉\n。fgets()用于安全读取字符串
// 	char arr[100];
// 	fgets(arr, sizeof(arr), stdin);//fets（数组，长度，stdin）用于从标准输入读取一行
// 	arr[strcspn(arr, "\n")] = '\0';//strcspn用于查找字符串中首次出现指定字符的位置
// 	char* p = arr;
// 	int len;
// 	printf("请输入长度");
// 	scanf("%d", &len);
// 	if (len > strlen(arr)) {
// 		len = strlen(arr);
// 	}
// 	printf("\n");
// 	for(int i = 0; i < len; i++) {
// 		printf("%c", *p);
// 		p++;
// 	}
// }


//求数组的最大值和最小值并返回
// void getmaxandmin(int arr[], int *max, int *min, int len)
// //这里指针的作用是让函数可以修改多个实参的值
// {
// 	*max = *arr;
// 	*min = *arr;
// 	for (int i = 0; i < len; i++)
// 	{
// 		if (*max < arr[i])
// 		{
// 			*max = arr[i];
// 		}
// 		if (*min > arr[i])
// 		{
// 			*min = arr[i];
// 		}
// 	}
// }
// int main(){
// 	int arr[] = { 1,2,3,4,5,6,7,8,9 };
// 	int max = arr[0], min = arr[0];
// 	getmaxandmin(arr, &max, &min, sizeof(arr) / sizeof(arr[0]));//传入max和min的地址：&max,&min
// 	printf("max=%d,min=%d", max, min);
// }

//对两个数据进行取余要求运算结果分离
// int quyu(int a, int b, int *res);
// int main()
// {
// 	int a,b;
// 	scanf("%d %d", &a, &b);
// 	int res;
// 	int jm = quyu(a, b, &res);
// 	if(jm == -1){
// 		printf("error\n");
// }else{
// 	printf("res=%d\n", res);
// }
// 	return 0;
// }
// int quyu(int a, int b, int *res){
// 	if(b == 0){
// 		return -1;
// 	}else{
// 		*res = a % b;
// 		return 0;
// 	}
	
// }

//指针高级
// void swap(void *p1, void *p2, int len);
// int main()
// {
// 	int a = 10;
// 	short b = 20;
// 	int *p1 = &a;
// 	short *p2 = &b;
// 	//char *p3 = p1;不同类型的指针之间不能赋值，void除外。
// 	void *p3 = p1;//但是void无法被读取,也无法进行计算
// 	printf("%d\n%d\n",*p1,*p2);
// 	int c = 100;
// 	int d = 200;
// 	int *p5 = &c;
// 	int *p4 = &d;
// 	swap(p5,p4,4);
// 	printf("%d,%d", c, d);
// }
// //使用void传递变量使得函数更有通用性
// void swap(void*p1,void*p2,int len){//传入数据类型的大小用于循环
// 	//先把void转换成char（1字节大小）指针便于读取
// 	char*pc1 = p1;
// 	char *pc2 = p2;
// 	char temp = 0;
// 	for (int i = 0; i < len; i++){//一个字节一个字节的操作（这里是swap交换）
// 		temp = *pc1;
// 		*pc1 = *pc2;
// 		*pc2 = temp;
// 		pc1++, pc2++;
// 	}
	
// }