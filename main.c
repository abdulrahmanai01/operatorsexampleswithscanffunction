#include <stdio.h>

int main()
 {
     additionprogram(getA(),getB());
     multiplicationprogram(getA(),getB());
     divitionprogram(getA(),getB());
     moduleprogram(getA(),getB());
     incrementprogram(getA());
     decrementprogram(getA());
     logicalprogram();
     assignmentprogram();
     comparison();

     return 0;
      }

      int getA()
      {
          int a;
          printf("Enter the value  :");
          scanf("%d",&a);
          return a;
      }
      int getB()
     {

      int b;
          printf("Enter the value  :");
          scanf("%d",&b);
          return b;
     }
int additionprogram(int a,int b)

 {

    int c=a+b;
    printf("\n addition value is%d\n",c);

}
int subractionprogram(int a,int b)
 {

    int c=a-b;
    printf("\n subraction value is%d",c);

}
int multiplicationprogram(int a,int b)
 {

    int c=a*b;
    printf("\n multiplication value is%d",c);

}
int divitionprogram(int a,int b)
 {

    int c=a/b;
    printf("\n divition value is%d",c);

}
int moduleprogram(int a,int b)
 {

    int c=a%b;
    printf("\n module value is%d",c);

}
int incrementprogram(int a)
 {

    a++;
    printf("\n increment value is%d",a);

}
int decrementprogram(int a)

 {

    a--;
    printf("\n decrement value is%d\n",a);

}

int logicalprogram()
{
    int a;
    a=56;
    if(a<100 && 50>a)
    {
     printf("The Logical AND Value\n");

    }

    else if((a==101) || (a==102))
    {
    printf("The Logical OR Value\n");
    }
    else if(!(a<100 && 50>a))
    {
    printf("The Logical NOT Value\n");
    }
    else
    {
    printf("Not This Value\n");
    }

    return 0;
}
int assignmentprogram()
{
    int a,b,c,d,e,f,g;
    a=10;
    d=1;
    e=2;
    f=3;
    g=4;
    c=a;
    d+=a;
    e-=a;
    f*=a;
    g/=a;
    printf("\nAssignment\n\tThe Value is C=%d\n\tThe Value is D+=%d\n\tThe Value is E-=%d\n\tThe Value is F*=%d\n\tThe Value is G/=%d\n",c,d,e,f,g);
    return 0;
}
#include<stdio.h>
int comparisonprogram(int a, int b)
{
   printf("\n Comparison values\n")
   printf("\t Equl to value :%d\n",a==b);
   printf("\t Not equl to value  :%d\n",a!=b);
   printf("\t Greater then :%d\n"a<b);
   printf("\t less then :%d\n"a>b);



