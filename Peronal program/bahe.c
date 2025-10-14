逻辑不符合题意
 int cut(int n,int*p,int len){
     int *q = p;
     int min = 0;
     for (int i = 0; i < n - 1; i++){
         int sum1 = 0, sum2 = 0,resf = 0;
         *q = *p + i;
         for (int k = 0; k < i+1;k++)
         {
             sum1 = sum1 + *p;
             *p++;
         }
          for (int j = 0; j < n - i; j++)
         {
             sum2 = sum2 + *q;
             *q++;
         }
         if(sum1>sum2){
             resf = sum1 - sum2;
         }else{
             resf= sum2 - sum1;
         }
         if(min >= resf){
             min = resf;
         }
     }
     return min;
 }
 const int MAX = 100000;
 int cut1(int n, int *p)
 {
     int min = MAX;
     for (int i = 0; i < n - 1; i++)
     {
         int sum1 = 0, sum2 = 0;
         for (int k = 0; k <= i; k++)
         {
             sum1 += p[k];
         }
         for (int k = i + 1; k < n; k++)
         {
             sum2 += p[k];
         }
         int cha = sum1 > sum2 ? sum1 - sum2 : sum2 - sum1;
         if (cha <= min)
         {
             min = cha;
         }
     }

    return min;
}
int main(){
    int n;
    printf("请输入一个同学人数：");
    scanf("%d", &n);
    int arr[n];
    printf("请输入每个人的力量值：");
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    int *p = &arr[0];
    int res = cut1(n,p);
    printf("差的最小值是：%d", res);
}