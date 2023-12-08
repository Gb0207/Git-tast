// Q1 길이가 4x4인 int형 2차원 배열을 선언하고, 모든 요소를 아래 그림의 왼쪽에 있는 형태와 동일하게 초기화하자. 
// 그리고 배열의 요소들을 오른쪽 방향으로 90도씩 이동시켜서 그 결과를 출력하는 프로그램을 작성하라
// #include <stdio.h>
// int main(void)
// {
//     int arr[4][4]={  //돌아가면서 다시 초기화
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16}
//     };
//     int arrc[4][4]={}; //빈 공간에 arr의 0행0열 >>arrc의 0행3열로 보내기

//     for(int i=0; i<4; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             arrc[i][3-j]=arr[j][i];
//         }
//     }
//     for(int i=0; i<4; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             printf("%d ", arrc[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Q2 달팽이 배열을 만들어서 이를 출력하는 프로그램을 작성하고자 한다. 사용자로부터 하나의 숫자를 n을 입력 받아서 nxn의 길이에 해당하는 달팽이 배열을 출력해보자
//     #include <stdio.h>
//     int main(void)
//     {
//         int n; //사용자에게 입력받을 번호 
//         int arr[100][100]; //입력받은 번호로 nxn배열을 구현하려함
//         printf("숫자를 입력하세요: "); 
//         scanf("%d",&n);
    
//         int sum= n*n;
//         int count=1;
//         int x=0,y=0;
//         while (count <= sum)
//         {
//             for(y; y<n; y++) //오른쪽으로
//             {
//                 if(arr[x][y] == 0)
//                 {
//                     arr[x][y]= count;
//                     count++;
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//             x++;
//             y--;
//             for(x; x<n; x++) //아래로
//             {
//                 if(arr[x][y] == 0)
//                 {
//                     arr[x][y]= count;
//                     count++; 
//                 }
//                 else{
//                     break;
//                 }
//             }
//             y--;
//             x--;
//             for(y; y>=0; y--) //왼쪽으로
//             {
//                 if(arr[x][y] == 0)
//                 {
//                     arr[x][y]= count;
//                     count++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//             x--;
//             y++;
//             for(x; x>=0; x--) //위로
//             {
//                 if(arr[x][y] == 0)
//                 {
//                     arr[x][y]= count;
//                     count++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//             x++;
//             y++;
//         }
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 printf("%5d", arr[i][j]);
//             }
//             printf("\n");
//         }
//         return 0;
// }
// Q3 0이상 99이하의 난수를 총 5개 생성하는 프로그램을 만들어보자.
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i;
//     printf("난수의 범위: 0부터 99까지 \n");
//     for(i=0; i<5; i++)
//         printf("난수 출력: %d \n", rand()%101,0);
//     return 0;
// }
// Q4 두 개의 주사위를 던졌을 때 결과를 출력하는 프로그램을 작성해보자. 
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     int i;
//     srand((int)time(NULL));
//     for(i=0; i<2; i++)
//         printf("주사위 %d의 결과: %d\n",i+1, rand()%6,1);
// }
// Q5 가위 바위 보 게임을 만들어보자. 사용자로부터 가위 바위 보 중에서 하나를 입력 받는다. 그리고 컴퓨터는 난수 생성을 통해서 가위 바위 보 중에서 하나를 선택하게 한다.
// 이 둘을 비교해서 승패를 가려주는 프로그램을 작성해 보자. 프로그램의 진행은 사용자가 질 때까지 계속되어야 하며, 마지막에서는 몇승몇무였는지 출력해주자.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     char choice[3][10]={"바위","가위","보"};
//     int b;
//     int win=0, lose=0, same=0;

//     srand((int)time(NULL));
//     while(lose !=1)
//     {
//         printf("바위는 1, 가위는 2, 보는 3\n선택해주세요: ");
//         scanf("%d", &b);
//         printf("당신은 %s를 선택,", choice[b-1]);

//         int n=rand()%3+1;
//         printf("컴퓨터는 %s를 선택,", choice[n-1]);

//         if(b > n)
//         {
//             printf("이겼습니다!");
//             win++;
//         }
//         if(b < n)
//         {
//             printf("졌습니다!");
//             lose++;
//         }
//         if(b == n)
//         {
//             printf("비겼습니다!");
//             same++;
//         }
//         printf("\n");
//     }
//     printf("게임 결과: %d승, %d패, %d무\n",win, lose, same);
// }
// Q6 야구게임을 만들어보자 몇번째 도전인지 출력을 해주어야하며, 9번째 도전 이후에는 게임오버를 출력해주어야한다. 또한 성공시에도 게임오버를 출력해주자.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     int st, count=0, str=0, ball=0;
//     int ch[3]={0,0,0};
//     int com[3]={0,0,0};
//     srand((int)time(NULL));
//     for(int i=0; i<3; i++)
//     {
//         com[i]=rand()%10+0;
//     }
//     // printf("%d %d %d",com[0], com[1], com[2]);
//     while (count < 9 || str != 3)
//     {
//         printf("3개의 숫자 선택: ");
//         scanf("%1d %1d %1d", &ch[0], &ch[1], &ch[2]);
//         str=0;
//         ball=0;
//         for(int i=0; i<3; i++)
//         {
//             for(int j=0; j<3; j++)
//             {
//                 if((ch[i]==com[j]) && (i==j))
//                 {
//                     str++;
//                 }
//                 else if(ch[i]==com[j])
//                 {
//                     ball++;
//                 }
//             }
//         }
//         count++;
//         printf("%d번째 도전 결과: %dstrike, %dball!!\n", count, str, ball);
//         if(str == 3)
//         {
//             printf("%d번째 3strike,0ball!!\n\nGame Over!", count);
//             st=3;
//             break;
//         }
//     }
//     return 0;
// }