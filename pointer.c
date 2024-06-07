/*#include<malloc.h>
#include<stdio.h>
int main()
{
  int *a,*b,*c;
  a=(int*)malloc(5);
  b=(int*)malloc
(5);
c=(int*)malloc(5);
printf("enter the values :");
  scanf("%d %d",a,b);
  *c=*a+*b;
  printf("%d",*c);

}*/
/*//VOLUME OF CYLINDER//
#include <stdio.h>
#include <stdlib.h>
int main() {
  int *r, *h, *vol;
  float pie = 3.14;
  r = (int*)malloc(10);
  h = (int*)malloc(10);
  vol = (int*)malloc(10);
  printf("enter the values : ");
  scanf("%d %d", r, h);
  *vol = pie * (*r) * (*r) * (*h);
  printf("%d", *yevol);
}*/

//Find sum//

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a,*b,*c;
  a=(int*)malloc(10);
  b=(int*)malloc(10);
  c=(int*)malloc(10);
  printf("enter the values :");
  scanf("%d %d",a,b);
  *c=*a+*b;
printf("sum is %d",*c);
}*/

//Find subtraction //

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a,*b,*c;
  a=(int*)malloc(10);
  b=(int*)malloc(10);
  c=(int*)malloc(10);
  printf("enter the values :");
  scanf("%d %d",a,b);
  *c=*a-*b;
printf("sub is %d",*c);
}*/
//Find multipication//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a,*b,*c;
    a=(int*)malloc(10);
    b=(int*)malloc(10);
    c=(int*)malloc(10);
    printf("enter the values :");
    scanf("%d %d",a,b);
    *c=*a**b;
  printf("mul is %d",*c);
}*/
//Find division//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  float *a,*b,*c;
  a=(int*)malloc(!0);
  b=(int*)malloc(10);
  c=(int*)malloc(10);
  printf("enter the values :");
  scanf("%f %f",a,b);
  *c=*a / *b;
  printf("div is %f",*c);
}*/
//Find remainder//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a,*b,*c;
  a=(int*)malloc(10);
  b=(int*)malloc(10);
  c=(int*)malloc(10);
  printf("enter the values :");
  scanf("%d %d",a,b);
  *c=*a%*b;
  printf("rem is %d",*c);
}*/
//Area of square//

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a,*sqr;
  a=(int*)malloc(10);
  sqr=(int*)malloc(10);
  printf("enter the values :");
scanf("%d",a);
  *sqr=*a **a;
  printf("area of sqr is %d",*sqr);
}*/
//Area of rectangle//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *l,*b,*area;
  l=(int*)malloc(10);
  b=(int*)malloc(10);
  area=(int*)malloc(10);
  printf("Enter length and breath :");
  scanf("%d %d",l,b);
  *area=*l**b;
  printf("area of rectangle is %d",*area);
}*/

//Area of circle//

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
float *r,*area;
  float pie=3.14;
  r=(float*)malloc(10);
  area=(float*)malloc(10);
  printf("enter the radius :");
  scanf("%f",r);
  *area=pie*(*r)**r;
  printf("area of circle is %f",*area);
}*/
//Find the simple interest //

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,*r,*t,*si;
  p=(int*)malloc(10);
  r=(int*)malloc(10);
  t=(int*)malloc(10);
  si=(int*)malloc(10);
  printf("enter the values :");
  scanf("%d %d %d",p,r,t);
  *si=*p**r**t/100;
  printf("S.I is :%d",*si);
}*/


//volume of sphere//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  float *r,*vol;
  float pie=3.14;
  r=(float*)malloc(10);
  vol=(float*)malloc(10);
  printf("enter the radius :");
  scanf("%f",r);
  *vol=(4.0/3.0)*pie*(*r)*(*r)*(*r);
  printf("vol of spphere is %f :",*vol);
}*/

//surface area of cone//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *r,*l,*area;
  float pie=3.14;
  r=(int*)malloc(10);
  l=(int*)malloc(10);
  area=(int*)malloc(10);
  printf("enter the values :");
  scanf("%d %d",r,l);
*area=pie*(*r)*(*l);
  printf("csa is %d",*area);
}*/
//volume of hemisphere//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *r,*vol;
  float pie=3.14;
  r=(int*)malloc(10);
  vol=(int*)malloc(10);
  printf("enter the radius :");
  scanf("%d",r);
  *vol=(2.0/3.0)*pie*(*r)*(*r)*(*r);
  printf("vol of hemisphere is %d",*vol);
}*/
//volume of cone//

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *r,*h,*vol;
  float pie=3.14;
  r=(int*)malloc(10);
  h=(int*)malloc(10);
  vol=(int*)malloc(10);
  printf("enter the radius :");
  scanf("%d %d",r,h);
  *vol=(4.0/3.0)*pie*(*r)*(*r)*(*h);
  printf("vol of cone is: %d ",*vol);
}*/
//volume of cube//

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a,*vol;
  a=(int*)malloc(10);
  vol=(int*)malloc(10);
  printf("enter the radius :");
  scanf("%d",a);
  *vol=*a**a**a;
  printf("vol of cube is %d",*vol);
}*/

//volume of cuboid//

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *l,*b,*h,*vol;
  l=(int*)malloc(10);
  b=(int*)malloc(10);
  h=(int*)malloc(10);
  vol=(int*)malloc(10);
  printf("Enter the values  :");
  scanf("%d %d %d",l,b,h);
  *vol=*l**b**h;
  printf("area of rectangle is %d",*vol);
}*/

//perimeter of circle//

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *r,*l,*per;
  float pie=3.14;
  r=(int*)malloc(10);
  l=(int*)malloc(10);
  per=(int*)malloc(10);
  printf("enter the values :");
  scanf("%d %d",r,l);
*per=2*pie*(*r)*(*l);
  printf("per of circle is: %d",*per);
}*/

//perimeter of rectangle//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *l,*b,*per;
  l=(int*)malloc(10);
  b=(int*)malloc(10);
  per=(int*)malloc(10);
  printf("enter the value :");
  scanf("%d %d",l,b);
  *per=2*(*l+*b);
  printf("perimeter of rectangle is %d :"*per);
}*/

//perinmeter of square//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *side,*sqr;
  side=(int*)malloc(10);
  sqr=(int*)malloc(10);
  printf("enter the side :");
  scanf("%d",side);
*sqr=4*(*side);
  printf("perimeter of sqr=%d",*sqr);
}*/
//convert celcius to farenheit//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *c,*f;
  c=(int*)malloc(10);
  f=(int*)malloc(10);
  printf("enter the degree :");
  scanf("%d",f);
  *c=(*f-32)*5/9;
  printf("celcius to farenheit is %d",*c);
}*/

//convert celcius to kelvin//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *c,*k;
  c=(int*)malloc(10);
  k=(int*)malloc(10);
  printf("enter the degree :");
  scanf("%d",c);
  *k=*c+273.15;
  printf("celcius to kelvin is %d",*k);
}*/












//strtok//
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  char student[200]="amit tandan , vivek kuamr , sahil anand ,sohail kumar";
//    char delimeter[2]=",";
//   char *token;
// token=strtok(student,delimeter);
//   while(token!=NULL)
//   {
//     printf("%s",token);
//     token=strtok(NULL,delimeter);
//   }
// }
// pointer to 2-d array//
/*#include<stdio.h>
#include<string.h>
int main()
{
  int i,j;
int x[5][3]={{5,7,8},{2,1,0},{8,2,1},{5,8,9},{9,5,0}};
int **p;
  p=&x;
  for(i=0;i<5;i++)
    for(j=0;j<3;j++)
      printf("%d",*(*(p+i)+j));
}*/

// struct student
// {
// int roll;
// char name[10];

// };
// int main(){
//   struct student st={1,"amit"};
//   struct student *ptr;
//   ptr=&st;
//   printf("%d %s",ptr->roll,ptr->name);
// }

/*struct student 
{
int roll;
char name[10];
};
int main()
{
  struct student st;
  printf("enter the roll no :");
  scanf("%d",&st.roll);
  printf("enter the name :");
  scanf("%s",st.name);
  printf("\n-------------------\n");
  printf("roll \tname\n");
  printf(".......................\n");
  printf("%d\t%s",st.roll,st.name);
}*/

// struct student {
// int roll;
// char name[10]; };
// int main()
// {
//  int i;
//   struct student n[5]={{1,"sita"},{2,"gita"},{3,"rita"},{4,"shyam"},{5,"ram"}};
//   printf("\n-------------------\n");
//   printf("roll\tname\n");
//   printf("--------------------\n");
//    for(i=0;i<5;i++)
//   printf("%d\t\t%s\n",n[i].roll,n[i].name);
// }

//HOMEWORK//
// struct student {
// int roll;
// char name[10]; };
// int main()
// {
//  int i;
//   struct student n;
//   printf("enter the roll no :");
//   scanf("%d",&n.roll);
//   printf("enter the student name :");
//   scanf("%s",n.name);
//   printf("enter the roll no :");
//   scanf("%d",&n.roll);
//   printf("enter the student name :");
//   scanf("%s",n.name);
//   printf("enter the roll no :");
//   scanf("%d",&n.roll);
//   printf("enter the student name :");
//   scanf("%s",n.name);
//   printf("\n-------------------\n");
//   printf("roll\tname\n");
//   printf("--------------------\n");
//    for(i=0;i<5;i++)
//      printf("%d\t\t\t%s\n",n[i].roll,n[i].name);
// }

// struct student 
// {
// int roll;
// char name[10];
// };
// #include<stdio.h>
// int main()
// {
//   int i;
//   struct student st;
//   for(i=0;i<5;i++){
//   printf("enter the roll no :");
//   scanf("%d",&st.roll);
//   printf("enter the name :");
//   scanf("%s",st.name);
//   printf("enter the roll no :");
//   scanf("%d",&st.roll);
//   printf("enter the name :");
//   scanf("%s",st.name);
//   printf("enter the roll no :");
//   scanf("%d",&st.roll);
//   printf("enter the name :");
//   scanf("%s",st.name);
//   printf("enter the roll no :");
//   scanf("%d",&st.roll);
//   printf("enter the name :");
//   scanf("%s",st.name);
//   printf("enter the roll no :");
//   scanf("%d",&st.roll);
//   printf("enter the name :");
//   scanf("%s",st.name);
//   printf("\n-------------------\n");
//   printf("roll \tname\n");
//   printf(".......................\n");
//   }
//   for(i=0;i<5;i++)
//   printf("%d\t%s",st[i].roll,st[i].name);
// }
  /*struct student 
  {
    int roll;
    char name[10];
  };
  #include<stdio.h>
  int main()
  {
    int i;
    struct student st[5];
    for(i=0; i<5; i++){
      printf("enter the roll no :");
      scanf("%d", &st[i].roll);
      printf("enter the name :");
      scanf("%s", st[i].name);
    }
    printf("\n-------------------\n");
    printf("roll \tname\n");
    printf(".......................\n");

    for(i=0; i<5; i++)
      printf("%d\t\t\t%s\n", st[i].roll, st[i].name);
    
  }*/

/*struct product
{
int price;
int product[20];
};
#include<stdio.h>
int main()
{
  int i;
  struct product pr[5];
  for(i=0;i<5;i++){
  printf("enter the product name :");
  scanf("%s",pr[i].product);
  printf("enter the price :");
  scanf("%d",&pr[i].price);
}
printf("\n-------------------\n");
printf("product name \tprice\n");
printf(".......................\n");
  for(i=0;i<5;i++)
    printf("%s\t\t\t%d\n",pr[i].product,pr[i].price);
}*/
//DYNAMIC STRUCTURE//
/*typedef struct student 
{
int roll;
char name[10];
}stu;
#include <stdio.h>
#include<stdlib.h>
int main()
{
  stu*p;
  p=(stu*)malloc(sizeof(10));
  printf("enter the roll :");
  scanf("%d",&p->roll);
  printf("enetr the name :");
  scanf("%s",p->name);
  printf("your roll is %d",p->roll);
  printf(" and your name is %s",p->name);
}*/

/*typedef struct school
{
int fees;
char name[10];
}sch;
void main()
{
  sch*p;
  p=(sch*)malloc(sizeof(10));
  printf("enter your name :");
  scanf("%s",p->name);
  printf("enter your fees amount :");
  scanf("%d",&p->fees);
  printf("your fees is %d",p->fees);
  printf("and you name is %s",p->name);
}*/
//  Pointer to structure//
// struct student
// {
// int roll;
// char name[10];
// };
// #include<stdio.h>
// int main()
// {
//   struct student st={1,"amit"};
//   struct student *p;
//   p=&st;
//   printf( your roll %d",p->roll);
//   printf("your name is %s",p->name);
// }

// practice//
/*typedef struct cylinder
{
int radius;
int height;
int vol;
}cyl;
void main()
{
 float pie=3.14;
  cyl*p;
  p=(cyl*)malloc(sizeof(10));
  printf("enter radius");
  scanf("%d",&p->radius);
  printf("enter height");
  scanf("%d",&p->height);
  p->vol=pie*p->radius*p->radius*p->height;
  printf("vol of cylinder is %d",p->vol);
}*/
// use of.*//

/*struct student {
int *roll;
};
void main()
{
  struct student st;
  st.roll=(int*)malloc(sizeof(10));
  printf("enter the roll :");
  scanf("%d",st.roll);
  printf("%d",*st.roll);
}*/
//use of ->//
/*struct student 
{
int *date;
};
void main()
{
  struct student *st;
  st=(struct student*)malloc(sizeof(struct student));
  st->date=(int*)malloc(sizeof(10));
  printf("enter your date");
  scanf("%d",st->date);
  printf("%d",*st->date);
  free(st->date);
}*/

//initiallisation of nested structure//
/*struct college{

int collegecode;
struct student
{
int roll;
char name[10];
}st;
};
int main()
{
 struct college c={210,{1,"amit"}};
 printf("%s",c.st.name);
  printf("%d",c.st.roll);
}*/

// inputation in nested structure//
/*struct college{

int collegecode;
struct student
{
int roll;
char name[10];
}st;
};
int main()
{
  struct college c;
  printf("enter the college code :");
  scanf("%d",&c.collegecode);
  printf("enter the roll and name :");
  scanf("%d %s",&c.st.roll,c.st.name);
  printf("your college code is %d",c.collegecode);
  printf("your roll %d \tand name is %s",c.st.roll,c.st.name);
}*/
//Homework//
/*program to input record of n student for 5 different colleges*/
/*struct college{
int collegecode;
struct student
{
int roll;
int n;
char name[10];
}st;
};
int main()
{
  int i;
  int n;
  struct college c[5];
  for(i=0;i<2;i++){
   printf("enter the college code :");
    scanf("%d",&c[i].collegecode);
    printf("enter the roll  :");
    scanf("%d",&c[i].st.roll);
    printf("enter the name :");
    scanf("%s",c[i].st.name);
  }
printf("List of students");
  printf("\n-------------------\n");
  printf("college code\t Roll \t Name");
  printf("\n__________________\n");
  for(i=0;i<2;i++)
    
  printf("%d\t\t\t\t\t%d\t\t\t%s\n",c[i].collegecode,c[i].st.roll,c[i].st.name);

}*/
/*#include<stdio.h>
#include<string.h>
union{
int roll;
char name [25];
float salary;
}desc;
void main()
{
  strcpy(desc.name,"vinod");
  printf("\nEmployee details\n\n");
  printf(" name is %s",desc.name);
  printf("\n roll is %d",desc.roll);
  desc.roll=10;
   printf("\nEmployee details\n\n");
  printf(" name is %s",desc.name);
  printf("\n roll is %d",desc.roll);
  desc.salary=6500.00;
  printf("\nEmployee details\n\n");
  printf(" name is %s",desc.name);
  printf("\n roll is %d",desc.roll);
  
}*/
/*#include<stdio.h>
enum permission{
read=4,
execute =2,
write=1,
};
int main()
{
  int permission=read | execute ;
  printf("%d",permission);
}*/
/*#include<stdio.h>
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
  enum week today;
  today=friday;
  printf("day %d",today+1);
}*/

/*struct college{
    int code;
    struct student{
        int roll;
        char name[20];
    }st[50];
};
#include "stdio.h"
void main()
{
    int i,j,n;
    struct college c[5];

    for(i=0;i<2;i++)
    {
        printf("enter the college code=");
        scanf("%d",&c[i].code);
        printf("enter the no of student=");
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {   printf("enter the roll & name");
            scanf("%d %s",&c[i].st[j].roll,&c[i].st[j].name);
        }
    }
    for(i=0;i<2;i++)
    {
        printf("college code=%d\n",c[i].code);
        for(j=0;j<n;j++)
        {
            printf("Roll=%d\n",c[i].st[j].roll);
            printf("Name=%s\n",c[i].st[j].name);
        }
    }
}*/

/*struct college{
int collegecode;
struct student
{
int roll;
int n;
char name[10];
}st;
};
int main()
{
  int i;
  int n;
  struct college c[5];
  for(i=0;i<2;i++){
   printf("enter the college code :");
    scanf("%d",&c[i].collegecode);
    printf("enter the roll  :");
    scanf("%d",&c[i].st.roll);
    printf("enter the name :");
    scanf("%s",c[i].st.name);
  }
printf("List of students");
  printf("\n-------------------\n");
  printf("college code\t Roll \t Name");
  printf("\n__________________\n");
  for(i=0;i<2;i++)

  printf("%d\t\t\t\t\t%d\t\t\t%s\n",c[i].collegecode,c[i].st.roll,c[i].st.name);

}*/
//FUNCTION// 

// int triangle();
// #include <stdio.h>
// int main(){
//   triangle();
//   triangle();
// }
// int triangle(){
//   int i,j;
//   for(i=0;i<4;i++)
//     {
//     for(j=0;j<=i;j++) 
//       printf("*");
//     printf("\n");
//     }}
/*int nepal();
int main(){
  nepal();
  nepal();
  nepal();
}
int nepal()
{
  int i,j,k=1,l;
  for(i=1;i<=5;i++,k+=2)
    {
      for(j=1;j<=(5-i);j++)
        printf(" ");
      for(l=1;l<=k;l++)
        printf("*");
      printf("\n");
    }
}*/
/*#include<stdio.h>
int mul(){
  int a,b;
  printf("enter the value of a and b");
  scanf("%d%d",&a,&b);
  return a*b;
}
int main()
{
  int y;
  y=mul();
  printf("%d",y);
}*/
// void box(int,int,int,int);
// #include <stdio.h>
// int main()
// {
//   box(2,2,78,22);
// }
// void box(int x,int y, int x1,int y1){
//   int i;
//   for(i=0;i<x1;i++){
//     goto xy(i,y);
//     printf("%c",196);
//     goto xy(i,y1);
//     printf("%c",196);
//   }
//   for(i=y;i<y1;i++){
//       goto xy(x,i);
//       printf("%c",179);
//       goto xy(x1,i);
//       printf("%c",179);
//       goto xy(x,y);
//       printf("%c",218);
//       goto xy(x1,y);
//       printf("%c",191);
//       goto xy(x,y1);
//       printf("%c",192);
//       goto xy(x1,y1);
//       printf("%c",217);
//     }
// }
    
// void box(int x, int y, int x1, int y1) {
//     int i;
//     for (i = 0; i < x1; i++) {
//         goto xy(i, y);
//         printf("%c", 196);
//         goto xy(i, y1);
//         printf("%c", 196);
//     }
//     for (i = y; i < y1; i++) {
//         goto xy(x, i);
//         printf("%c", 179);
//         goto xy(x1, i);
//         printf("%c", 179);
//         goto xy(x, y);
//         printf("%c", 218);
//         goto xy(x1, y);
//         printf("%c", 191);
//         goto xy(x, y1);
//         printf("%c", 192);
//         goto xy(x1, y1);
//         printf("%c", 217);
//     }
// }
/*#include <stdio.h>

void printCharacter(int x, int y, char character) {
    printf("\033[%d;%dH", y, x);
    printf("%c", character);
}

void box(int x, int y, int x1, int y1) {
    int i;
    for(i = 0; i < x1; i++) {
        printCharacter(i, y, 42);
        printCharacter(i, y1, 42);
    }
    for(i = y; i < y1; i++) {
        printCharacter(x, i,42);
        printCharacter(x1, i, 42);
        printCharacter(x, y, 42);
        printCharacter(x1, y, 42);
        printCharacter(x, y1, 42);
        printCharacter(x1, y1, 42);
    }
}

int main() {
    box(1, 1, 78, 22);
   
}*/


//RECURSION//
// int factorial (int y)
// {
//   if (y==0)
//     return 1;
//   else
//     return y *factorial (y-1) ;
// }
// #include<stdio.h>
// int main()
// {
//   int r=factorial(6);
//   printf("%d",r);
// }

// int divide (int n)
// {
//   if(n%2==0)
//     return 1;
//   else
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//  int r=divide(9);
//   printf("%d",r);
// }

/*#include<stdio.h>
int main()
{
   char  n;
  for(n=1;n<=10;n++)
    printf("sorry\n");

 }*/
