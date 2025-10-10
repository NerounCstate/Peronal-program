 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include<string.h>
// 字面值常量
// int main(void)
// {
// 	int a = 10;
// 	a = 20;
// 	printf("%d\n", a);
// 	return 0;
// }

// const修饰的常变量无法被修改
// int main1(void)
// {
// 	const int a = 10;//const修饰的常变量，只能被初始化，不能被赋值、修改。#是不能变的变量#。
// 	//a = 20; //error
// 	printf("%d\n", a);
	
// 	//int arr[a] = { 0 };数组的长度必须是常量表达式，a不是常量表达式
// 	return 0;
// }
// define定义的符号常量
// #define MAX 500
// #define SRT "hello"
// int main(void)
// {
// 	printf("%d\n", MAX);
// 	int a = MAX;
// 	printf("%d\n", a);
// 	printf("%s\n", SRT);
// 	return 0;
// }

// 枚举常量
// enum color
// {
// 	//color可能的取值， 即枚举常量
// 	red,
// 	green,
// 	blue = 5,
// 	yellow
// };
// int main(void)
// {
// 	enum color c = blue;
// 	printf("%d\n", c);
// 	return 0;
// }

//数组中\0的作用（\0占用1个字节大小）
// #include <string.h>
// int main() {
// 	char arr0[] = "1234567890";
// 	char arr1[] = { '1','2','\0','4' };//多个单字符注意结尾手动添加'\0'不然无法结束！！！！
// 	int len = strlen(arr1);//获取字符串长度strlen
// 	printf("%s\n", arr0);
// 	printf("%s\n", arr1);//找到\0后会结束运行
// 	printf("%d\n", len);//长度不会包括\0，但会找\0以结束计算长度
// 		return 0;
// }

// int main() {
// 	char arr0[5] = "1234";//arr[5]只申请能容纳5个字符的容量,默认结尾有'\0'，所以只能输入4个字节
// 	printf("%s\n", arr0);
// 	int len = strlen(arr0);//string获取长度没有\0，就是输入的长度
// 	printf("%d\n", len);
// 	return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------

// 转义字符  
// \n换行	\0是字符串的结束标志
// "\"是用来转换字符与转义字符的标志
// \+8进制数字范围0~7

// int main() {
// 	printf("\a");//提示音
// 	return 0;
// }


// 选择语句的小试
//strcmp可以用来比较字符串是否合乎预期
// int main() {
// 	char input[7];  // 创建一个空数组
// 	printf("Xiaomi or Apple?\n");
// 	scanf_s("%6s", input, sizeof(input)); // 最多读取6个字符，留一个位置给字符串结束符'\0'
// 	if (strcmp(input, "Xiaomi") == 0)
// 	{
// 		printf("you are my brother\n");
// 	}
// 	else if(strcmp(input,"Apple")==0)
// 	{
// 		printf("rich man V me 50\n");
// 	}else{
// 		printf("不许用华为bro");
// 	}
// 	return 0;
// }

//循环语句
// int main() {
// 	int i = 0;
// 	while(i <= 10)//注意，while和if的括号中写的都是循环条件
// 	{
// 		printf("%d\n", i);
// 		i++;
// 	}
// 	printf("end\n");
// 	return 0;
// }


// int get_max(int num1, int num2) {
// 	if (num1 > num2)
// 	{
// 		return num1;
// 	}
// 	else
// 	{
// 		return num2;
// 	}
// }

//复习1用指针优化函数
// void get_max1(int *ret,int num1,int num2){
// 	if(num1>num2){
// 		*ret = num1;
// 	}else{
// 		*ret = num2;
// 	}
// }
// int main() {
// 	int num1 = 0;
// 	int num2 = 0;
// 	int max = 0;
// 	scanf("%d %d", &num1, &num2);
// 	//int max = get_max(num1, num2);
// 	get_max1(&max, num1, num2);
// 	printf("max = %d\n", max);
// 	return 0;
// }


// ds：比较两个数字字符串，返回较大者（仅支持正整数）
// char* get_max_str(const char* a, const char* b) {
//    int lenA = strlen(a);
//    int lenB = strlen(b);

//    if (lenA > lenB) return (char*)a;
//    if (lenB > lenA) return (char*)b;
//    // 长度相等，字典序比较
//    return (strcmp(a, b) > 0) ? (char*)a : (char*)b;
// }
// int main() {
//    char num1[1000], num2[1000];
//    printf("请输入两个正整数: ");
//    scanf("%999s %999s", num1, num2);  // 限制长度防溢出

//    char* max = get_max_str(num1, num2);
//    printf("max = %s\n", max);
  
//    return 0;
// }


//-------------------------------------------------------------------------------------------------------------------------------

// int main() {
// 	long c = 100000000L;//long类型要加后缀L，long long要加LL；
// 	printf("%ld\n", c);//long是ld，long long是lld
// }
// sizeof的占位符是%zu,实际上%d也可以


// printf("%zu\n", sizeof(short));

// long long int a = 0;
// signed int b = -20;//sign只能用于整数而非浮点数
// unsigned int c = 10;
// printf("%u\n", c);


// int main() {
// 	double a = 1.474847;
// 	printf("%.3f\n", a);//.3取小数点后三位四舍五入
// 	printf("%zu\n", sizeof(a));
// }

// 获取一个三位数的各个位数
// int main() {
// 	int input = 0;
// 	printf("请输入一个四位数：");
// 	scanf("%d", &input);
// 	int g = input % 10;
// 	int t = input / 10 % 10;
// 	int h = input / 100 % 10;
// 	int th = input / 1000 % 10;
// 	printf("千位数是：%d\n", th);
// 	printf("百位数是：%d\n", h);
// 	printf("十位数是：%d\n", t);
// 	printf("个位数是：%d\n", g);
// 	return 0;
// }

// int main() {
// 	int a = 10;
// 	for (; a <= 1000; a = a++) //for(初始化循环变量;条件;更新){更新后内容}
// 	{
// 		printf("%d\n", a);
// 	}
// }


// int main() {
// 	int a = 10;
// 	int b = a++;//先赋值给b再加
// 	printf("%d\n", a);//11
// 	printf("%d\n", b);//10
// 	int c = 10;
// 	int d = ++c;//先加后赋值给d
// 	printf("%d\n", c);//11
// 	printf("%d\n", d);//11
// 	return 0;
// }

// int main() {
// 	int a = 10;
// 	int b = 5;
// 	printf("%d\n", a++ + ++a - --b - a--);
// 	printf("%d\n", ++a - --a);
// }
// //同级累加、减先单独计算#每个变量最后的值#，再代入计算式


// 检测输入偶数
// int main() {
// 	int ip = 0;
// 	scanf("%d", &ip);
// 	if (ip % 2 == 0) {
// 		printf("是偶数\n");
// 		return 0;
// 	}
// 	else {
// 		printf("输入错误\n");
// 		return 0;
// 	}
// }


// int main() {
// 	int in1 = 0;
// 	int in2 = 0;
// 	scanf("%d%d", &in1, &in2);//错误！%d会识别一个整数，不能主动拆分两位数
// 	if (in1 != 7 && in2 !=7) {
// 		printf("1");
// 	}
// 	else {
// 		printf("0");
// 	}
// 	return 0;
// }

// int main() {
// 	int input = 0;
// 	scanf("%d", &input);
// 	int ones = input % 10;
// 	int tens = input / 10 % 10;
// 	if (ones != 7 && tens != 7&& input % 7 != 0) {
// 		printf("1");
// 	}
// 	else {
// 		printf("0");
// 	}
// 	return 0;
// }


// int main() {
// 	int a = 0;
// 	scanf("%d", &a);
// 	switch (a) {//switch后面只能是整型或字符型变量
// 			case 1://case中的值必须是常量表达式，且不能重复
// 			printf("1\n");
// 			break;
// 		case 2:
// 			printf("2\n");
// 			break;
// 		case 3:
// 			printf("3\n");
// 			break;
// 		case 4:
// 			printf("4\n");
// 			break;//没有break，case穿透往下穿透
// 		default://default可以在任何位置
// 			printf("end\n");
// 			break;
// 	}
// }



// 三元表达式
// 关系表达式 ？ 表达式1 ： 表达式2
// 如果关系表达式成立，则执行表达式1，否则是2
// 比较ab大小
// int main() {
// 	int a = 10;
// 	int b = 20;
// 	printf("%d\n", a > b ? a : b);
// 	int c = a > b ? a : b;
// 	printf("%d\n",c);
// 	return 0;
// }
// 比较三个数字
// int main() {
// 	int a = 10;
// 	int b = 20;
// 	int c = 30;
// 	printf("%d\n", (a > b ? a : b) > c ? (a > b ? a : b) : c);
// }

// int main() {
// 	int i;
// 	printf("%d\n", (i = 3, ++i, i++, i + 5));//注意！！i++它返回的值是自增前的值，但是逗号的原因让他没能返回值所以自增
// }

// int main() {
// 	double temperature = 37;
// 	if (temperature >= 37) {
// 		return 114514;
// 	}
// 	return 0;
// }


// 条件遵循布尔，1是成立0是不成立
// int main() {
// 	if (1)
// 		printf("11111");//只有一行可以省略大括号
// }


// 按月份输出季节
// int main() {
// 	int month = 0;
// 	int result = 0;
// 	result = scanf("%d", &month);//scanf会返回值，值的大小取决于成功读取的数据个数，比如这里如果month是小数无法被读取则返回0，如果是整数就返回1
// 	if (result != 1) {
// 		return 1;
// 	}
// 	if (month >= 3 && month <= 5) {
// 		printf("spring\n");
// 	}
// 	else if (month >= 6 && month <= 8) {
// 		printf("summer\n");
// 	}
// 	else if (9 <= month && month <= 11) {
// 		printf("autumn\n");
// 	}
// 	else if (month == 12 || month == 1 || month == 2) {
// 		printf("winter\n");
// 	}
// 	else {
// 		printf("输入错误\n");
// 	}
	
// }

// #include <windows.h>
// #include <synchapi.h>
// int main() {
// //for(初始化；条件判断；条件控制){循环语句}
// 	for (double i = 1; i <= 10000000; i=i*1.05) {
// 		Sleep(5);//单位是毫秒
// 		system("cls");//清屏
// 		printf("%f\n", i);
// 	}
// }

// 打印0-100
// int main() {
// 	for (int i = 0; i <= 100; i++) {//++i和i++在这里没有区别，因为i没有参与其他运算
// 		system("cls");
// 		printf("%d\n", i);

// 	}
// }





// //求1-5之间的和
// int main() {
// 	int sum = 0;
// 	for (int i = 1; i <= 5; i++) {
// 		sum += i;//sum = sum + i
// 	}
// 	printf("%d\n", sum);
// 	return 0;
// } 


// int main() {
// 	int i = 0;
// 	scanf("%d", &i);
// 	if (i > 100 || i < 0)
// 	{
// 		printf("输入错误\n");
// 		return 1;
// 	}
// 	else if (i >= 90)
// 	{
// 		printf("A\n");
// 	}
// 	else if (i >= 80 && i < 90)
// 	{
// 		printf("B\n");
// 	}
// 	else if (i >= 70 && i < 80)
// 	{
// 		printf("C\n");
// 	}
// 	else if (i >= 60 && i < 70)
// 	{
// 		printf("D\n");
// 	}else
// 	{
// 		printf("E\n");
// 	}
// 	return 0;
// }


// //打印1-100之间的素数
// int main() {
// 	int i = 0;
// 	for (i = 2; i <= 100; i++) {
// 		int j = 0;
// 		for (j = 2; j < i; j++) {
// 			if (i % j == 0) {
// 				break;
// 			}
// 		}
// 		if (j == i) {
// 			printf("%d ", i);
// 		}
// 	}
// 	return 0;
// }


// int main() {
// 	int a = 0;
// 	int b = 0;
// 	printf("请输入两个整数：");
// 	scanf("%d %d", &a, &b);
// 	int num1 = 0;
// 	int num2 = 0;
// 	if (a > b) {
// 		num1 = a;
// 	}else if(a< b){
// 		num1 = b;
// 	}
// int num 1 = a > b ? a : b;//更加简洁
// int num 2 = a < b ? a : b;
// 	else {
// 		printf("请输入两个不同的数字\n");
// 		return 0;
// 	}
// 	int count = 0;
// 	for (int i = num2; i <= num1; i++) {
// 		if (i % 6 == 0 && i % 8 == 0)
// 			{
// 			printf("%d\n", i);
// 			count++;
// 		}
// 		else {
// 			continue;
// 		}
// 	}
// 	printf("count = %d\n", count);
// }


// //while中的变量离开循环后可以继续使用，for中的变量离开循环后就不能使用
// int main() {
// 	int i = 0;
// 	while (i < 10) {
// 				printf("%d\n", i);
// 				i++;
// 	}
// 	printf("i = %d\n", i);
// }

// int main() {
// 	int a = 0;
// 	while(a <= 100) {
// 		printf("%d\n", a);
// 		a++;
// 	}
// 	for (int b = 0; b <= 100; b++) {
// 		printf("%d\n", b);
// 	}
// }





// question1一个数是否为2的幂次方
// int main() {
// 	int n = 0;
// 	scanf("%d", &n);
// 	for (int i = 1; i <= n; i = i * 2) {
// 		if (n == i) {
// 						printf("yes\n");
// 						return 0;
// 		}
// 		else {
// 			continue;
// 		}
// 	}
// 	printf("no\n");
// }


// question2打印折纸的次数
// int main() {
// 	int count = 0;
// 	for(double p = 0.1; p <= 8844430; p = p * 2)
// 	{
// 		printf("%df\n", p);
// 		system("cls");
// 		count++;
// 	}
// 	printf("count = %d\n", count);
// }



// 整数反转
// 我想到了一个窍门，当用10取余%时，取出0所在的位置；用10除/时，删除0所在的数位置.100、1000同理
// int main() {
// 	int input = 0;
// 	int output = 0;
// 	scanf("%d", &input);
// 	while (input) {
// 		output = output * 10 + input % 10;
// 		input = input / 10;
// 	}
// 	printf("%d\n", output);
// 	return 0;
// }


// x的平方根
// int main() {
// 	int x = 0;
// 	scanf("%d", &x);
// 	int i = 0;
// 	for (i = 1; i <= x; i++) {
// 		if (i * i == x) {
// 			printf("%d\n", i);
// 			return 0;
// 		}
// 		else if (i * i > x) {
// 			printf("%d\n", i - 1);
// 			return 0;
// 		}
// 		else {
// 			continue;
// 		}
// 	}
// }


// 回文数

// int main() {
// 	int input = 0;
// 	int output = 0;
// 	scanf("%d", &input);
// 	int temp = input;
// 	while (temp) {
// 		output = output * 10 + temp / 10;
// 		temp = temp / 10;
// 	}
// 	if (output == input) {
// 		printf("yes\n");
// 	}
// 	else {
// 		printf("no\n");
// 	}
// }


// 判断闰年
// int main() {
// 	int year = 0;
// 	scanf("%d", &year);
// 	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
// 		printf("yes\n");
// 	}
// 	else {
// 		printf("no\n");
// 	}
// 	return 0;
// }

// ////不使用乘除取余的两数相除
// //#define _CRT_SECURE_NO_WARNINGS
// //#include <stdio.h>
// int main() {
// 	int dividend = 0;
// 	int divisor = 0;
// 	printf("请输入被除数和除数：");
// 	scanf("%d%d", &dividend, &divisor);
// 	if (divisor == 0) {
// 		printf("输入错误\n");
// 		return 1;
// 	}
// 	else if (dividend < divisor) {
// 		printf("商是：0\n");
// 		printf("余数是：%d\n", dividend);
// 		return 0;
// 	}
// 	else
// 	{
// 		int shang = 0;
// 		for (int temp = divisor; divisor <= dividend; temp = temp + divisor)//记得执行完循环
// 		{
// 			if (temp == dividend)
// 			{
// 				printf("商是：%d\n", shang + 1);
// 				return 0;
// 			}
// 			else if (temp > dividend)
// 			{
// 				printf("商是：%d\n", shang);
// 				printf("余数是：%d\n", dividend - (temp - divisor));
// 				return 0;
// 			}
// 			else
// 			{
// 				shang++;
// 				/*printf("商是 = %d\n", shang);
// 				printf("余数是 = %d\n", dividend - temp);*/
// 			}
// 		}
// 	}
// }


// continue结束本次循环，进入下一次循环；break结束整个循环
// int main() {
// 	/*int b = 5;
// 	int count = 0;
// 	while (1) {
// 		if (b == 3) {
// 			b--;
// 			continue;
// 		}
// 		else if (b == 0) {
// 			break;
// 		} else
// 		{
// 			b--;
// 			count++;
// 		}
// 	}
// 	printf("%d\n", count);*/
// 	for (int i = 1; i <= 5; i++) {
// 		if(i == 3) {
// 			continue;
// 		}
// 		printf("吃了第%d个包子\n", i);
// 	}
// }


// int main() {
// 	char a = '*';//字符用''，字符串用""
// 	for (int h = 1; h <= 3; h++) {
// 		for (int l = 1; l <= 5; l++) {
// 			printf("%c", a);
// 		}
// 		printf("\n");
// 	}
// }
 
 
// 打印三角形
// int main() {
// 	char a = '*';
// 	int row = 0;
// 	scanf("%d", &row);
// 	for (int h = 1; h <= row; h++) {
// 		for (int l = 1; l <= h; l++) {
// 			printf("%c", a);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
 

// 打印倒三角形
// int main() {
// 	char a = '*';
// 	int row = 0;
// 	scanf("%d", &row);
// 	for (int h = 1; h <= row; h++) {
// 		for (int l = 1; l <= row - h + 1; l++) {
// 			printf("%c", a);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
 

// 打印乘法表
// int main() {
// 	for (int i = 1; i <= 9; i++) {
// 		for (int j = 1; j <= 9; j++) {
// 			printf("%d * %d = %d\t", i, j, i * j);
// 		}
// 	}
// 	return 0;
// }


// 键盘输入一个字符，要求判断是否为数字字符，如果是’a”z’或'A’Z’，则输出“character”，如果是‘O’~‘9’，则输出“digit”，如果都不是，则输出“ERROR”。

// 注意到48-57是0-9，65-90是A-Z，97-122是a-z，可以通过ASCII码表进行判断
// 加入循环，直到输入正确的字符
// int main() 
// {
// 	printf("请输入一个字符：");

// 	while (1){
// 			int in = getchar();
// 			if (in <= 57 && in >= 48)
// 				{
// 					printf("digit\n");//0-9判断
// 					break;
// 				}
// 			else if ((in <= 90 && in >= 65) || (in <= 122 && in >= 97)) 
// 				{
// 				printf("character\n");//A-Z或a-z判断
// 				break;
// 				}
// 			else
// 				{
// 				printf("ERROR\n");
// 				printf("请重新输入一个字符：");
// 				while (getchar() != '\n'); 
// 					{
// 						continue;//格式化in，清除缓冲区
// 					}
// 				}
				
// 			}
// 	return 0;
// }
	


// //输出100-200之前的素数,每行输出8个素数，每个素数宽度为5列
// int main() {
// 	int count = 0;
// 	for (int i = 100; i <= 200; i++) {
// 		int j = 0;
// 		for (j = 2; j < i; j++) {
// 			if (i % j == 0) {
// 				break;
// 			}
// 		}
// 		if (j == i) {
// 			printf("%5d", i);
// 			count++;
// 			if (count % 8 == 0) {
// 				printf("\n");
// 			}
// 		}
// 	}
// 	return 0;
// }

// \t制表符最少补一个，最多补8个
// int main() {
// 	printf("name\tage\tgender\thobby\n");
// 	printf("zhangsan23\t男\t篮球\n");
// }

// 统计质数
// int main() {
// 	int in = 0;
// 	printf("请输入一个数字：");
// 	scanf("%d", &in);
// 	int zhishu = 0;
// 	for (int n = 2; n <= in; n++)
// 	{
// 		int count = 0;
// 		for(int t = 2;t < n; t++) 
// 		{
			
// 			if(n % t == 0) 
// 			{
// 				count++;//如果这里直接zhishu++，统计的是合数，可能在2-in中有多个因数
// 				break;
// 			}
// 		}
// 			if (count == 0)
// 			{
// 				zhishu++;
// 			}
// 	}
// 		printf("count = %d\n", zhishu);
// }




// 计算数字1的1次方2的2次方...10的10次方之和（复杂版）
// int main() {
// 	long long arr[11];
// 	int count = 0;
// 	for (int i = 1; i <= 10; i++) {
// 		count++;
// 		long long t = 1;
// 		for (int s = 1; s <= i; s++) {
// 			t = t * i;
// 		}
// 		arr[count] = t;
// 	}
// 	long long sum = 0;
// 	for(int i = 1; i <= 10; i++) {
// 		sum = sum + arr[i];
// 	}
// 	printf("%lld\n", sum);
// }
// 计算数字1的1次方2的2次方...10的10次方之和（改良简洁版）
// int main() {
// 	long long sum = 0;
// 	for (int i = 1; i <= 10; i++) {
// 		long long t = 1;
// 		for (int s = 1; s <= i; s++) {
// 			t = t * i;
// 		}
// 		sum = sum + t;//利用了每次计算完t后就可以加到 sum上，不需要存储每次的t
// 	}
// 	printf("%lld\n", sum);
// }



// 找出0-1000之内，每一位的数字之和等于15的数
// int main() {
// 	for (int i = 0; i <= 1000; i++) {
// 		int ge = i % 10;
// 		int shi = i / 10 % 10;
// 		int bai = i / 100 % 10;
// 		if (ge + shi + bai == 15) {
// 			printf("%d\n", i);
// 		}
// 		else {
// 			continue;
// 		}
// 	}
// }



// //打印菱形
// int main() {
// 	int row = 0;
// 	scanf("%d", &row);
// 	for (int h = 1; h <= row; h++) {
// 		for (int k = 1; k <= row - h; k++) {
// 			printf(" ");
// 		}
// 		for (int l = 1; l <= 2 * h - 1; l++) {
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	for (int h = row - 1; h >= 1; h--) {
// 		for (int k = 1; k <= row - h; k++) {
// 			printf(" ");
// 		}
// 		for (int l = 1; l <= 2 * h - 1; l++) {
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }


 
// function
// void menu() {
// 	printf("**************************\n");
// 	printf("***** 1. play game  *****\n");
// 	printf("***** 0. exit game  *****\n");
// 	printf("**************************\n");
// }
// int main() {
// 	menu();
// 	return 0;
// }


// #include <math.h>
// int main() {
// 	srand(1);//设置随机数种子
// 	int num = rand();//生成随机数

// }
// 种子不变，随机数不变

// #include <math.h>
// #include <time.h>
// int main() {
// 	srand(time(NULL));//设置随机数种子
// 	int num = rand();//生成随机数
// 	for (int i = 0; i < 10; i++) {}
// 	printf("%d\n", num % 100 + 1);//生成1-100的随机数
// }
// }



// #include <stdio.h>

// int main() {
//    int n;
//    scanf("%d", &n); // 读取输入的正整数N

//    for (int i = 1; i <= n; i++) { // 外层循环控制行数
//        for (int j = 1; j <= i; j++) { // 内层循环控制列数
//            printf("%d*%d=%-3d", j, i, j * i); // 输出乘法表达式，%-4d表示左对齐并占4位
//            if (j != i) { // 如果不是当前行的最后一项，则输出空格分隔
//                printf(" ");
//            }
//        }
//        printf("\n"); // 每行结束后换行
//    }

//    return 0;
// }

// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>
// #include <time.h>
// //获取17-38之间的随机数
// int main() {
// 	srand((unsigned int)time(NULL));
// 	int num = rand() % (39 - 17) + 17;
// 	printf("%d\n", num);
// 	return 0;
// }

// #include <time.h>
// //猜数字
// int main() {
// 	srand(time(NULL));
// 	int num = rand() % 100 + 1;
// 	int i = 0;
// 	printf("请猜出这个1-100之间的数字\n");
// 	scanf("%d", &i);
// 	while(1){
// 		if (i > num) {
// 			printf("猜大了，请重新输入：");
// 			scanf("%d", &i);
// 		}
// 		else if (i < num) {
// 			printf("猜小了，请重新输入：");
// 			scanf("%d", &i);
// 		}
// 		else {
// 			printf("恭喜你，猜对了！\n");
// 			break;
// 		}
// 	}
	
// }

// 猜数字升级版
// int main() {
// 	srand((unsigned int)time(NULL));
// 	int num = rand() % 100 + 1;
// 	int i = 0;
// 	int count = 0;
// 	printf("请猜出这个1-100之间的数字\n");
// 	scanf("%d", &i);
// 	while (1) {
// 		count++;
// 		if (i > num) {
// 			printf("猜大了，请重新输入：");
// 			scanf("%d", &i);
// 		}
// 		else if (i < num) {
// 			printf("猜小了，请重新输入：");
// 			scanf("%d", &i);
// 		}
// 		else {
// 			printf("恭喜你，猜对了！\n");
// 			printf("你一共猜了%d次\n", count);
// 			if (count <= 3) {
// 				printf("你真是个天才！\n");
// 			}
// 			else if (count > 3 && count <= 7) {
// 				printf("你很聪明！\n");
// 			}
// 			else {
// 				printf("运气不佳啊孩子！\n");
// 			}
// 			break;
// 		}
// 	}
// }


// 数组获取索引
// 索引从零开始，逐渐增加，最大索引是数组长度-1
// int main() {
// 	int arr[] = { 1,2,3,4,5 };
// 	int i = arr[0];
// 	printf("%d\n", i);
// }



// int main() {
// 	int arr[5] = { 1,2,3,4,5 };
	
// 	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
// 		printf("%d\n", arr[i]);
// 	}
// }

// 看变量
// int main() {
// 	int arr[] = { 1,2,3,4,5 };
// 	int num = arr[5];//数组越界，访问了非法内存，但不会报错
// 	printf("%d\n", num);

// }



// //数组
// int arr[] = { 1,2,3,4,5,6,7 };
// //sizeof(arr)是数组占用的总字节数，sizeof(arr[0])是数组中每个元素占用的字节数

// void func(int arr[], int len) {//***数组作为函数参数时会退化为指针，所以这里的arr其实是一个指针***
// 	//指针是一个变量，存储的是数组开始的地址
// 	for (int i = 0; i < len; i++) {
// 		printf("%d\n", arr[i]);
// 		printf("%p\n", &arr[i]);//用%p和&取地址符查看每个元素的地址
// 		printf("%zu\n", sizeof(arr));//arr在函数中退化为指针，所以这里的sizeof(arr)是指针占用空间的大小
// 	}
// }
// int main() {
// 	func(arr, sizeof(arr) / sizeof(arr[0]));//这样当数组长度改变时，函数也能正确获取长度
// 	printf("%zu\n", sizeof(arr));
// 	return 0;
// }


// int arr[] = { 33,5,22,44,55 };

// int cp(int arr[], int len) {
// 	//冒泡排序
// 	/*for (int i = 0; i < len - 1; i++) {
// 		for (int j = 0; j < len - 1 - i; j++) {
// 			if (arr[j] > arr[j + 1]) {
// 				int t = arr[j];
// 				arr[j] = arr[j + 1];
// 				arr[j + 1] = t;
// 			}
// 		}
// 	}*/
// 	//选择排序
// 	/*for (int i = 0; i < len - 1; i++) {
// 		for (int j = i + 1; j < len; j++) {
// 			if (arr[i] > arr[j]) {
// 				int t = arr[i];
// 				arr[i] = arr[j];
// 				arr[j] = t;
// 			}
// 		}
// 	}*/
// 	int max = arr[0];
// 	for (int i = 1; i < len; i++) {
// 		if (arr[i] > max) {
// 			max = arr[i];
// 		}
// 	}
// 	return max;
// }
// int main() {
// 	int result = cp(arr, sizeof(arr) / sizeof(arr[0]));
// 	/*for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
// 		printf("%d\n", arr[i]);
// 	}*/
// 	printf("max = %d\n", result);
// }



// 随机选择1-100中的不重复的10个数，求和、平均值、小于平均值的个数
// 先创建1-100的数组，再用随机数减去90个
// int main() {
// 	int arr[100];
// 	for (int i = 0; i < 100; i++) {
// 		arr[i] = i+1 ;
// 	}
// 	srand(time(NULL));
// 	int sum = 0;
// 	for(int i = 0;i <9; i++) {
// 		int j = rand() % 100;
// 		int temp = arr[j];
// 		arr[i] = arr[j];
// 		arr[j] = temp;
// 		sum = sum + arr[i];
// 	}
// 	printf("这十个数的和是：%d\n", sum);
// 	double average = (double)sum / 10;//整数除法会舍弃小数部分，所以要强制把sum转换为double
// 	printf("这十个数的平均值是：%lf\n", average);
// 	int num = 0;
// 	for (int i = 1; i <= 10; i++){
// 		if (arr[i] < average) {
// 			num++;
// 		}
// 	}
// 	printf("小于平均值的数有：%d个\n", num);
// 	printf("选择10个数是：");
// 	for(int i = 0; i < 10; i++) {
// 		printf("%d ", arr[i]);
// 	}
// 	/*srand(time(NULL));
// 	for (int i = 0; i < 10; i++) {
// 		arr[i] = rand() % 100 + 1;
// 		if()
// 	}
// 	int sum = 0;*/
// 	/*for(int t = 0; t < 10; t++) {
// 		sum = sum + arr[t];
// 	}
// 	printf("%d", sum);*/

// }



// void reversal(int arr[], int len) {
// 	for (int i = 0; i < len / 2; i++) {
// 		int t = arr[i];
// 		arr[i] = arr[len - 1 - i];
// 		arr[len - 1 - i] = t;
// 	}
// 	return 0;
// }

// int main() {
// 	int arr[5];
// 	for (int i = 0; i < 5; i++) {
// 		int t = 0;
// 		printf("请输入第%d个数据\n",i+1);
// 		scanf("%d", &t);
// 		arr[i] = t;
// 	}
// 	while (1) {
// 		int t = 0;
// 		printf("请选择操作：\n");
// 		printf("1.遍历数组\n");
// 		printf("2.反转数组\n");
// 		scanf("%d", &t);
// 		if(t == 1) {
// 			printf("现在的数组是：");
// 			for (int i = 0; i < 5; i++) {
// 				printf("%d  ",arr[i]);
// 				if(i == 4) {
// 					printf("\n");
// 				}
				
// 			}
// 		}
// 		else if (t == 2) {
// 			reversal(arr, sizeof(arr) / sizeof(arr[0]));
// 			printf("反转成功！\n");
// 		}
// 		else {
// 			printf("输入错误，请重新输入\n");
// 			continue;
// 		}
// 	}
 
// }



// 对2以内判断，再对2到a判断
// int judgement(int a) {
	
// 	int number = 0;
// 	if (a <= 1) {
// 		return 0;
// 	}
// 	else if (a == 2) {
// 		return 1;
// 	}
// 	else {
		
// 		int count = 0;
// 		for (int i = 2; i <= a; i++) {
// 			count = 0;
// 			for (int ii = 2; ii * ii <= i; ii++) {
// 				if (i % ii == 0) {
// 					count++;

// 				}
// 			}
// 			if (count == 0) {
// 				number++;

// 			}
// 		}
// 	}
// 	return number;
// }
// int main() {
// 	int a = 0;
// 	scanf("%d", &a);
// 	int num = judgement(a);
// 	printf("%d", num);
// }


// int main() {
// 	int arr[] = { 10,20,30 };
// 	int i, * p = arr;
// 	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
// 		printf("数组的第%d个值为：%d，内存地址是%p\n", i + 1, *p, p);
// 		p++;
// 	}
// 	return 0;
// }

// 指针