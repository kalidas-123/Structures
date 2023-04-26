/*C PROGRAM TO 
A.DEFINE A STRUCTURE STUDENT HAVING FIELDS : ROLLNO,NAME,IA1,IA2,IA3,CTA
B.READ():READ THE DETAILS OF THE STUDENT
C.DISPLAY():DISPLAY THE DETAILS OF THE STUDENT
D.COMPUTE():COMPUTES AND DISPLAYS THE CIE MARKS OF THE STUDENT
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

struct student
{
    int rno,ia1,ia2,ia3,cta;
    char name[SIZE];
};

void fn_read(struct student *s)
{
    printf("Enter roll no. and name\n");
    scanf("%d%s",&s->rno,s->name);

    printf("Enter ia1,ia2,ia3 and cta marks\n");
    scanf("%d%d%d%d",&s->ia1,&s->ia2,&s->ia3,&s->cta);
    
}

void fn_display(struct student s)
{
    printf("Roll no is %d\nName is %s\n",s.rno,s.name);
    printf("IA1 = %d , IA2 = %d , IA3 = %d , CTA = %d\n",s.ia1,s.ia2,s.ia3,s.cta);
}

int fn_compute(struct student s)
{
    int small,cie;

    small = s.ia1;
    if(s.ia2 < small)
        small = s.ia2;
    else
    {
        small = s.ia3;
    }

    cie = s.ia1 + s.ia2 + s.ia3 - small +s.cta;

    return cie;

}

int main()
{
    int n,cie;
    struct  student s;
    
    printf("Enter the student details\n");
    fn_read(&s);

    printf("\n\nStudent details are\n");
    fn_display(s);

    cie = fn_compute(s);
    printf("CIE marks of student is %d\n",cie);

    return 0;
}