// Q1 길이가 10인 배열을 선언하고 총 10개의 정수를 입력받아서 홀수와 짝수를 구분 지어 출력해라. 홀수부터 출력이 되게하며, 10개의 정수는 main함수 내에서 입력받고, 
// 배열 내에 존재하는 홀수만 출력하는 함수와 배열 내에 존재하는 짝수만 출력하는 함수를 각각 정의해서 이 두 함수를 호출하는 방식의 프로그램을 작성하라.
// #include <stdio.h>
// void Even(int *arr, int c)
// {
//     int even[5]={0,};
//     int ecount=0;
//     printf("짝수 출력: ");
//     for(int i=0; i<10; i++)
//     {
//         if(arr[i]%2==0)
//         {
//             even[ecount] = arr[i];
//             printf("%d ", even[ecount]);
//             ecount++;
//         }
//     }
//     printf("\n");
// }
// void Odd(int *arr, int c)
// {
//     int odd[5]={0,};
//     int ocount=0;
//     printf("홀수 출력: ");
//     for(int i=0; i<10; i++)
//     {
//         if(arr[i]%2==1)
//         {
//             odd[ocount] = arr[i];
//             printf("%d ", odd[ocount]);
//             ocount++;
//         }
//     }
//     printf("\n");
// }
// int main(void)
// {
//     int arr[10]={0,};
//     for(int i=0; i<10; i++)
//     {
//         printf("10개의 정수를 입력하세요: ");
//         scanf("%d", &arr[i]);
//     }
//     Odd(arr, sizeof(arr)/sizeof(int));
//     Even(arr, sizeof(arr)/sizeof(int));
//     return 0;
// }

// #include <stdio.h>

// int Odd(int* arr, int n)
// {
//     for(int i =0; i<10; i++)
//     {
//         if(arr[i]%2 == 1){
//             printf("%d ", arr[i]);
//         }
//     }
// }
// int Even(int* arr, int n)
// {
//     for(int i=0; i<10; i++)
//     {
//         if(arr[i] % 2 == 0){
//             printf("%d ", arr[i]);
//         }
//     }
// }
// int main(void)
// {
//     int arr[10];
    
//     for(int i=0; i<10; i++)
//     {
//         printf("10개의 숫자를 입려력하세요: ");
//         scanf("%d", &arr[i]);
//     }
//     printf("홀수 출력: ");
//     Odd(arr, sizeof(arr)/sizeof(int));
//     printf("\n짝수 출력: ");
//     Even(arr, sizeof(arr)/sizeof(int));

//     return 0;
// }
// Q2 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음, 이를 2진수로 변환해서 출력하는 프로그럄을 작성해 보자.
// #include <stdio.h>
// int main(void)
// {
//     int i, temp, num[10]={0,};
//     printf("정수를 입력하세요: ");
//     scanf("%d", &i);

//     temp = i;
//     while (temp != 0)
//     {
//         for(int j=0; j<8; j++)
//         {
//             if(temp % 2 == 0)
//             {
//                 num[j]= 0;
//             }
//             if(temp % 2 == 1)
//             {
//                 num[j]= 1;
//             }
//             temp = temp/2;
//         } 
//     }
    
//     for(int j=7; j>=0; j--)
//     {
//         printf("%d", num[j]);
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(void)
// {
//     int i;
//     int B[100];
//     int n =0;

//     printf("숫자를 입력하세요: ");
//     scanf("%d", &i);

//     while (i != 0)
//     {
//         B[n] = i % 2;
//         i /= 2;
//         n++;
//     }
//     for(int j = n-1; j>=0; j--){
//         printf("%d", B[j]);
//     }
//     printf("\n");
//     return 0;    
// }
// Q3 길이가 10인 배열을 선언하고 총 10개의 정수를 입력받는다. 단, 입력 받은 숫자가 홀수이면 배열의 앞에서부터 채워나가고, 짝수이면 뒤에서부터 채워나가는 형식을 취하기로 하자.
// 따라서 사용자가[1,2,3,4,5]라고 입력했다면, 배열에는 [1,3,5,4,2]순으로 저장되어야한다.
// #include <stdio.h>
// int main(void)
// {
//     int arr[10]={0,};
//     int temp;
//     int odd=0, even=9;

//     for(int i=0; i<10; i++)
//     {
//         printf("%d번 정수를 입력하세요: ", i+1);
//         scanf("%d", &temp);

//         if(temp%2 == 1) //홀수
//         {
//             arr[odd]=temp;
//             odd++;
//         }
//         if(temp%2 == 0)
//         {
//             arr[even]=temp;
//             even--;
//         }
//     }
//     for(int i=0; i<10; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }
// Q4 회문은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어를 뜻함, 우리는 인자로 전달되는 영단어가 회문인지 아닌지 판단해서 출력하는 함수를 정의하고 이에 적절한 main함수를 정의해 보자.
// #include <stdio.h>
// int Printe(void)
// {
//     char alpha[100]={};
//     int result, idx=0;

//     printf("단어를 입력하세요: ");
//     scanf("%s", alpha);

//     while(alpha[idx] != '\0') idx++;
  
//     for(int i=0; i<idx/2; i++)
//     {
//         char a = alpha[i];
//         char b = alpha[idx-1-i];
//         if(a == b)
//         {
//             result = 1;
//         }
//         else
//         {
//             result = 0;
//         }
//         return result;
//     } 
//     }
// int main(void)
// {
//     // Printe();
//     int r = Printe();
//     if(r ==1)
//     {
//         printf("회문 입니다.");
//     }
//     else
//     {
//         printf("회문이 아닙니다.");
//     }
//     return 0;
// }
// Q5 길이가 7인 int형 배열을 선언해서 프로그램 사용자로부터 7개의 정수를 입력 받도록 하자. 
// 입력 받은 정수를 내림차순으로 정렬하기 위해 배열을 인자로 전달하면서 DesSort함수를 호출하고 출력해보자.
// #include <stdio.h>

// void DesSort(int ary[], int len);

// int main(void)
// {
//     int arr[7]={0,};
//     int i;

//     for(int i=0; i<7; i++)
//     {
//         printf("%d번째 입력하세요: ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     DesSort(arr, sizeof(arr)/sizeof(int));
//     for(i=0; i<7; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// void DesSort(int ary[], int len)
// {
//     int i, j;
//     int temp;

//     for(i=0; i<len-1; i++)
//     {
//         for(j=0; j<(len-i)-1; j++)
//         {
//             if(ary[j]<ary[j+1])
//             {
//                 temp=ary[j];
//                 ary[j]=ary[j+1];
//                 ary[j+1]=temp;
//             }
//         }
//     }
// }
