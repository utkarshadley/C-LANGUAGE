
//1+2+3+4...n

/*#include<stdio.h>
int main()
{
  int i=0,n;
  int sum=0;
  printf("enter the value of n");
  scanf("%d",&n);
  while(i<=n)
    {
  sum=sum+i;
  i++;
    }
  printf("sum=%d",sum);

}*/



//1+4+9...n
/*#include<stdio.h>
int main()
{
  int n,i=1,sum=0;
  printf("enter the value of n");
  scanf("%d",&n);
  while (i<=n)
    {
      sum=sum+i*i;
      i++;
    }
  printf("sum=%d",sum);
}*/

// 1+3+5...n
/*#include<stdio.h>
int main()
{
  int i=0,n;
  int sum=0;
  printf("enter the value of n");
  scanf("%d",&n);
  while(i<=n)
    {
      if(i%2!=0)
 sum=sum+i;
      i++;
      
    }
  printf("sum=%d",sum);

}*/
//program to swap two numbers not using third variable
/*#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}*/
//program to find factorial inputted number
// #include<stdio.h>
// int main()
// {
//   int n,g=1;
//   printf("enter the value of n");
//   scanf("%d",&n);

//   while(n>0){

//       g=g*n;
//       n--;
//   }
// if(n<0){
//   printf("invalid");
// }
  
//   printf("the value of g=%d",g);
    
// }

//program to find prime factor:


  /*#include<stdio.h>
int main()
{
  int i=1,n,count=0;
  printf("enter the value of n:");
  scanf("%d",&n);

while(i<=n)
  {
    if (n%i==0)
      count++;
    i++;
  }
  if(count==2)
    printf("prime number");
  else
    printf("not prime number");
  }*/



// program to find reverse inpuatted number
/*#include<stdio.h>
int main()
{
  int n,rev=0,rem;
  printf("enter the value of num");
  scanf("%d",&n);
  while(n>0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
  printf("reverse number=%d",rev);
    }*/

// program to prirnt  the sum of digit inputted num
/*#include<stdio.h>
int main()
{
  int sum=0,rem,n;
  printf("enter the value of n");
  scanf("%d",&n);
  while(n>0)
    {
      rem=n%10;
      sum=sum+rem;
      n=n/10;
    }
  printf("sum of the digit is %d",sum);
}*/
// program to print number of digit of inputted key//
/*#include<stdio.h>
int main()
{
  int n,count=0;
  printf("enter the value of n");
  scanf("%d",&n);
  while(n>0)
    {
      n=n/10;
      count++;
    }
  printf("number of digit %d",count);
}*/

// program to print 1,4,9,16,25

/*#include<stdio.h>
int main()
{
  int a=1,b=9;
  while(a<=9){
    printf("%d %d",a,b);
    a++;
    b--;
  }
}*/
/*#include<stdio.h>

int main(){
  int i,j;
  for(i=1; i<=3; i++)
    {
      for (j=1; j<=6; j++)
        printf("*");
      printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
        printf("%d",j);
      printf("\n");
    }
  
}*/

/*#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
        printf("%d",i);
      printf("\n");
    }

}*/

// paliindrome number
/*#include<stdio.h>
int main()
{
  int n=100,rev=0,rem;
  
  while(n<=1000)
    {
      if(n!=rev)
      rem=n%10;
      rev=10+rem;
      n=n/10;
    }
  
  printf("palindrome  number=%d",rev);
    }*/

//prime factors
/*#include<stdio.h>
int main()
{
  int i,j,count;
  for (i=10;i<=100;i++)
    {
      for(j=1,count=0;j<=i;j++)
        {
          if(i%j==0)
            count++;
        }
      if (count==2){
        printf("%d \n",i);
      }
    }
}*/
        
    

/*#include<stdio.h>
int main()
{
 int i=10,j,count;
  do{
    if (i%j==0){
      count++;
      printf("%d ",i);
      i++;
    if(count==2)
      printf("%d \n",i);
    }}
    while(i<=100);
  
  
  }*/

//print a to e:
// #include<stdio.h>
// int main()
// {
//   int i,j,count='A';
//   for(i='A';i<='E';i++)
//     {
//       for(j='A';j<=i;j++)
//         {
//           printf("%c",count);
//           count++;
//        }
//       printf("\n");
//     }

// }
// #include<stdio.h>
// int main()
// {
//   int i,j;
//   for(i='A';i<='E';i++)
//     {
//       for(j='A';j<=i;j++)
//         {
//           printf("%c",i);
//         }
//       printf("\n");
//     }
// }
/*#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome number", originalNum);
    } else {
        printf("%d is not a palindrome number", originalNum);
    }

    return 0;
}*/
/*#include<stdio.h>
int main()
{
  int i,j;
  for(i='A';i<='E';i++)
    {
      for(j='A';j<=i;j++)
        {
          printf("%c",j);
        }
      printf("\n");
    }
}*/
  /*#include<stdio.h>
int main()
{
  int i,j;
  for(i='Z';i>='A';i--)
    {
      for(j='A';j<=i;j++)
        {
          printf("%c",j);
        }
      printf("\n");
    }
}*/
/*#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=4;i++)
    {
      for(j=1;j<=i;j++)
        {
          printf("%d",k);
          k++;
        }
      printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=0;i<=5;i++)
    {
      for(k=0;k<=i;k++)
        {
          printf(" ");
        }
      for(j=1;j<=(5-i);j++)
        printf("*");
      printf("\n");
    }
}*/
/*#include<stdio.h>
int main(){
  int i,j,k;
  for(i=1;i<=5;i++)
    {
      for
    (k=1;k<=i;k++)
      {
      printf(" ");
      }
    for(j=1;j<=(5-i);j++)
      printf("%d",j);
    printf("\n");
    
    }
}*/

/*#include<stdio.h>
int main(){
  int i,j,k;
  for(i=1;i<=5;i++)
    {
      for
    (k=1;k<=i;k++)
      {
      printf(" ");
      }
    for(j=1;j<=(5-i);j++)
      printf("%d",i);
    printf("\n");

    }
}*/

/*#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
        {
          printf(" ");
        }
      for(k=1;k<=i;k++)
        printf("*");
      printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
  int i,j,k=1;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
        {
          if(k%2==0)
            printf("#");
          else printf("*");
        }k++;
      printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
        {
          printf("* ");
        
        }
      printf("\n");
    }
  for(i=4;i>=1;i--)
    {
      for(j=1;j<=i;j++){
        printf("* ");
      }
      printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
        {
          printf(" ");
        }
      for(k=1;k<=(6-i);k++)
        {
          printf("* ");
        }
      printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=(6-i);j++)
        {
          printf(" ");
        }
      for(k=1;k<=i;k++)
        {
          printf("* ");
        }
      printf("\n");
    }
  for(i=1;i<=5;i++)
      {
        for(j=1;j<=i;j++)
          {
            printf(" ");
          }
        for(k=1;k<=(6-i);k++)
          {
            printf("* ");
          }
        printf("\n");
      }
  }*/

/*#include<stdio.h>
int main()
{
  int i,j,k=1,l;
  for(i=1;i<=5;i++,k+=2)
    {
      for(j=1;j<=(5-i);j++)
        {
          printf(" ");
        }
      for(l=1;l<=k;l++)
        printf("*  ");
      printf("\n");
    }
}*/


/*#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=5;i--)
    {
      for(j=1;j<=i;j++)
        printf("*");
      printf("\n");
    }
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
        printf(" ");
    }
  for(k=1;k<=(5-i);k++)
    {
      printf("* ");
      printf("\n");
    }
}*/


// #include<stdio.h>
// int main()
// {
//   int i,j,k,l,m=-1;
//   for(i=1;i<=5;i++,m+=2)
//     {
//       for(j=1;j<=(6-i);j++)
//         printf("*");
//       for(k=1;k<=m;k++)
//         printf(" ");
//       if(i==1)
//         printf("\b");
//       for(l=1;l<=(6-i);l++)
//         printf("*");
//       printf("\n");
//     }
// }

/*#include<stdio.h>
int main()
{
  int i,j,k,l,m=1;
  for(i=1;i<=5;i++,m+=2)
    {
      for(j=1;j<=(6-i);j++)
        printf("%c",64+j);
      for(k=1;k<=m;k++)
        printf(" ");
      if(i==1)
        printf("\b");
      for(l=1;l<=(6-i);l++)
        printf("%c",64+l);
      printf("\n");
    }
}*/
/* print by for statement 12345   4321
  1234     4321
  123       321
  12          21 
  1             1*/


// #include<stdio.h>
// int main()
// {
//   int i,j,k,l,m=-1;
//   for(i=1;i<=5;i++,m+=2)
//     {
//       for(j=1;j<=(6-i);j++)
//         printf("%d",j);
//       for(k=1;k<=m;k++)
//         printf(" ");
//       if(i==1)
//         printf("\b");
      
//       for(l=4;l>=1;l--)
//         {
//           for(j=1;j<=(6-i);j++)
        
//         printf("%d",l);
//       printf("\n");
//         }
// }
// }
// #include<stdio.h>
// int main()
// {
//   int i,j,k,l,m=-1;
//   for(i=1;i<=5;i++,m+=2)
//     {
//       for(j=1;j<=(6-i);j++)
//         printf("*");
//       for(k=1;k<=m;k++)
//         printf(" ");
      
//       if(i==1)
//         printf("\b");
//       for(l=1;l<=(6-i);l++)
//         printf("*");
//       printf("\n");          
//     } 
  
//   for(i=2;i<=5;i++)
//     {
//       for(j=1;j<=(5-i);j++)
//         printf(" ");
//       printf("     \b");
//       for(k=1;k<=i;k++)
//         printf("*");
//       printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//   int i,j,k;
//   for(i=1;i<=5;i++)
//     {
//       for(j=1;j<=(5-i);j++)
//         printf(" ");
//       for(k=1;k<=i;k++)
//         printf("*");
//       printf("\n");
//     }


// }
//   for(i=1;i<=5;i++)
//       {
//         for(j=1;j<=(5-i);j++)
//           printf(" ");

//         for(k=1;k<=i;k++)
//           printf("*");
//         printf("\n");
//       }

//  }

/*#include<stdio.h>
int main()
{
  int i,j,k=-1,l,m;
  for(i=1;i<=5;i++,k+=2)
    {
    for(j=65;j<=(70-i);j++)
      printf("%c",j);
      for(l=1;l<=k;l++)
        printf(" ");
      if(i==1)
        printf(" ");
      for(m=(j-1);m<=65;m--)
        printf("%c",m);
      printf("\n");
    }
  k=5;
  for(i=1;i<=4;i++,k-=2)
    {
      for(j=65;j<=(65+i);j++)
        printf("%c",j);
      for(l=1;l<=k;l++)
        printf(" ");
      if(i==4)
        printf(" ");
      for(m=(j-1);m<=65;m--)
        printf("%c",m);
      printf("\n");
    }
}*/

