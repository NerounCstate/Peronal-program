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

//��ָ�����ַ������ʹ�ã���ӡ�ַ�������������һ���ַ����ͳ��ȣ������ӡ����
int main() {
	printf("请输入字符串：");
	/*arr = getchar();*/
	//getchar()ֻ�ܻ�ȡһ���ַ�,�˴�ʹ��fgets()����
	char arr[100];
	fgets(arr, sizeof(arr), stdin);//fets(��������飬���鳤�ȣ�stdin)��ѻ��з�Ҳ�����ַ���������
	arr[strcspn(arr, "\n")] = '\0';//�ѻ��з�(���������ַ������ǵ����ַ�)�滻Ϊ�ַ���������
	char* p = arr;
	int len;
	printf("请输入长度");
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

