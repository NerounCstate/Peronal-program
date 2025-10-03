#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>

////计算斐波那契
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (n == 0) {
//		printf("0\n");
//	}
//	else if (n == 1) {
//		printf("1\n");
//	}
//	else {
//		int a = 0, b = 1, c;
//		for (int i = 2; i <= n; i++) {//每一项用前两项相加
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		printf("%d\n", b);
//	}
//}

//float judgement(float n) {
//	if (n >= 9.9) {
//		return n;
//	}
//	else {
//		return n + 0.99;
//	}
//}
//
//
//
//int main() {
//	float a, b, c;
//	scanf("%f %f %f", &a, &b, &c);
//	printf("%.2f\n", judgement(a) + judgement(b) + judgement(c));
//}

//
//int main() {
//	int x, n;
//	scanf("%d %d", &x, &n);
//	if (7 - x > 2) {
//		int h = ((5 - x) + (n - 5 - x) / 7 * 5) * (250 + n - 5 - x) % 7 * 250;
//	}
//	else {
//		int h = ((n - x) / 7) * 5 * 250 + n % 7 * 250;
//	}
//	printf("h");
//}




//int main(){
//	//x是周几，n是持续多长时间
//	int x, n, count=0;
//	scanf("%d %d", &x, &n);
//	for (int i = 0; i <= n; i++) {
//		if (1 <= x && x <= 5) {
//			count++;
//			x++;
//		}
//		else if (6 <= x && x <= 7) {
//			x++;
//		}
//		else {
//			x = 1;
//		}
//	}
//	printf("%d", count * 250);
//}




//int main() {
//	char in[31];
//	for (int i = 0; i < 30; i++) {
//		scanf("%c", &in[i]);
//		if (in[i] == '#') {
//			in[i] = '\0';
//			break;
//		}
//	}
//	for (int i = 0; in[i] != '\0'; i++) {
//	   //int i = 0 ; i<sizeof(in)/sizeof(in[0]) ; i++
//		if (65 <= in[i] && in[i] <= 90) {
//			in[i] = in[i] + 32;
//		}
//		else if (97 <= in[i] && in[i] <= 122) {
//			in[i] = in[i] - 32;
//		}
//		else {
//			in[i] = in[i];
//		}
//		printf("%c", in[i]);
//	}
//
//
//}


//数组打乱：思路是每次随机选一个位置与当前位置交换，这样每个位置被选中的概率是一样的，随机要用rand()函数%长度
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	srand(time(NULL));
//	for (int i = 0; i < len; i++) {
//		int index = rand() % len;
//		int temp = arr[i];
//		arr[i] = arr[index];
//		arr[index] = temp;
//	}
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//}



//int ch[] = { 7,23,79,81,103,127,131,147 };
//int main() {
//	int i = 0;
//	while (i < 8) {
//		printf("%d\t", ch[i]);
//		i++;
//	}
//	printf("\n");
//	int in = 0;
//	scanf("%d", &in);
//	int len = 8;
//	int min = ch[0];
//	int max = ch[len];
//	while (1) {
//		if (ch[len / 2] == in) {
//			printf("find it");
//			break;
//		}
//		else if (ch[len / 2] > in) {
//			max = ch[(len / 2) - 1];
//			len  = len / 2;
//		}
//		else if (ch[len / 2] < in){
//			min = ch[(len / 2) + 1];
//			len = len / 2;
//		}
//		else {
//			printf("not find");
//			break;
//		}
//	}
//	
//}

#include <stdio.h>

int judgement(int a) {
    if (a <= 1) {
        return 0;
    }
    int number = 0;  // 初始为 0，从头计数
    for (int i = 2; i <= a; i++) {  // 包含 a
        int is_prime = 1;
        for (int ii = 2; ii * ii <= i; ii++) {  // <=
            if (i % ii == 0) {
                is_prime = 0;
                break;  // 提前退出，提高效率
            }
        }
        if (is_prime) {
            number++;
        }
    }
    return number;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", judgement(a));
    return 0;
}



#include <stdio.h>
#include <string.h>

#define MAX 1000000

int main() {
    static char prime[MAX + 1];
    static int cnt[MAX + 1];

    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;

    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                prime[j] = 0;
            }
        }
    }

    for (int i = 1; i <= MAX; i++) {
        cnt[i] = cnt[i - 1] + prime[i];
    }

    int a;
    scanf("%d", &a);
    printf("%d\n", cnt[a]);
    return 0;
}



#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int count_primes_up_to(int a) {
    int count = 0;
    for (int i = 2; i <= a; i++) {
        if (is_prime(i)) count++;
    }
    return count;
}

int main() {
    int a;
    scanf("%d", &a);  // ? 注意 &
    printf("%d\n", count_primes_up_to(a));
    return 0;
}   