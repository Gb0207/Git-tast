// arr
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     srand((unsigned int)time(NULL));
//     int n[10]={};
//     int max;
//     for(int i=0; i<10; i++)
//     {
//         n[i] += rand() %100+1;
//         printf("%d ", n[i]);
//     }
//     max = n[0];
//     printf("\n");
//     for(int i=1; i<10; i++)
//     {
//         if(max < n[i])
//             max = n[i];
//     }
//     printf("%d",max);
//     return 0;
// }

// pointer
//  1. 배열 요소 중 최댓값을 반환하는 함수
//  double변수를 요소로 갖는 1차원배열을 매개변수로 전달 받아 요소들 중 
//  최댓값을 반환하는 함수 Max를 만들어라

// 매개변수로 double*, int를 받고 double 값을 반환하는 Max함수를 만든다
// 최댓값을 저장할 변수를 선언한다
// 반복문 사용으로 더 큰값이 나올 때마다 최댓값 변수를 갱신한다.
// 최댓값 변수의 값을 반환한다.

// #include <stdio.h>
// double Max(double*add, int n)
// {
//     double max;
//     int i;

//     for(i=0; i<=n; i++)
//     {
//         if(max < add[i])
//             max = add[i];
//     }
//     return max;
// }
// int main(void)
// {
//     double add[5]={10, 15, 2, 26, 20};
//     double max = Max(add, 5);
//     printf("최댓값:%lf", max);

// }

//  2. 배열값을 크기 순으로 정렬하기
//  int타입의 1차원 배열을 선언하고 1부터 100사이의 무작위 값으로 채워보라
//  그리고 각 요소의 값들을 오름차순으로 정렬한 후 모든 요소들의 값을 출력하여 확인해보라
//  단 오름차순으로 정렬하는 기능은  Sort라는 함수를 만들어 수행해라

// int 타입의 1차원 배열을 선언
// 각 요소의 값으로 1부터 100사이의 무작위 값을 대입한다
// Sort 함수 호출 시 배열과 배열의 크기를 매개변수로 전달한다
// 1차원 배열의 값을 출력하여 오름차순으로 정렬되어 있는지 확인
// 또 다른 크기의 1차원 배열에 대해서도 이상의 과정에 따라 테스트한다.

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void Sort(int*arr, int c)
// {
//     int temp;
//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<c-1; j++)
//         {
//             if(arr[j]> arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j +1] =temp;
//             }
//         }
//     }
// }

// int main(void)
// {
//     srand((unsigned int)time(NULL));
//     int arr[10]={};
//     int max;
//     for(int i=0; i<10; i++)
//     {
//         arr[i] += rand() %100+1;
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     Sort(arr, sizeof(arr)/sizeof(int));
//     for(int i=0; i<10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// 3. 특정 패천의 2차원 배열 만들기
// int타입의 1차원 배열을 선언하고 pattern함수를 호출할 때
// 배열과 배열의 크기를 전달한다. pattern함수에서는 배열의 가운데 요소에 1의 값을 대입하고
// 양쪽으로 인접한 요소에 +1의 값을 배정하여 배열의 모든 요소의 값을 채워보라.
// 요소의 개수가 짝수일 경우에는 가운데 2개의 요소 값이 1이 된다.

// int타입의 1차원 배열을 선언
// pattertn함수 호출 시 배열과 배열의 크기를 매개변수로 전달한다
// pattern함수에서는 문제에서 요구한 패턴대로 값을 채운다
// 배열 요소들의 값을 출력한다
// 또 다른 배열에 대해서도 동일한 과정을 반복한다

// #include <stdio.h>

// void pattern(int *arr, int c)
// {
//     if(c % 2 == 0)
//     {
//         int c2 = c/2;
//         arr[c2-1] = 1;
//         arr[c2] = 1;
//         for(int i=c2+1; i<c; i++)
//         {
//             arr[i]=arr[i-1]+1;
//         }
//         for(int j=c2-2; j>-1; j--)
//         {
//             arr[j]=arr[j+1]+1;
//         }

//     }
//     else
//     {
//         int c1 = c/2;
//         arr[c1] = 1;
//         for(int i=c1+1; i<c; i++)
//         {
//             arr[i]=arr[i-1]+1;
//         }
//         for(int j=c1-1; j>-1; j--)
//         {
//             arr[j]=arr[j+1]+1;
//         }
//     }

// }
// int main(void)
// {
//     int arr[5]={0,};
//     pattern(arr, sizeof(arr)/ sizeof(int));

//     for(int i=0; i<5; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// arr2
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     srand((unsigned int)time(NULL));
//     int arr[3][5]={};
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<5; j++)
//         {
//         arr[i][j] += rand() %100+1;
//         printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     int max0=0, max1=0, max2=0;
//     for(int j=0; j<5; j++)
//     {
//         if(max0 < arr[0][j])
//         {
//             max0 = arr[0][j];
//         }
//         if(max1 < arr[1][j])
//         {
//             max1 = arr[1][j];
//         }
//         if(max2 < arr[2][j])
//         {
//             max2 = arr[2][j];
//         }
//     }
//     printf("1열: %d, 2열: %d, 3열: %d\n", max0, max1, max2);
//     return 0;
// }