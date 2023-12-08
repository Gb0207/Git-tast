
// //Q1 10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해보자. 이는 서식문자를 활용에 대한 문제이다.
// #include <stdio.h>
// int main(void)
// {
//     int a;
//     printf("10진수 정수를 입력하세요: ");
//     scanf("%d", &a);

//     printf("10진수:%d\n16진수:%x\n",a , a);
//     return 0;
// }
// //Q2 프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하라. 사용자가 3과 5를 입력하면 3 4 5 단이 출력되어야하고 5와 3을 입력해도 3 4 5 가 출력되어야한다.
// #include <stdio.h>
// int main(void)
// {
//     int dan1, dan2;
//     int a,b;
//     printf("구구단의 몇단을 출력하시겠습니까?: ");
//     scanf("%d %d", &dan1, &dan2);

//     for(int i=1; i<10; i++)
//     {
//         a = dan1 * i;
//         printf("%d x %d = %d\n", dan1, i, a);
//     }
//     for(int i=1; i<10; i++)
//     {
//         b = dan2 * i;
//         printf("%d x %d = %d\n", dan2, i, b);
//     }
//     return 0;
// }
// #include <stdio.h>
// void GuDan(int, int);

// int main(void)
// {
// 	int num1, num2;
// 	printf("두 개의 정수를 입력하세요:");
// 	scanf("%d %d", &num1, &num2);

// 	if (num1 < num2)
// 		GuDan(num1, num2);
// 	else
// 		GuDan(num2, num1);

// 	return 0;
// }

// void GuDan(int num1, int num2)
// {
// 	int i, j;
// 	for (i = num1; i <= num2; i++)
// 	{
// 		for (j = 1; j < 10; j++)
// 			printf("%d x %d = %d \n", i, j, i * j);
// 		printf("\n");
// 	}
// }
// //Q3 두 개의 정수를 입력받아서 최대 공역수를 구하는 프로그램을 작성 해보자.
// int main(void)
// {
//     int n1, n2, b=0;
//     printf("정수를 입력하세요: ");
//     scanf("%d %d", &n1, &n2);

//     for(int i=1; i<=n2;i++)
//     {
//         if(n1%i==0 && n2%i==0)
//         {
//             b=i;
//         }
//     }
//     printf("두 수의 최대공약수: %d", b);
//     return 0;
// }
// //Q4 3500원으로 크림빵500, 새우깡700, 콜라400을 잔돈을 남기지 않고 세가지 물건을 하나 이상 구매하려고 한다. 경우의 수를 출력하세요.
// int main(void)
// {
//     int p =3500;
//     int c =500, s=700, co=400;

//     for(int i=1; i<7; i++)
//     {
//         for(int j=1; j<5; j++)
//         {
//             for(int l=1; l<8; l++)
//             {
//                 if(c*i + s*j + co*l == p){
//                     printf("크림빵:%d, 새우깡:%d, 콜 라:%d\n", i, j, l);
//                 }
//             }
//         }
//     }
//     return 0;
// }
// //Q5 10개의 소수를 출력하는 프로그램을 작성하라. 정수가 1과 그 정수로만 나눠진다면 이는 소수이다.
// int main(void)
// {
//     int count=0, isprime=0;
//     for(int i=2; count<10; i++)
//     {
//         isprime = 0;
//         for(int j=1; j<i; j++)
//         {
//             if(i%j == 0 && j !=1)
//             {
//             isprime=1;
//             break;
//             }    
//         }
//         if(isprime == 0)
//         {
//             count++;
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }
// //Q6 프로그램 사용자로부터 초를 입력 받은 후 시, 분, 초의 형태로 출력하는 프로그램을 작성해라.
// int main(void)
// {
//     int h=3600,m=60,s=1,second, r, e, u;
//     printf("초를 입력하세요: ");
//     scanf("%d",&second);

//     r = second / h;
//     e = second%h / m;
//     u = second%m / s;

//     printf("h:%d\nm:%d\ns:%d\n", r, e, u);
//     return 0;
// }
// //Q7 사용자로부터 숫자를 입력받고, 다음 공식이 성립하는 K의 최댓값을 계산후 출력해라. 2k승 <= n
// int main(void)
// {
//     int n, k =0, m =1;
//     printf("숫자를 입력하세요: ");
//     scanf("%d", &n);

//     while (1)
//     {
//         m *= 2;
//         if(m>n)
//         {
//             break;
//         }
//         k++;
//     }
//     printf("%d", k);
//     return 0;
// }
// //Q8 2의 n승을 구하는 함수를 재귀적으로 구현해 보자. 
// int re(int n)
// {
//     if (n == 0)
//         return 1;
//     else if (n>=1)
//         return 2 *re(n-1);
// }
// int main(void)
// {
//     int num=0, k;
//     printf("숫자를 입력하세요: ");
//     scanf("%d", &num);

//     printf("%d", re(num));
//     return 0;
// }


