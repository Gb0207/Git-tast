#include <stdio.h>

// int main(void)
// {
//     printf(" Hello World! \n");
//     return 0;
// }

// int main(void)
// {
//     printf("Hello Everybody\n");
//     printf("%d\n", 1234);
//     printf("%d %d\n", 10, 20);
//     return 0;
// }

// int main(void)
// {
//     int num;
//     num=20;
//     printf("%d", num);

// }

// int main(void)
// {
//     int num1, num2;
//     int num3=30, num4=40;

//     printf("num: %d, num:2 %d \n", num1, num2);
//     num1=10;
//     num2=20;

//     printf("num1: %d, num2: %d \n", num1, num2);
//     printf("num3: %d, num3: %d \n", num3, num4);
//     return 0;
// }

// int main(void)
// {
//     int num1=12;
//     int num2=12;
//     printf("num1: %d \n", num1);
//     printf("num1++: %d \n", num1++);
//     printf("num1: %d \n\n", num1);

//     printf("num2: %d \n", num2);
//     printf("++num2: %d \n", ++num2);
//     printf("num2: %d \n\n", num2);
//     return 0;

// }
// int main(void)
// {
//     int num1=0;
//     int num2=10;
//     int result1 = num1++ + num2;
//     int result2 = ++num1 + num2++;
//     int result3 = num1-- + num1-- - --num2;
//     int result4 = num2++ * num1++ - --num2 + num1;
//     printf("%d\n", result1);
//     printf("%d\n", result2);
//     printf("%d\n", result3);
//     printf("%d\n", result4);
//     printf("%d\n", num1);
//     printf("%d\n", num2);
//     return 0;
// }
// int main(void)
// {
    // int reslut;
    // int num1, num2;
    
    // printf("정수 one: ");
    // scanf("%d", &num1);
    // printf("정수 two: ");
    // scanf("%d", &num2);

    // reslut=num1+num2;
    // printf("%d + %d = %d \n", num1, num2, reslut);
// }

// int main(void)
// {
//     int result;
//     int num1, num2, num3;
//     printf("세 개의 정수를 입력: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     result=num1+num2+num3;
//     printf("%d + %d + %d = %d \n", num1, num2, num3, result);
//     return 0;    
// }


// Q1
// int main(void)
// {
//     int reslut;
//     int reslut1;
//     int num1, num2;
    
//     printf("정수 one: ");
//     scanf("%d", &num1);
//     printf("정수 two: ");
//     scanf("%d", &num2);

//     reslut=num1-num2;
//     reslut1=num1*num2;
//     printf("%d - %d = %d \n", num1, num2, reslut);
//     printf("%d * %d = %d \n", num1, num2, reslut1);
//     return 0; 
// }
// Q2
// int main(void)
// {
//     int result;
//     int num1, num2, num3;
//     printf("세 개의 정수를 입력: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     result=num1*num2+num3;
//     printf("%d * %d + %d = %d \n", num1, num2, num3, result);
//     return 0;    
// }
// Q3
// int main(void)
// {
//     int reslut;
//     int num1;
    
//     printf("정수 one: ");
//     scanf("%d", &num1);

//     reslut=num1*num1;

//     printf("%d", reslut);
//     return 0; 
// }
// Q4
// int main(void)
// {
//     int reslut;
//     int reslut1;
//     int num1;
//     int num2;

//     printf("첫번째 정수를 입력하세요: ");
//     scanf("%d", &num1);
//     printf("두번째 정수를 입력하세요: ");
//     scanf("%d", &num2);

//     reslut = num1 / num2;
//     reslut1 = num1 % num2;

//     printf("몫 %d, 나머지 %d", reslut, reslut1);
//     return 0; 
// }
// Q5
// int main(void)
// {
//     int result;
//     int num1, num2, num3;
//     printf("세 개의 정수를 입력: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     result=(num1-num2)*(num2+num3)*(num3%num1);
//     printf("%d",result);
//     return 0;    
// }
// p100 Q1
// int main(void)
// {
//     int result;
//     int num1;
//     printf("숫자를 입력하세요: ");
//     scanf("%d", &num1);
//     num1 = ~num1;
//     num1 = num1 + 1;

//     printf("%d", num1);
//     return 0;
// }
// Q2
// int main(void)
// {
//     int num=3;
//     num = num<<3;
//     num = num>>2;
//     printf("%d", num);
//     return 0;
// }
// 
// int main(void)
// {
//     char ch=9;
//     int inum=1052;
//     double dnum=3.1415;
//     printf("변수 ch의 크기: %d \n", sizeof(ch));
//     printf("변수 inum의 크기: %d \n", sizeof(inum));
//     printf("변수 dnum의 크기: %d \n", sizeof(dnum));

//     printf("char의 크기: %d \n", sizeof(char));
//     printf("int의 크기: %d \n", sizeof(int));
//     printf("long의 크기: %d \n", sizeof(long));
//     printf("long long의 크기: %d \n", sizeof(long long));
//     printf("float의 크기: %d \n", sizeof(float));
//     printf("double의 크기: %d \n", sizeof(double));
//     return 0;
// }
// 
// int main(void)
// {
//     double rad;
//     double area;
//     printf("원의 반지름 입력: ");
//     scanf("%lf", &rad);

//     area = rad*rad*3.1415;
//     printf("원의 넓이: %f \n", area);
//     return 0;

// }
// p118 Q1
// int main(void)
// {
//     int numx1, numy1;
//     int numx2, numy2;
//     int area;
//     printf("좌상단의 좌표를 입력하세요: ");
//     scanf("%d %d", &numx1, &numy1);
//     printf("우상단의 좌표를 입력하세요: ");
//     scanf("%d %d", &numx2, &numy2);
//     area=(numx2-numx1)*(numy2-numy1);
//     printf("두 점이 이루는 직사각형의 넓이는 %d",area);
//     return 0;
// }
// Q2
// int main(void)
// {
//     double n1, n2;
//     printf("두 개의 실수를 입력하세요: ");
//     scanf("%lf %lf", &n1, &n2);

//     printf("+ %f\n", n1 + n2);
//     printf("- %f\n", n1 - n2);
//     printf("* %f\n", n1 * n2);
//     printf("/ %f\n", n1 / n2);
//     return 0;
// }
// Q4
// int main(void)
// {
//     int a;
//     printf("숫자를 입력하세요: ");
//     scanf("%d", &a);

//     printf("%c", a);
//     return 0;
// }
// Q5
// int main(void)
// {
//     char a;
//     printf("알파벳을 입력하세요: ");
//     scanf("%c", &a);

//     printf("%d", a);
//     return 0;
// }

// int main(void)
// {
//     int num1, num2, num3;
//     printf("세 개의 정수 입력: ");
//     scanf("%d %o %x", &num1, &num2, &num3);

//     printf("입력된 정수 10진수 출력: ");
//     printf("%d %d %d \n", num1, num2, num3);
//     return 0;
// }

// int main(void)
// {
//     int dan=0, num=1;
//     printf("몇 단? ");
//     scanf("%d", &dan);

//     while (num<10)
//     {
//         printf("%dX%d=%d \n", dan, num, dan*num);
//         num++;
//     }
//     return 0;
// }
// p155 Q1
// int main(void)
// {
//     int num;
//     int i=0;
//     printf("숫자를 입력하세요:");
//     scanf("%d", &num);

//     while (i<num)
//     {
//         printf("Hello World!\n");
//         i++;
//     }
//     return 0;
// }
// Q2
// int main(void)
// {
//     int num=0, n1=0;
//     printf("숫자를 입력하세요:");
//     scanf("%d", &num);

//     while (n1++<num)
//     {
//         printf("%d \n", 3*n1);
//     }
//     return 0;
// }
// Q3
// int main(void)
// {
//     int num=1;
//     int total=0;
//     printf("숫자를 입력하세요:");
//     scanf("%d", &num);
//     total+=num;

//     while (num != 0)
//     {
//         printf("숫자를 입력하세요:");
//         scanf("%d", &num);
//         total+=num;
//     }

//     printf("%d\n",total);
//     return 0;
// }
// Q4
// int main(void)
// {
//     int dan=0, num=9;
//     printf("몇 단? ");
//     scanf("%d", &dan);

//     while (num>0)
//     {
//         printf("%dX%d=%d \n", dan, num, dan*num);
//         num--;
//     }
//     return 0;
// }
//Q5
// int main(void)
// {
//     double num=0;
//     int i=0;
//     double total=0;
//     printf("몇개의 정수로 평균을 구하시겠습니까?: ");
//     scanf("%lf", &num);

//     while (i<num)
//     {
//         double n2;
//         printf("숫자를 입력하세요: ");
//         scanf("%lf", &n2);
//         total += n2;
//         i++;
//     }
//     printf("%f \n", (double)total/num);
//     return 0;
// }

// int main(void)
// {
//     int cur=2;
//     int is=0;

//     while (cur<10)
//     {
//         is=1;
//         while (is<10)
//         {
//             printf("%d * %d = %d \n", cur, is, cur*is);
//             is++;
//         }
//         cur++;
//     }
//     return 0;
// }
// p157 Q1
// int main(void)
// {
//     int num=0, total=0, i=0;
//     while (i < 5)
//     {
//         printf("숫자를 입력하세요(%d번): ", i+1);
//         scanf("%d", &num);
//         total += num; 
//         while (num <= 0)
//         {
//             printf("1이상의 숫자를 입력하세요\n");
//             break;
//         } 
//         i++; 
//     }
    
//     printf("다섯 개의 숫자를 더한 값은 %d 이다", total);
//     return 0;
// }
// Q2
// int main(void)
// {
//     int s=0, on=0;
//     char o='o';
//     while (s < 5)
//     {
//         while (o < 5)
//         {
//             o++;
//         }
        
//         printf("%c * \n", o);
//         s++;
//     }
//     return 0;
// }

// int main(void)
// {
//     int num;
//     printf("정수 입력: ");
//     scanf("%d", &num);

//     if(num<0)
//         printf("입력 값은 0보다 작다. \n");
//     if(num>0)
//         printf("입력 값은 0보다 크다. \n");
//     return 0;
// }
// int main(void)
// {
//     int opt;
//     double n1, n2;
//     double result;

//     printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//     printf("선택은? ");
//     scanf("%d", &opt);
//     printf("두 개의 실수 입력: ");
//     scanf("%lf %lf", &n1, &n2);

//     if(opt==1)
//         result = n1 + n2;
//     if(opt==2)
//         result = n1 - n2;
//     if(opt==3)
//         result = n1 * n2;
//     if(opt==4)
//         result = n1 / n2;
//     printf("결과: %f \n", result);
//     return 0;
// }
// int main(void)
// {
//     int num;
//     for(num=1; num<100; num++)
//     {
//         if(num%3==0 || num%4==0)
//         printf("3 또는 4의 배수: %d \n", num);
//     }
//     return 0;
// }
// int main(void)
// {
//     int num, abs;
//     printf("정수 입력: ");
//     scanf("%d", &num);

//     abs = num>0 ? num : num*(-1);
//     printf("절댓값: %d \n", abs);
//     return 0;
// }
// int main(void)
// {
//     int num;
//     printf("1이상 5이하의 정수 입력: ");
//     scanf("%d", &num);

//     switch (num)
//     {
//     case 1:
//         printf("1은  ONE \n");
//         break;
//     case 2:
//         printf("2는 TWO \n");
//         break;
//     case 3:
//         printf("3은 THREE \n");
//         break;
//     case 4:
//         printf("4는 FOUR \n");
//         break;
//     case 5:
//         printf("5는 FIVE \n");
//         break;
//     default:
//         printf("I don't know! \n");
//         break;
//     }
//     return 0;
// }
// int main(void)
// {
//     char sel;
//     printf("M 오전, A 오후, E 저녁 \n");
//     printf("입력: ");
//     scanf("%c", &sel);

//     switch (sel)
//     {
//     case 'M':
//     case 'm':
//         printf("Morning \n");
//         break;
//     case 'A':
//     case 'a':
//         printf("Afternoon \n");
//         break;
//     case 'E':
//     case 'e':
//         printf("Evening \n");
//     }
//     return 0;
// }
//p189 Q1
// int main(void)
// {
//     int num;
//     for(num =1; num<100; num++)
//     {
//         if(num%7==0 && num%9==0)
//             printf("7 또는 9의 배수: %d \n", num);
//     }
//     return 0;
// } 
// Q2
// int main(void)
// {
//     int n1, n2, result=0;
//     printf("두 개의 정수 입력하세요: ");
//     scanf("%d %d", &n1, &n2);

//     if(n1 > n2)
//         result = n1 - n2;
//     else if(n1 < n2)
//         result = n2 - n1;

//     printf("%d 두 정수의 차입니다", result);
//     return 0;
// }
// Q3
// int main(void)
// {
//     int k=0, e=0, m=0, result=0;
//     printf("국어, 영어, 수학 점수를 입력하세요: ");
//     scanf("%d %d %d", &k, &e, &m);
//     result = (k + e + m)/3;
    
//     if(result >= 90)
//         printf("%d A학점 입니다", result);
//     else if(result >= 80)
//         printf("%d B학점 입니다", result);
//     else if(result >= 70)
//         printf("%d C학점 입니다", result);
//     else if(result >= 50)
//         printf("%d D학점 입니다", result);
//     else
//         printf("%d F학점 입니다", result);

//     return 0;
// }
// Q4
// int main(void)
// {
//     int n1, n2, result=0;
//     printf("두 개의 정수 입력하세요: ");
//     scanf("%d %d", &n1, &n2);

//     result = (n1<n2) ? n2-n1 : n1-n2;
//     printf("%d 두 정수의 차입니다", result);
//     return 0;
// }
// p193 Q1
// int main(void)
// {
//     int i, n;
    
//     for(i=1; i<10; i++)
//     {
//         if(i%2 != 0)
//             continue;

//         for(n=1; n<10; n++)
//             if(i<n)
//             break;
//             printf("%d*%d=%d \n",i, n, i*n);
//     }

//     return 0;
// }
// int main(void)
// {
//     int n1, n2;
//     n1=printf("12345\n");
//     n2=printf("I Love My Home\n");
//     printf("%d %d \n", n1, n2);
//     return 0;
// }
// int Add(int n1, int n2)
// {
//     return n1 +n2;
// }
// int main(void)
// {
//     int result = Add(3,4);
//     printf("덧셈결과1: %d\n", result);
//     result = Add(5,8);
//     printf("덧셈결과2: %d\n", result);
//     return 0;
// }
// int AbsoCompare(int num1, int num2);
// int GetAbsoValue(int num);

// int main(void)
// {
//     int num1, num2;
//     printf("두 개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);
//     printf("%d와 %d중 절댓값이 큰 정수: %d \n", num1, num2, AbsoCompare(num1, num2));
//     return 0;
// }

// int AbsoCompare(int num1, int num2)
// {
//     if(GetAbsoValue(num1) > GetAbsoValue(num2))
//         return num1;
//     else
//         return num2;
// }

// int GetAbsoValue(int num)
// {
//     if(num<0)
//         return num * (-1);
//     else
//         return num;
// }
