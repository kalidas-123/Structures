/*C PROGRAM TO
A.DEFINE A STRUCTURE NAMED PLAYER HAVING FIELDS:NAME,SCORE1,SCORE2,SCORE3
B.READ():READS THE DETAILS OF N PLAYERS
C.DISPLAY():DISPLAYS THE DETAILS OF N PLAYERS
D.COMPUTE():COMPUTES AND DISPLAYS THE AVERAGE OF EACH PLAYER */

#include<stdio.h>
#define SIZE 20
struct player
{
    char name[SIZE];
    int score1,score2,score3;
};

void fn_read(struct player p[],int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("Enter player %d details\n",i + 1);
        printf("Enter player name and three scores\n");
        scanf("%s%d%d%d",p[i].name,&p[i].score1,&p[i].score2,&p[i].score3);

    }
}

void fn_display(struct player p[],int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("\nPlayer %d details are\n",i + 1);
        printf("Player name is %s\nScore1 = %d Score2 = %d Score3 = %d\n",p[i].name,p[i].score1,p[i].score2,p[i].score3);
    }
}

void fn_compute(struct player p[],int n)
{
    int avg[SIZE];

    for(int i = 0 ; i < n ; i++)
    {
        avg[i] = (p[i].score1 + p[i].score2 + p[i].score3) / 3;
        printf("Average of player %d is %d\n",i + 1,avg[i]);
    }
}

int main()
{
    struct  player p[SIZE];
    int i,n;

    printf("Enter the number of players\n");
    scanf("%d",&n);

    printf("Enter player details\n");
    fn_read(p,n);

    printf("\n\nPlayer details are\n");
    fn_display(p,n);

    fn_compute(p,n);
    
    return 0;
}