/*C PROGRAM TO 
A.DEFINE A STRUCTURE NAMED BOOK HAVING FIELDS : TITLE,EDITION AND PRICE
B.READ():READS THE DETAILS OF N BOOKS
C.DISPLAY():DISPLAYS THE DETAILS OF N BOOKS
D.COMPUTE():DETERMINE AND DISPLAY THE TITLE OF THE BOOK CORRESPONDING TO HIGHEST PRICE*/

#include<stdio.h>
#define SIZE 20
struct book
{
    char title[SIZE];
    int edition;
    float price;
};

void fn_read(struct book b[],int n)
{
    int i;

    for(i = 0 ; i < n ; i++)
    {
        printf("Enter %d book details\n",i+1);
        printf("Enter book title,edition,price\n");
        scanf("%s%d%f",b[i].title,&b[i].edition,&b[i].price);
    }
}

void fn_display(struct book b[],int n)
{
    int i;

    for(i = 0 ; i < n ; i++)
    {
        printf("\n\nBook %d details are\n",i+1);
        printf("Title is %s\nEdition is %d\nPrice is %f\n",b[i].title,b[i].edition,b[i].price);
    }
}

void fn_compute(struct book b[],int n)
{
    int index,i;
    float highest;

    highest = b[0].price;

    for(i = 0 ; i < n ; i++)
    {
        if(b[i].price > highest)
        {
            highest = b[i].price;
            index = i;
        }
    }

    printf("\n\nHighest price is %f\n",highest);
    printf("Title is %s\n",b[index].title);

}
int main()
{
    struct book b[SIZE];
    int n;

    printf("Enter the number of books\n");
    scanf("%d",&n);

    printf("Enter book details\n");
    fn_read(b,n);

    fn_display(b,n);

    fn_compute(b,n);
    
    return 0;
}