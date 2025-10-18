#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
//数组与指针
// int main(){
//     int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     printf("%zu\n", sizeof(arr));
//     //数组被使用时会退化为指向首项的指针，&获取的地址也是
//     printf("%p\n", &arr);
//     printf("%p\n", arr);
//     //arr数组是整型数组，整型占用大小是4字节。&arr代表一整个数组，+1
//     printf("%p\n", arr + 1);
//     printf("%p\n", &arr + 1);
// }
 
//建立二维数组
// int arr[3][5] = {
//     {1, 2, 3, 4, 5},
//     {10, 20, 30, 40, 50},
//     {100, 200, 300, 400, 500}
// };
// int main(){
//     // arr[0]表示arr这个二维数组中的第一个数组{1，2，3，4，5}，以此类推
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }
// }


//正确使用指针来遍历多个数组
// int main(){
//     // 用于读取数组
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *arr[] = {arr1, arr2, arr3};
//     // 用于计算长度
//     int len1 = sizeof(arr1) / sizeof(arr1[0]);
//     int len2 = sizeof(arr2) / sizeof(int);
//     int len3 = sizeof(arr3) / sizeof(4);
//     int lenArr[] = {len1, len2, len3};
   
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < lenArr[i]; j++){
//             // 先取arr[i]的数组，再取arr[i]的第j个值
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int arr[3];
//     int *p[3];
//     for (int i = 0; i < 3;i++){
//         arr[i] = getchar();
//         *p[i] = &arr[i];
//     }
//     int max, b, c;
//     max = p[0];
//     b  = p[1];
//     c = p[2];
//     if()
// }




//指针的类型与指向空间中数据的类型保持一致
// int arr[] = {1,2,3,4,5};
// int *q = &arr[0];
// int (*p)[5] = &arr;

// void func1(){
//     printf("func1");
// }
// int func2(int i,int j){
//     return i + j;
// }
// int main()
// {
//     // printf("%d\n%p", p, q);
//     void (*a)() = func1;
//     int (*b)(int, int) = func2;
//     //函数指针可以用来调用函数
//     a();
//     int c = b(3, 4);
//     printf("%d", c);
// }



// //利用指针数组来快速调用函数
// int jia(int a,int b){
//     return a + b;
// }
// int jian(int a,int b){
//     return a - b;
// }
// int cheng(int a,int b){
//     return a * b;
// }
// int chu(int a,int b){
//     return a / b;
// }
// int main(){
//     //因为函数会退化，所以这是一个函数的指针数组。            *数组名字[几个量](参数类型,参数类型) = {}            只是比定义数组时多了要传入的参数类型
//     int (*ch[4])(int, int) = {jia, jian, cheng, chu};
//     int a,b,choose;
//     scanf("%d %d", &a, &b);
//     scanf("%d", &choose);
//     int res = (ch[choose - 1])(a, b);
//     printf("%d", res);
// }

//在C语言中字符串会被拆分成单个字符，所以用char来定义字符串时[量]要加一给'\0'
// char str0[4] = {'a','b','c','\0'};
// char str1[4] = {"abc"};
// //str0 == str1
// //char *str = "abc";

// char comp[4][10] = {
//     // 最多4个字符串，每个字符串最多9+‘\0’个字符
//     "cpu","gpu","ram", "rom"
// };

// //用指针来存储字符串
// char *pcomp[] = {"cpu","gpu","ram","rom"};
// int main(){
//     for(int i = 0; i < 4; i++){
//         printf("%s\n", comp[i]);
//         printf("%s\n", pcomp[i]);
//     }
// }

// char str1[99] = "hello";
// char str2[99] = "world";
// int main(){
//     //字符串比较
//     int res = strcmp(str1, str2);
//     if(res < 0){
//         strcat(str1, str2);
//         printf("%s%s", str1,str2);
//     }else if(res > 0){
//         printf("str1 > str2");
//     }else{
//         printf("str1 == str2");
//     }
// }


//模拟用户登录
// char *t_username = "ZXN";
// char *t_password = "123456";
// char name[1000],password[1000];
// int main(){
//     for (int i = 0; i < 3; i++)
//     {
//         printf("请输入用户名：\n");
//         scanf("%s", name);
//         printf("请输入密码：\n");
//         scanf("%s", password);
//         printf("%s,%s", name, password);
//         if(!strcmp(name,t_username)&&!strcmp(password,t_password)){
//             break;
//         }else{
//             printf("登陆失败，您还有%d次机会\n", 3 - i);
//         }
//     }
//     printf("登陆成功");
// }
// int main(){
//     int x = 2, y = 5;
//     int a = 3;
//     x += y;
//     y = x - y;
//     x -= y;
//     a += a -= a * a;
//     printf("%d %d %d",x,y,1-'\0');
// }
// #include <stdio.h>
// int main()
// {
//     int a, b;

//     scanf( "a=%d,b=%d", &a, &b);
    
//     printf("%d %d", a,b);
// }

// typedef struct{
//     char name[100];
//     int count;
// } spot;
// int main(){
//     //创建数组
//     spot arr[4] = {{"A", 0}, {"B", 0}, {"C", 0}, {"D", 0}};
//     srand(time(NULL));
//     //模拟投票
//     for (int i = 0; i < 100000;i++){
//         int choose = rand() % 4 +1;
//         if(choose == 1){
//             arr[0].count++;
//         }else if(choose ==2){
//             arr[1].count++;
//         }else if(choose == 3){
//             arr[2].count++;
//         }else{
//             arr[3].count++;
//         }
//     }
//     //比较大小
//     int max = arr[0].count;
//     for (int i = 1; i < 4; i++)
//         {
//             if(arr[i].count > max){
//                 max = arr[i].count;
//             }
//         }
//     //找最大的景点
//     for (int i = 0; i < 4;i++){
//             if(arr[i].count == max){
//                 printf("投票最多的景点是%s，共%d张票", arr[i].name, arr[i].count);
//                 break;
//             }
//     }
// }
// union MoneyType{
//     int mony1;
//     char mony2;
//     char monystr[100];
//     //共同体以最大的类型长度进行对齐，公用一个内存空间
// } M;
// union M money;

// malloc申请连续杂乱空间，返回首地址
// calloc申请+数据初始化
// realloc加减空间（修改）
// free释放空间
// int main(){
//     int *p = calloc(100, sizeof(int));
//     // if (!p) {
//     //     fprintf(stderr, "calloc failed\n");
//     //     return 1;
//     // }
//     //赋值
//     for (int i = 0; i < 100; i++){
        
//         *(p + i) = i * 10;
//         //p[i] = i * 10;
//     }
//     //输出
//     for (int i = 0; i < 100; i++){
//         printf("%d\n", p[i]);
//     }
//     free(p);
//     return 0;
// }

// int main(){
//     int *p = malloc(10);
//     for(int i = 0; i < 10; i++){
//         *(p + i) = i * 10;
//     }
//     for (int i = 0; i < 10;i++){
//         printf("%d\n", *p);
//         p++;
//     }
      
//     free(p);
    //释放空间后指针不变，但指向的空间不再属于该程序
    // for (int i = 0; i < 10;i++){
    //     printf("%d\n", *p);
    //     p++;
    // }


//---------------------------------------------------------------------------------------

/*fopen打开文件,
fgetc读取一个字符(读不到返回-1)
fgets读取一行字符(以换行符为准，读不到返回NULL)
fread一次读多个文件，fclose关闭文件*/
/*操作模式：r只读,
rb能操作2进制文件（图片视频音频）,
w只写（写入或创建新的），
a追加写入，在文件最后面写
wb（与rb类似），
ab（追加模式）,
r+读写
文件路径的反斜杠每次要多写一个作为反斜杠的转义符号*/


// #include<stdio.h>
// int main(){
//     FILE *file = fopen("C:\\Users\\evany\\Desktop\\test.txt","r");
//     //int c = fgetc(file);
//     int c;
//     while((c = fgetc(file))!= -1){
//         printf("%c", c);
//     }
//     fclose(file);
// }


// int main(){
//     FILE *f = fopen("C:\\Users\\evany\\Desktop\\test.txt", "r");
//     int wight = 1024;
//     char arrf[wight];
//    // fgets(arrf,wight,f);
//    //fread返回的读取的数量可以用作输出限制
//     //int n =fread(arrf,1,wight,f);
//     int n;
//     while((n = fread(arrf,1,wight,f)) != 0){
//         for(int i = 0; i<n;i++){
//             printf("%c", arrf[i]);
//         }
//     }
//     //printf("%s", arrf);
//     fclose(f);
// }

//写数据，fputc(写入成功返回非负数),fputs,fwrite
#include <stdio.h>

int main() {
    FILE *file = fopen("C:\\Users\\evany\\Desktop\\test.txt", "a+");
    // 写入一个字符
    fputc(97, file);  // 写入 'a'
    fputs("\nsssss", file);

    // 重置文件指针到开头，准备读取
    //rewind(file);

    // 读取并打印文件内容
    char c;
    while ((c = fgetc(file)) != -1) {
        printf("%c", c);
    }

    fclose(file);
    return 0;
}