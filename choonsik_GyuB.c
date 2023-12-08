// 버튼모드
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>

// void Chroom(double Kg)
// {
//     char chroom[25][25]; //춘식이 방크기
//     for(int i=0; i<25; i++) //춘식이 방초기화
//     {
//         for(int j=0; j<25; j++)
//         {
//             chroom[i][j] =' ';
//         }
//     }

//     for(int i=0; i<25; i++) //춘식이 방
//     {
//         chroom[0][i] ='*';
//         chroom[i][0] ='*';
//         chroom[24][i] ='*';
//         chroom[i][24] ='*';
//     }
//     srand((unsigned int)time(NULL)); //춘식이 돌아다님
//     int x=rand()%18+3;
//     int y=rand()%18+3;
//     chroom[x][y]='c';
//     if(Kg > 11)
//     {
//         chroom[x][y+1]='c';
//     }
//     if(Kg > 13)
//     {
//         chroom[x+1][y]='c';
//         chroom[x+1][y+1]='c';
//     }
//     if(Kg > 15)
//     {
//         chroom[x+2][y]='c';
//         chroom[x+2][y+1]='c';
//         chroom[x][y+2]='c';
//         chroom[x+1][y+2]='c';
//         chroom[x+2][y+2]='c';
//     }
//     if(Kg > 20)
//     {
//         chroom[x][y+3]='c';
//         chroom[x+1][y+3]='c';
//         chroom[x+2][y+3]='c';
//         chroom[x+3][y+3]='c';
//         chroom[x+3][y]='c';
//         chroom[x+3][y+1]='c';
//         chroom[x+3][y+2]='c';
//     }
//     if(Kg >= 100)
//     {
//         chroom[x][y+4]='c';
//         chroom[x+1][y+4]='c';
//         chroom[x+2][y+4]='c';
//         chroom[x+3][y+4]='c';
//         chroom[x+4][y]='c';
//         chroom[x+4][y+1]='c';
//         chroom[x+4][y+2]='c';
//         chroom[x+4][y+3]='c';
//         chroom[x+4][y+4]='c';
//     }
//     sleep(2); //2초마다
//     system("clear"); //리셋
//     for(int i=0; i<25; i++) 
//     {
//         for(int j=0; j<25; j++)
//         {
//             if(chroom[i][j] == 'c')
//             {
//                 printf("😻 ");
//             }
//             if(chroom[i][j] == '*')
//             {
//                 printf("🟧 ");
//             }
//             if(chroom[i][j] == ' ')
//             {
//                 printf("   ");
//             }
//         }
//         printf("\n");
//     }
//     chroom[x][y]=' ';
// }

// int main(void)
// {
//     char Tun;
//     double En, Kg =10, Love=0;
//     int tun =0, H =1, S=0; //H병에 걸렸다가 살아났을때, S병에 걸렸을 때

//     srand((unsigned int)time(NULL));
//     while (H==1)
//     {
//         En=0;
//         Chroom(Kg);
//         printf("춘식이 몸무게: %.2lfkg/ 애정도: %.2lf\n", Kg, Love);
//         if(Kg >=100)
//         {
//             printf("\n😸춘식이가 100kg 넘었습니다😸\n\n축하드립니다👏👏\n\nGame Over...\n\n");
//             En++;
//             H=0;
//         }
//         else
//         {
//             printf("다음 턴으로 이동하시겠습니까?\n!!이동을 원하면 Y을 눌러주세요!!\n");
//             scanf("%c", &Tun);
//         }
//         if((Tun == 'Y' || Tun == 'y') && S ==0)
//         {
//             Kg+=0.5;
//             Love =tun*5;
//             printf("%d번째 턴, 춘식이 밥먹는 중...😸\n", tun);
//             int toilet = rand()%100;
//             if(toilet<50)
//             {
//                 Kg-=0.2;
//                 printf("춘식이가 화장실을 다녀왔습니다\n");
//             }
//             int sick = rand()%100;
//             if(sick<10)
//             {
//                 printf("\n😿춘식이가 병에 걸렸습니다😿\n");
//                 S=1;
//                 tun++;
//             }
//             else
//             {
//                 tun++;
//             }
//         }
//         if((Tun == 'Y' || Tun == 'y') && S ==1)
//         {
//             printf("%d번째 턴, 춘식이 아파😿\n춘식이 몸무게: %.2lf/ 애정도: %.2lf\n", tun, Kg, Love);
//             Kg -=0.5;
//             Love =tun*5;
//             int heal = rand()%100;
//             if(heal<Love*0.1)
//             {
//                 printf("\n😸🧡춘식이가 건강해졌습니다🧡😸\n");
//                 S =0;
//                 tun++;
//             }
//             else
//             {
//                 printf("\n😿춘식이가 건강을 회복하는 것을 실패하였습니다...😿\n");
//                 int die = rand()%100;
//                 if(die<10)
//                 {
//                     printf("\n🌈춘식이가 무지개다리를 건넜습니다🌈\n\nGame Over...\n\n\n\n\n\n");
//                     En++;
//                     H=0;
//                 }
//                 else
//                 {
//                     tun++;
//                 }
//             }
//         }
//     }
//     return 0;   
// }

// 뀨등어 키우기
// 뀨등어의 방이 있습니다,
// 뀨등어가 일정 몸무게 이상이 될 경우 방에 있는 뀨등어가 커져서 돌아다닙니다.
// 뀨등어가 일정 몸무게 이하가 될 경우 방에 있는 뀨등어가 작아져서 돌아다닙니다.
// 밥주기 또는 놀아주기 선택 시 한턴이 추가되고, 두턴 당 하루로 측정됩니다.
// 밥주기를 선택 시 몸무게가 3kg 증가, 놀아주기가 2회로 증가합니다.
// 놀아주기를 선택 시 놀아주기가 1회 감소하고, 애정도가 5증가합니다.
// 밥을 먹을 시 10% 확률로 병에 걸립니다.
// 병에 걸리면 밥을 먹을 수 없습니다.
// 애정도*0.5만큼 병에 걸린 상태를 벗어납니다.
// 뀨등어의 몸무게가 100kg이 넘을 시 몇일동안의 성장기인지 출력합니다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

void Chroom(double Kg, int T, int S, char Tun)
{
    char chroom[25][25]; //방크기
    for(int i=0; i<25; i++) //방초기화
    {
        for(int j=0; j<25; j++)
        {
            chroom[i][j] =' ';
        }
    }

    for(int i=0; i<25; i++) //뀨등어 방
    {
        chroom[0][i] ='*';
        chroom[i][0] ='*';
        chroom[24][i] ='*';
        chroom[i][24] ='*';
    }
    srand((unsigned int)time(NULL)); //뀨등어 돌아다님
    int x=rand()%15+2;
    int y=rand()%15+2;
    chroom[x][y]='c';
    if(Kg > 20)
    {
        chroom[x][y+1]='c';
    }
    if(Kg > 30)
    {
        chroom[x+1][y]='c';
        chroom[x+1][y+1]='c';
    }
    if(Kg > 40)
    {
        chroom[x+2][y]='c';
        chroom[x+2][y+1]='c';
        chroom[x][y+2]='c';
        chroom[x+1][y+2]='c';
        chroom[x+2][y+2]='c';
    }
    if(Kg > 50)
    {
        chroom[x][y+3]='c';
        chroom[x+1][y+3]='c';
        chroom[x+2][y+3]='c';
        chroom[x+3][y+3]='c';
        chroom[x+3][y]='c';
        chroom[x+3][y+1]='c';
        chroom[x+3][y+2]='c';
    }
    if(Kg > 60)
    {
        chroom[x][y+4]='c';
        chroom[x+1][y+4]='c';
        chroom[x+2][y+4]='c';
        chroom[x+3][y+4]='c';
        chroom[x+4][y]='c';
        chroom[x+4][y+1]='c';
        chroom[x+4][y+2]='c';
        chroom[x+4][y+3]='c';
        chroom[x+4][y+4]='c';
    }
    if(Kg > 70)
    {
        chroom[x][y+5]='c';
        chroom[x+1][y+5]='c';
        chroom[x+2][y+5]='c';
        chroom[x+3][y+5]='c';
        chroom[x+4][y+5]='c';
        chroom[x+5][y]='c';
        chroom[x+5][y+1]='c';
        chroom[x+5][y+2]='c';
        chroom[x+5][y+3]='c';
        chroom[x+5][y+4]='c';
        chroom[x+5][y+5]='c';
    }
    if(Kg > 80)
    {
        chroom[x][y+6]='c';
        chroom[x+1][y+6]='c';
        chroom[x+2][y+6]='c';
        chroom[x+3][y+6]='c';
        chroom[x+4][y+6]='c';
        chroom[x+5][y+6]='c';
        chroom[x+6][y]='c';
        chroom[x+6][y+1]='c';
        chroom[x+6][y+2]='c';
        chroom[x+6][y+3]='c';
        chroom[x+6][y+4]='c';
        chroom[x+6][y+5]='c';
        chroom[x+6][y+6]='c';
    }
    if(Kg > 90)
    {
        chroom[x][y+7]='c';
        chroom[x+1][y+7]='c';
        chroom[x+2][y+7]='c';
        chroom[x+3][y+7]='c';
        chroom[x+4][y+7]='c';
        chroom[x+5][y+7]='c';
        chroom[x+6][y+7]='c';
        chroom[x+7][y]='c';
        chroom[x+7][y+1]='c';
        chroom[x+7][y+2]='c';
        chroom[x+7][y+3]='c';
        chroom[x+7][y+4]='c';
        chroom[x+7][y+5]='c';
        chroom[x+7][y+6]='c';
        chroom[x+7][y+7]='c';
    }
    if(T > 0)
    {
        for(int i=1; i<=T;i++)
        {
            chroom[1][i]='p';
        }
    }
    if(Kg >=100 && T == 0)
    {
        for(int i=0; i<25; i++) //뀨등어 100Kg 방뿌수기
        {
            for(int j=0; j<25; j++)
            {
                chroom[i][j] ='c';
            }
        }
    }
    
    sleep(2); //2초마다
    system("clear"); //리셋
    for(int i=0; i<25; i++) 
    {
        for(int j=0; j<25; j++)
        {
            if(chroom[i][j] == 'c')
            {
                
                if(Tun == 'R' || Tun == 'r')
                {
                    if(S == 0){
                        printf("😻 ");
                    }
                    else if(S == 1){
                        printf("😿 ");
                    }                
                }
                else if(Tun == 'L' || Tun == 'l')
                {
                    if(S == 0){
                        printf("😽 ");
                    }
                    else if(S == 1){
                        printf("😿 ");
                    }
                }
                else if(Tun == 'C' || Tun == 'c')
                {
                    if(S == 0){
                        printf("😸 ");
                    }
                    else if(S == 1){
                        printf("😿 ");
                    }
                }
                else{
                    printf("🐱 ");
                }
            }
            if(chroom[i][j] == '*')
            {
                printf("⬛ ");
            }
            if(chroom[i][j] == ' ')
            {
                printf("   ");
            }
            if(chroom[i][j] == 'p')
            {
                printf("💩 ");
            }
        }
        printf("\n");
    }
    chroom[x][y]=' ';
}

int main(void)
{
    char Tun;
    double En, Kg =10;
    int Love=10, Play=10;
    int tun =1, H =1, S=0, T=0, C=0; //H병에 걸렸다가 살아났을때, S병에 걸렸을 때

    srand((unsigned int)time(NULL));
    while (H==1)
    {
        En=0;
        Chroom(Kg, T, S, Tun);
        printf(" _____________________________________________________\n|      🖤 규비가 키우는 고양이 뀨등어의 성장기🖤      |\n|                                                     |\n|🩶 이름: 뀨등어🩶                                      |\n|🩶 몸무게: %.2lf 🩶  애정도: %d 🩶  모래통: %d🩶          |\n|🩶 놀아주기: %d개 보유 🩶 청소하기: %d개 보유🩶          |\n|_____________________________________________________|\n", Kg, Love, T, Play, C);
        if(Kg >=100 && T ==0)
        {
            printf("\n🖤 뀨등어가 100kg 넘었습니당🖤\n\n🖤 🤍 🖤 🤍 🖤 축하드립니당🖤 🤍 🖤 🤍 🖤\n🩶 뀨등어의 %d일 동안의 성장기였습니당🩶\n\nGame Over...\n\n\n\n\n\n\n", tun/2);
            En++;
            break;
        }
        else
        {
            printf("\n🩶  뀨등어에게 해주고 싶은 것을 선택하세용🩶\nR)밥주기🐟\nL)놀아주기🎣\nC)청소하기🫧\n: ");
            scanf("%c", &Tun);
        }
        printf("\n");
        
        if((Tun == 'R' || Tun == 'r') && S ==0)
        {
            tun++;
            Kg +=3;
            Play +=3;
            printf("뀨등어 밥먹는 중...🖤\n");
            int toilet = rand()%100;
            if(toilet<50)
            {
                Kg-=0.2;
                printf("뀨등어가 화장실을 다녀왔습니당\n");
                T +=1;
            }
            int sick = rand()%100;
            if(sick<10)
            {
                printf("\n😿뀨등어가 병에 걸렸습니당😿\n");
                S=1;
            }
        }
        else if ((Tun =='L' || Tun =='l') && S ==0)
        {
            if(Play > 0)
            {
                Play--;
                Love +=5;
                C +=1;
                printf("🖤 🤍 뀨등어가 낚시놀이를 하며 즐거워합니당🖤 🤍\n🩶 애정도가 5 올랐습니당🩶\n🩶 청소하기가 1 올랐습니당🩶\n");
            }
            else
            {
                printf("놀아주기를 보유하고 있지않습니당...😿\n");
            }
            tun++;
        }

        if (Tun =='C' || Tun =='c')
        {
            if(C > 0)
            {
                T -=1;
                C -=1;
                printf("🖤 🤍 뀨등어가 쾌적해합니당🖤 🤍\n🩶 모래통이 1 비워졌습니당🩶\n");
            }
            else
            {
                printf("청소하기를 보유하고 있지않습니당...😿\n");
            }
            tun++;
        }
        
        if((Tun == 'R' || Tun == 'r') && S ==1)
        {
            printf("뀨등어 아파😿\n뀨등어가 병에 걸려 밥을 먹을 수 없습니당...\n");
            tun++;
            Kg -=0.5;
            Play +=3;
            int heal = rand()%100;
            if(heal<Love*0.5)
            {
                printf("\n🖤 🤍 뀨등어가 건강해졌습니당🖤 🤍\n");
                S =0;
            }
            else
            {
                printf("\n😿뀨등어가 건강을 회복하는 것을 실패하였습니당...😿\n");
            }
        }
        else if ((Tun =='L' || Tun =='l') && S ==1)
        {
            if(Play > 0)
            {
                Play--;
                Love +=5;
                C +=1;
                printf("🖤 🤍 뀨등어가 낚시놀이를 하며 즐거워합니당🖤 🤍\n🩶애정도가 5 올랐습니당🩶\n🩶 청소하기가 1 올랐습니당🩶\n");
            }
            else
            {
                printf("놀아주기를 보유하고 있지않습니당...\n");
            }
            tun++;
            Kg -=0.5;
            Play +=3;
            int heal = rand()%100;
            if(heal<Love*0.5)
            {
                printf("\n🖤 🤍 뀨등어가 건강해졌습니당🖤 🤍\n");
                S =0;
            }
            else
            {
                printf("\n😿뀨등어가 건강을 회복하는 것을 실패하였습니당...😿\n");
            }
        }
    }
    return 0;   
}