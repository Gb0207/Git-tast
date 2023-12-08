
#include <stdio.h>
// int main(void)
// {
//     int cnt;
//     for(cnt=0; cnt<3; cnt++)
//     {
//         int num=0;
//         num++;
//         printf("%d번째 반복, 지역변수 num은 %d. \n", cnt+1, num);
//     }
//     if(cnt==3)
//     {
//         int num=7;
//         num++;
//         printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);
//     }
//     return 0;
// }
// p259
// int main(void)
// {
//     int arr1[5]={1,2,3,4,5};
//     int arr2[ ]={1,2,3,4,5,6,7};
//     int arr3[5]={1,2};
//     int ar1Len, ar2Len, ar3Len, i;

//     printf("배열 arr1의 크기: %d \n", sizeof(arr1));
//     printf("배열 arr2의 크기: %d \n", sizeof(arr2));
//     printf("배열 arr3의 크기: %d \n", sizeof(arr3));

//     ar1Len = sizeof(arr1) / sizeof(int);
//     ar2Len = sizeof(arr2) / sizeof(int);
//     ar3Len = sizeof(arr3) / sizeof(int);

//     for(i=0; i<ar1Len; i++)
//         printf("%d ",arr1[i]);
//     printf("\n");
//     for(i=0; i<ar2Len; i++)
//         printf("%d ",arr2[i]);
//     printf("\n");
//     for(i=0; i<ar3Len; i++)
//         printf("%d ",arr3[i]);
//     printf("\n");
//     return 0;
// }
// p260
// Q1
// int main(void)
// {
//     int arr[5];
//     int i, max, min, sum;
//     printf("5개의 정수를 입력하세요: ");
//     scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

//     for(i=0; i<sizeof(arr) /sizeof(int); i++)
//     {
//         if(max < arr[i])
//             max = arr[i];
//         if(min > arr[i])
//             min = arr[i];
//     }
//     for(i=0; i<sizeof(arr) /sizeof(int); i++)
//         sum+=arr[i];
//     printf("최댓값:%d 최솟값:%d 총합:%d\n", max, min, sum);
//     return 0;
// }
// int main(void)
// {
//     int num1[5];
//     int max, min, sum=0;
//     for (int i = 0; i<5; i++)
//     {
//         int temp = 0;
//         printf("정수를 입력하세요: ");
//         scanf("%d", &temp);
//         num1[i] = temp;
//         if(i==0)
//         {
//             min =num1[i];
//             max =num1[i];
//         }
//         max = temp > max? temp: max;
//         min = temp < min? temp: min;
//         sum += temp;
//     }
//     printf("max: %d, min: %d, sum: %d", max, min, sum);
//     return 0;
// }

// int main(void)
// {
//     char str[50];
//     int idx=0;

//     printf("문자열 입력: ");
//     scanf("%s", str);
//     printf("입력 받은 문자열: %s \n", str);

//     printf("문자 단위 출력: ");
//     while (str[idx]!= '\0')
//     {
//         printf("%c", str[idx]);
//         idx++;
//     }
//     printf("\n");
//     return 0;
// }

//p275

// int main(void)
// {
//     const unsigned int NUM1 =3;
//     const unsigned int NUM2 =5;
//     const unsigned int NUM3 =NUM1 & NUM2;
//     printf("%d\n",NUM3);
//     printf("%p", (void*)&NUM3);

//     return 0;
// }

// p284
// Q1
// int main(void)
// {
//     int num=10;
//     int* ptr1=&num;
//     int* ptr2=ptr1;

//     (*ptr1)++;
//     (*ptr2)++;
//     printf("%d\n", num);
//     return 0;
// }
// Q2
// int main(void)
// {
//     int num1=10;
//     int num2=20;
//     int* ptr1=&num1;
//     int* ptr2=&num2;
//     int* temp;

//     (*ptr1)+=10;
//     (*ptr2)-=10;
    
//     temp=ptr1;
//     ptr1=ptr2;
//     ptr2=temp;
//     printf("num1 %d\nnum2 %d", *ptr2, *ptr1);
//     return 0;
// }
//
// int main(void)
// {
//     int arr[3]={11,22,33};
//     int * ptr=arr;
//     printf("%d %d %d \n", *ptr, *(ptr+1),*(ptr+2));
//     printf("%d ", *ptr); ptr++;
//     printf("%d ", *ptr); ptr++;
//     printf("%d ", *ptr); ptr--;
//     printf("%d ", *ptr); ptr--;
//     printf("%d ", *ptr); printf("\n");
//     return 0;
// }
// int main(void)
// {
    // char * strArr[3]={"Simple", "String","Array"};
    // printf("%s \n", strArr[0]);
    // printf("%s \n", strArr[1]);
    // printf("%s \n", strArr[2]);
//     printf("%d",-(-2));
//     return 0;
// }

// void ShowArayElem(int * param, int len)
// {
//     int i;
//     for(i=0; i<len; i++)
//     {
//         printf("%d", param[i]);
//     }
//     printf("\n");
// }
// int main(void)
// {
//     int arr1[3]={1,2,3};
//     int arr2[5]={4,5,6,7,8};
//     ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
//     ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
//     return 0;
// }



// int main(void)
// {
//     int arr1[3][4];
//     int arr2[7][9];
//     printf("세로 3, 가로4: %d \n", sizeof(arr1));
//     printf("세로 7, 가로 9: %d \n", sizeof(arr2));
//     return 0;
// }

// int main(void)
// {
//     int villa[4][2];
//     int popu, i, j;

//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             printf("%d층 %d호 인구수: ", i+1, j+1);
//             scanf("%d", &villa[i][j]);
//         }
//     }
//     for(i=0; i<4; i++)
//     {
//         popu=0;
//         popu += villa[i][0];
//         popu += villa[i][1];
//         printf("%d층 인구수: %d \n", i+1, popu);
//     }
//     return 0;
// }
// p349 Q1
// int main(void)
// {
//     int dan[3][9];
//     int i, j;
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<9; j++)
//         {
//             dan[i][j]=(i+2) * (j+1);
//         }
//     }
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<9; j++)
//         {
//             printf("%4d", dan[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Q3
// int report[5][5]; //학생들의 성적 저장
// void Report(void) //학생별 성적입력
// {
//     int sum, subjectSum[4]={0,};
//     int i, j;
//     for(i=0; i<4; i++)
//     {
//         sum=0;
//         printf("%d번째 학생의 성적 입력 \n", i+1);
//         for(j=0; j<4; j++)
//         {
//             printf("과목 %d: ", j+1);
//             scanf("%d", &report[i][j]);
//             sum +=report[i][j];
//             subjectSum[j]+= report[i][j];
//         }
//         report[i][4]=sum;
//     }
//     for(int i=0; i<4; i++) //과목별 성적 합계 저장
//     {
//         report[4][i]=subjectSum[i];
//     }
//     for(i=0; i<4; i++)  //전체 학생 및 과목 성적 합계
//     {
//         report[4][4]+=subjectSum[i];
//     }
// }

// void See(void) //배열에 저장된 값 전체출력
// {
//     int i,j;
//     for(i=0; i<5; i++)
//     {
//         for(j=0; j<5; j++)
//         {
//             printf("%3d ", report[i][j]);
   
//         }
//     printf("\n"); 
//     }
// }
// int main(void)
// {
//     Report();
//     See();
//     return 0;
// }
// int main(void)
// {
//     int num1;
//     int num2;
//     int * p;
//     int * q;
//     int * r;
//     int ** pp;

//     num1 = 10;
//     num2 = 20;

//     p=&num1;
//     q=&num2;
//     r=&num1;

//     pp = &p;
//     *pp = q;
//     **pp = 1024;
//     pp = &r;
//     **pp = *p * 2;

//     printf("%d %d", num1, num2);
//     return 0;
// }
// P454
// #include <stdio.h>
// #include <math.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1, pos2;
//     double distance;

//     fputs("point1 pos: ", stdout);
//     scanf("%d %d", &pos1.xpos, &pos1.ypos);

//     fputs("point2 pos: ", stdout);
//     scanf("%d %d", &pos2.xpos, &pos2.ypos);

//     distance=sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));
//     printf("두 점의 거리는 %g 입니다. \n", distance);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };


// // struct person
// // {
// //     char name[20];
// //     char phoneNum[20];
// //     int age;
// // };


// struct circle
// {
//     double radius;
//     struct point * center;
// };

// int main(void)
// {
//     // struct person man1, man2;
//     // strcpy(man1.name, "안성준");
//     // strcpy(man1.phoneNum, "010-1122-3344");
//     // man1.age=23;

//     // printf("이름 입력: "); scanf("%s", man2.name);
//     // printf("번호 입력: "); scanf("%s", man2.phoneNum);
//     // printf("나이 입력: "); scanf("%d", &(man2.age));

//     // printf("이름: %s \n", man1.name);
//     // printf("번호: %s \n", man1.phoneNum);
//     // printf("나이: %d \n", man1.age);

//     // printf("이름: %s \n", man2.name);
//     // printf("번호: %s \n", man2.phoneNum);
//     // printf("나이: %d \n", man2.age);

//     // 초기화하는 법
//     // struct point  pos={10,20};
//     // struct person man={"이승기", "010-1212-0001", 21};
//     // printf("%d %d \n", pos.xpos, pos.ypos);
//     // printf("%s %s %d \n", man.name, man.phoneNum, man.age);

//     // 배열 초기화하는 법
//     // struct person arr[3]={
//     //     {"이승기", "010-1212-0001", 21},
//     //     {"정지영", "010-1212-0002", 22},
//     //     {"한지수", "010-1212-0003", 19}
//     // };

//     // for(int i=0; i<3; i++){
//     //     printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
//     // }

//     // 구조체 변수와 포인터
//     // struct point pos1={1,2};
//     // struct point pos2={100,200};
//     // struct point * pptr=&pos1;

//     // (*pptr).xpos +=4;
//     // (*pptr).ypos +=5;
//     // printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

//     // pptr=&pos2;
//     // pptr->xpos +=1;
//     // pptr->ypos +=2;
//     // printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);

//     //포인트 변수를 구조체의 멤버로 선언하기
//     struct point cen={2,7};
//     double rad=5.5;

//     struct circle ring={rad, &cen};

//     printf("원의 반지름: %g \n", ring.radius);
//     printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
    
//     return 0;
// }

// typedef enum syllable
// {
//     Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
// } Syllable;

// void sound(Syllable sy)
// {
//     switch (sy)
//     {
//     case Do:
//         puts("도는 하얀 도라지 ."); return;
//     case Re:
//         puts("레는 둥근 레코드 . "); return;
//     case Mi:
//         puts("미는 파란 미나리 . . "); return;
//     case Fa:
//         puts("파는 예쁜 파랑새 . . "); return;
//     case So:
//         puts("솔은 작은 솔방울 . . . "); return;
//     case La:
//         puts("라는 라디오고요~ . . . . "); return;
//     case Ti:
//         puts("시는 졸졸 시냇물 . . . . "); return;
//     }
//     puts("다 함께 부르세~ 도레미파 솔라시도 솔 도~ 짠~");
// }

// int main(void)
// {
//     Syllable tone;
//     for(tone=Do; tone<=Ti; tone+=1) 
//         sound(tone);
//     printf("%d", tone=Do);
//     return 0;
// }


// Ch21_Q21-1[getchar와 putcahr의 활용]
// 프로그램 사용자로부터 알파벳 문자를 하나 입력 받아서, 입력 받은 문자가 대문자면 이를 소문자로 변환해서 출력해주고,
// 입력 받은 문자가 소문자면 이를 대문자로 변환해서 출력해주는 프로그램을 작성해보자. 
// 단, 문자의 입출력에는 getchar, putchar를 사용하기로 하자.
// 그리고 프로그램 사용자가 알파벳 이외의 문자를 입력하는 경우에는 그에 따른 오류 메시지를 간단히 출력하기로 하자.
// #include <stdio.h>
// #include <ctype.h>
// int main(){
//     int a;

//     while((a=getchar())!=EOF)
//     {
//         if(isalpha(a))
//         {
//             if(islower(a)){ //소문자이면
//                 a=toupper(a); //대문자로 변환
//                 putchar(a); //출력
//             } 
                
//             else if(isupper(a)){
//                 a=tolower(a);
//                 putchar(a);
//             }
//         }
//         else if(a!='\n')
//         {
//             puts("영문자가 아닙니다");
//         }
//     }
//     return 0;
// }

// int main(void)
// {
//     char * str ="Simple String";
//     puts(str);
//     puts("So Simplr String");

//     fputs(str, stdout); printf("\n");
//     fputs("So Simplr String", stdout); printf("\n");

//     // char atr[7]; //7바이트의 메모리 공간 할당
//     // gets(atr); //입력 받은 문자열을 배열 atr에 저장  

//     // fgets(atr, sizeof(atr), stdin); //stdin으로부터 문자열 입력받아서 atr에 저장
// }
// Q21-2
// 적당한 길이의 문자열을 입력 받아서 그 안에 존재하는 숫자의 총 합을 계산해서 출력하는 프로그램을 작성해 보자.
// 예를 들어 프로그램 사용자로부터 입력 받은 문자열이 "A15#43"이라 하면,
// 이 문자열 중 아라비아 숫자는 1, 5, 4, 3이니, 1+5+4+3의 연산결과가 출력되어야한다.
// 1.
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

// int main(void)
// {
//     char a[30];
//     char b[30];
//     int num=0, n=0;
//     int j, c;

//     printf("문자열을 입력하세요: ");
//     scanf("%s", a);
    
//     j = strlen(a);
//     for(int i=0; i<j+1; i++){
//         if(isdigit(a[i])){
//             b[n] = a[i];
//             n++;
//         }
//     }
//     c=atoi(&b);

//     printf("%d", num);
// }

// 2.
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[30];
//     int len, num=0;
//     fgets(str, sizeof(str), stdin);
//     len = strlen(str);

//     for(int i=0; i<len; i++)
//     {
//         if((str[i]>='1') && (str[i]<='9')){
//             num += str[i]-48;
//         }
//     }
//     printf("%d", num);
// }
// Q2
// 3개의 배열을 선언하고, str1과 str2를 통해서 프로그램 사용자로부터 문자열을 입력받되, fgets로 입력받는다.
// str1에 저장된 문자열을 str3에 복사하고, str2에 저장된 문자열을 str3에 저장된 문자열의 뒤에 덧붙인다.
// 그리고 str3에 저장된 문자열을 출력하자. str1과str2가 개행없이 나란히 나와야한다.
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[20];
//     char str2[20];
//     char str3[40];

//     fgets(str1, sizeof(str1), stdin);
//     fgets(str2, sizeof(str2), stdin);

//     str1[strlen(str1)-1]=0;
//     str2[strlen(str2)-1]=0;

//     strcpy(str3, str1);
//     strcat(str3, str2);

//     printf("%s", str3);
// }
// Q3
// 프로그램 사용자로부터 이름과 나이를 "김규비 27"이 형식에 맞춰 하나의 문자열로 받는다.
// 이름과 나이 사이에 공백이 삽입되어야한다. 이름과 나이가 각각 같은지 다른지 판단하려 출력하는 프로그램을 만들어라
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// void ClearBuffer(void)
// {
//     while(getchar() !='\n');
// }
// int GetIdx(char str[])
// {
//     int len, i;
//     len=strlen(str);
//     for(i=0; i<len; i++)
//     {
//         if(str[i]==' ')
//         return i;
//     }
//     return -1;
// }
// int Name(char str1[], char str2[])
// {
//     int idx1=GetIdx(str1);
//     int idx2=GetIdx(str2);

//     if(idx1 != idx2)
//         return 0;
//     else
//         return !strcmp(str1, str2);
// }
// int Age(char str1[], char str2[])
// {
//     int idx1=GetIdx(str1);
//     int idx2=GetIdx(str2);

//     int age1=atoi(&str1[idx1+1]);
//     int age2=atoi(&str2[idx2+1]);

//     if(age1 == age2)
//         return 1;
//     else
//         return 0;
// }
// int main(void)
// {
//     char str1[20];
//     char str2[20];

//     printf("첫번째 이름과 나이를 입력하세요: ");
//     fgets(str1, sizeof(str1), stdin);
//     ClearBuffer(); 
//     printf("두번째 이름과 나이를 입력하세요: ");
//     fgets(str2, sizeof(str2), stdin);
//     ClearBuffer(); 

//     if(Name(str1, str2))
//         puts("이름이 동일합니다");
//     else
//         puts("이름이 동일하지않습니다");

//     if(Age(str1, str2))
//         puts("나이가 같습니다");
//     else
//         puts("나이가 같지않습니다");

//     return 0;
// }

#include <stdio.h>

struct employee
{
    char name[20];
    char num[20];
    int pay;
} men;
int main(void)
{
    printf("이름과, 주민등록번호, 급여정보를 순서대로 입력하세요: \n");
    scanf("%s %s %d", men.name, men.num, &men.pay);

    printf("%s %s %d \n", men.name, men.num, men.pay);
    return 0;
}