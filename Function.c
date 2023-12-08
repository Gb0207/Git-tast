// m의 n승 구하기
// #include <stdio.h>
// int Power(int m, int n)
// {
//     int g=1;
//     if(n == 0)
//         return 1;

//     if(n > 0)
//     {
//         for(int i=0; i<n; i++){
//             g = g * m;
//         }
//     }
//     else
//     {
//         for(int i=0; i<-n; i++){
//             g= g / m;
//         }
//     }
//     return g;
// }
// int main(void)
// {
//     printf("%d", Power(2,5));
// }

// 최댓값 구하기
// #include <stdio.h>
// double Max(double m1, double m2, double m3, double m4, double m5)
// {
//     int i;
//     double max, sum;
//     double add[5]={m1,m2,m3,m4,m5};
//     for(i=0; i<=5; i++)
//     {
//         if(max < add[i])
//             return max = add[i];
        
//     }
//     for(i=0; i<=5; i++)
//         return sum += add[i];
        
// }

// int main(void)
// {
//     double arr[5];
//     int i;
//     printf("5개의 정수를 입력하세요: ");
//     scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
//     double sum = Max(arr[0], arr[1], arr[2],arr[3],arr[4]);
//     printf("최댓값:%lf", sum);
//     return 0;
// }

// 도형 그리기 함수
// #include <stdio.h>

// int Draw(int n)
// {
//     for(int i=n;i>0;i--)
//     {
//         for(int j=i-1;j>0;j--)
//         {
//             printf(" ");
//         }
//         for(int s=1; s<=2*(n-i)+1; s++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main(void)
// {
//     int s=1;
//     while (s != 0)
//     {
//         printf("정수를 입력하세요: ");
//         scanf("%d",&s);
//         Draw(s);
//     }
//     return 0;
// }