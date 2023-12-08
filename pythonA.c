// A 반복문 만들기
// #include <stdio.h>
// Q1
// #include <stdio.h>
// int main(void)
// {
//     int i=1;
//     while (i<11)
//     {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0; 
// }
// Q2
// #include <stdio.h>
// int main(void)
// {
//     int i=10;
//     for(i=10; i>0; i--)
//     {
//         printf("%d \n",i);
//     }
//     return 0;
// }
// Q3 
// #include <stdio.h>
// int main(void)
// {
//     int result3=0, i=0;
//     for(i=1; i<101; i++)
//     {
//         result3+=i;
//     }
//     printf("%d", result3);
//     return 0;
// }
// Q4 
// #include <stdio.h>
// int main(void)
// {
//     int result4=0, i=0;
//     for(i=2; i<101; i+=2)
//     {
//         result4+=i;
//     }
//     printf("%d", result4);
//     return 0;
// }
// Q5 
// #include <stdio.h>
// int main(void)
// {
//     int result5=0, i=0;
//     for(i=1; i<101; i++)
//     {
//         if (i % 2 == 1)
//             result5+= i;
//         else
//             result5-= i;
//     }
//     printf("%d", result5);
//     return 0;
// }
// Q6
// #include <stdio.h> 
// int main(void)
// {
//     int n=5, i;
//     int result6=1;

//     for(i=1; i<=n; i++)
//         result6= result6*i;
//     printf("%d!\n%d\n", n, result6);
//     return 0;
// }
// Q7 
// #include <stdio.h>
// int main(void)
// {
//     int n=10, i;
//     int result7=0;
//     for(i=1 ; i<=n ; i++)
//     {
//         if(n%i==0)
//         {
//             printf("%d\n", i);
//             result7 += i;
//         }
//     }
//     printf("%d\n", result7);
//     return 0;
// }
// Q8
// #include <stdio.h>
// int main(void)
// {
//     int n1=18, n2=24, result8=0, temp=0;

//     for(int i=1; i<=18 ; i++)
//     {
//         if(n1%i==0 && n2%i==0)
//         {
//             result8 = i;  
//         }
//     }
//     printf("%d", result8);
//     return 0;
// }







// B 조건문 만들기
// #include <stdio.h>
// //Q1
// int main(void) {
//   int a,b;
//   printf("숫자를 입력하세요: \n");
//   scanf("%d", &a);
//   printf("숫자를 입력하세요: \n");
//   scanf("%d", &b);
//   if(a>b)
//     printf("%d", a);
//   else
//     printf("%d", b);
//   return 0;
// }
// //Q2
// #include <stdio.h>
// int main(void) {
//   int a;
//   printf("숫자를 입력하세요: \n");
//   scanf("%d", &a);
//   if(a<0)
//     printf("음수");
//   else
//     printf("양수");
//   return 0;
// }
// //Q3
// #include <stdio.h>
// int main(void) {
//   int max, a, b;
//   printf("첫번째 숫자를 입력하세요: \n");
//   scanf("%d", &max);
//   printf("두번째 숫자를 입력하세요: \n");
//   scanf("%d", &a);
//   printf("세번째 숫자를 입력하세요: \n");
//   scanf("%d", &b);
//   if(a>max)
//     max = a;
//   if(b>max)
//     max = b;
//   printf("%d", max);
//   return 0;
// }
// //Q4
// #include <stdio.h>
// int main(void) {
//   int a;
//   printf("숫자를 입력하세요: \n");
//   scanf("%d", &a);
//   if(a%2==0)
//     printf("짝수");
//   else
//     printf("홀수");
//   return 0;
// }
// //Q5
// #include <stdio.h>
// int main(void) {
//   int a;
//   printf("숫자를 입력하세요: \n");
//   scanf("%d", &a);
//   if(a%3==0)
//     printf("3의 배수");
//   else
//     printf("3의 배수가 아니다");
//   return 0;
// }
// //Q6
// #include <stdio.h>
// int main(void) {
//   int a;
//   printf("나이를 입력하세요: \n");
//   scanf("%d", &a);
//   if(a<8)
//     printf("0원");
//   else if(8<a<60)
//     printf("5000원");
//   else
//     printf("2500원");
//   return 0;
// }
// //Q7
// #include <stdio.h>
// int main(void) {
//   int a;
//   printf("숫자를 입력하세요: \n");
//   scanf("%d", &a);
//   if(a%3==0 && a%5==0)
//     printf("3의 배수이며 5의 배수이다");
//   else
//     printf("3과 5의 배수가 아니다");
//   return 0;
// }
// //Q8
// #include <stdio.h>
// int main(void) {
//   int a;
//   printf("나이를 입력하세요: \n");
//   scanf("%d", &a);
//   if(a<8 || a>=60)
//     printf("무료");
//   else
//     printf("5000원");
//   return 0;
// }





// C 별찍기
// #include <stdio.h>
// //Q1
// int main(void)
// {
//     for(int i=5; i>=0;i--){
//         for(int j=i; j>0; j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //Q2
// #include <stdio.h>
// int main(void)
// {    
//     for(int i=5;i>0;i--)
//     {
//         for(int j=i-1;j>0;j--)
//         {
//             printf(" ");
//         }
//         for(int s=1; s<=10-2*i+1; s++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //Q3
// #include <stdio.h>
// int main(void)
// {    
//     for(int i=5;i>0;i--)
//     {
//         for(int j=i-1;j>0;j--)
//         {
//             printf(" ");
//         }
//         for(int s=1; s<=10-2*i+1; s++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=4; i>0; i--){
//         for(int j=6-i; j<10-2*i+1;j++)
//         {
//             printf(" ");
//         }
//         for(int s=1; s<=2*i-1; s++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;

// }
// //Q4
// #include <stdio.h>
// int main(void)
// {
//     for(int i=5; i>0; i--){
//         for(int j=6-i; j<10-2*i+1;j++)
//         {
//             printf(" ");
//         }
//         for(int s=1; s<=2*i-1; s++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=4;i>0;i--)
//     {
//         for(int j=i-1;j>0;j--)
//         {
//             printf(" ");
//         }
//         for(int s=1; s<=10-2*i+1; s++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;

// }





// D 금붕어 살리기 죽이기
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void){
//     int salmon=1,tuna=1,baby=0,turnCount=0;
//     int NowFishCount=salmon+tuna+baby;
//     srand(time(NULL));
//     int dieRate = 0;
//     int birthRate = 0;
//     while (1)
//     {
//         NowFishCount = salmon + tuna + baby*2;
//         printf("현재 턴은 %d째..... 생존중인 물고기.....salmon: %d마리 tuna: %d마리 baby: %d마리... 총 %d마리.... 이곳은 너무 춥고...외롭다... 누군가 구하러 와주길...\n",turnCount,salmon,tuna,baby,NowFishCount);
//         if(NowFishCount > 1000){
//             break;
//         }
//         turnCount++;
//         salmon += baby;
//         tuna += baby;
//         baby -= baby;

//         for(int i=0; i<salmon; i++){
//             baby += birthRate;
//         }
//         if(turnCount>=2){
//             dieRate = rand()%31+20;
//             salmon -= salmon*dieRate/100;
//             tuna -= tuna*dieRate/100;
//             baby -= baby*dieRate/100;
//         }
//     }
//     printf("%d턴 전 실종된 어류학자 물고기(48세)박사가 어항에서 사망한채 발견되어 한국 어류학계에 큰 안타까움을 자아내...\n",turnCount);

//     return 0;
// }





// E 자판기만들기
// #include <stdio.h>
// #include <stdlib.h>

// int main(void){
//     char menu[14][30]={"콜라","우주맛 콜라","제로콜라","스프라이트","환타","닥터페퍼","몬스터","파워에이드","네스티","글라소 비타민 워터","미닛메이드","조지아 커피","암바사","마테차"};
//     int coin[14]={1200,1900,1200,1100,900,1100,1800,1900,1600,2100,1700,900,900,1700};
//     int shopcart[14]={0,};
//     int money,total,tmpnum;
//     int choiceMenu;
//     int isover=0;

//     printf("돈을 넣어 주세요>\n");
//     scanf("%d",&money);
//     while(isover==0){
//         for(int i=0;i<14;i++){
//             printf("%d)%s : %d\n",i+1, menu[i],coin[i]);
//         }
//         printf("0) 계산하기\n");
//         printf("16) 종료하기\n");
    
//         printf("메뉴를 선택하세요>");
//         scanf(" %d",&choiceMenu);
//         if(choiceMenu == 0){
//             if(money<total){
//                     printf("돈이 부족합니다.");
//                     isover=1;
//                     break;
//                 };
//             for(int i=0;i<14;i++){
//                 total = shopcart[i]*coin[i];
//                 printf("음료를 줍니다. 거스름돈은 %d입니다.",money-total);
//                 isover=1;
//                 break;
//             }
//         }
//         if(choiceMenu=='x'){
//             break;
//         }
//         else{
//         shopcart[choiceMenu-1]++;
//         }

//     }
//     return 0;
// }
