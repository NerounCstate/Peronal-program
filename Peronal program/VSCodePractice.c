#include<stdio.h>
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
int main(){
    // 用于读取数组
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *arr[] = {arr1, arr2, arr3};
    // 用于计算长度
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(int);
    int len3 = sizeof(arr3) / sizeof(4);
    int lenArr[] = {len1, len2, len3};
   
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < lenArr[i]; j++){
            // 先取arr[i]的数组，再取arr[i]的第j个值
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

