/*C PROGRAM TO 
A.DEFINE A STRUCTURE NAMED COMPLEX HAVING FIELDS:REAL,IMG.
B.READ():READS A COMPLEX NUMBER.
C.DISPLAY():DISPLAYS A COMPLEX NUMBER
D.ADD():FINDS THE SUM OF TWO COMPLEX NUMBERS
E.DIFF():FINDS THE DIFFERENCE OF TWO COMPLEX NUMBERS. */

#include<stdio.h>
#define SIZE 20
struct complex 
{
    float real,img;
};

void fn_read(struct complex *c)
{
    scanf("%f%f",&c->real,&c->img);
}

void fn_display(struct complex c)
{
    printf("%6.2f + i%6.2f\n",c.real,c.img);
}

void fn_sum(struct complex c1,struct complex c2,struct complex *c3)
{
    c3->real = c1.real + c2.real;
    c3->img = c1.img + c2.img;
    printf("%6.2f + i%6.2f\n",c3->real,c3->img);
}

void fn_diff(struct complex c1,struct complex c2,struct complex *c4)
{
    if(c1.real > c2.real)
        c4->real = c1.real - c2.real;
    else
    {
        c4->real = c2.real - c1.real;
    }

    if(c1.img > c2.img)
        c4->img = c1.img - c2.img;
    else
    {
        c4->img = c2.img -c1.img;
    }

    printf("%6.2f + i%6.2f\n",c4->real,c4->img);
    
}
int main()
{
    struct complex c1,c2,c3,c4;

    printf("Enter real and imaginary part of first complex number\n");
    fn_read(&c1);
    printf("Enter real and imaginary part of second complex number\n");
    fn_read(&c2);

    printf("\nFirst complex number is\n");
    fn_display(c1);
    printf("Second complex number is\n");
    fn_display(c2);

    printf("\nSum of two complex numbers is\n");
    fn_sum(c1,c2,&c3);

    printf("Difference of two complex numbers is\n");
    fn_diff(c1,c2,&c4);

    return 0;
}