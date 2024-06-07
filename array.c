 /*#include<stdio.h>
 #define size 5
 int main()
 {
   int i;
   int study[size];
  for(i=0;i<size;i++)
     {
       printf("enter the marks of subject %d=",i+1);
       scanf("%d",&study[i]);
     }
   printf("\nyour data is entered");
   for(i=0;i<size;i++)
     {
       printf("\n marks of index value [%d] is %d",i,study[i]);
     }
 }*/

// #include <stdio.h>
// # define size 5
// int main()
// {
//   int i;
//   int study[size];
//   int max=0;
//   for(i=0;i<size;i++)
//     {
//       printf("enter the marks of subject %d=",i+1);
//       scanf("%d",&study[i]);
//     }
//   for(i=0;i<size;i++)
//     if(study[i]>max)
//       max=study[i];
//     printf("\nthe maximum marks is %d👍",max);
//   } 


// program to print ten numbers and count how may even numbe rhas been inputted.
// #include<stdio.h>
// int main()
// {
//   int x[10],i,count=0;
//    for(i=0;i<10;i++)
//     {
//      printf("Enter the number %d=",i+1);
//       scanf("%d",&x[i]);     } 
  
//   for(i=0;i<10;i++)
//     {
//       if(x[i]%2==0)
//         count++;
//       }
      

// printf("\nThe count of even numbers is %d🚩",count);

// }
// program to print n numbers and find the maximum no.s among them
/*#include<stdio.h>
int main()
{
  int i;
  int z[5];
  int max=0;
  for(i=0;i<7;i++)
    {
      printf("Enter the number %d=",i+1);
      scanf("%d",&z[i]);
    }
  for(i=0;i<7;i++)
    
    if(z[i]>max)
      max=z[i];
  {
    printf("\n The maximum marks of inputted no.s is %d🚩",max);
  }
}*/
//program to print n numbers and find the minimum no.s among them
/*#include<stdio.h>
int main()
{
  int i;
  int z[100],num;
  int min=z[0];
  printf("enter the size of array");
  scanf("%d",&num);
   printf("enter the numbers =");
  for(i=0;i<num;i++)
    {
  scanf("%d",&z[i]);
    }
  for(i=0;i<num;i++)
    {
      if(z[i]<min)
        min=z[i];
      
    }
  printf("\n The minimum value is %d",min);
}*/
// program to print ten numbers and count how may odd numbe rhas been inputted.
/*#include<stdio.h>
int main()
{
  int x[10],i,count=0;
  for(i=0;i<10;i++)
    {
      printf("Enter the number %d=",i+1);
      scanf("%d",&x[i]);
    }
  for(i=0;i<10;i++)
    {
      if(x[i]%2!=0)
        count++;
      
    }
  printf("\nThe count of odd numbers is %d🚩",count);
}*/
//asscending order with selection sort
// #include<stdio.h>
// int main()
// {
//   int i,j,temp;
//   int arr [10]={5,6,9,3,2,1,7,8,15,12};
//   for(i=0;i<10;i++)
//     {
//       for(j=(i+1);j<10;j++)
        
//           if(arr[i]>arr[j])
//           {
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//           }
//         }
//       printf("after string\n");
//       for(i=0;i<10;i++)
//         printf("%d \t",arr[i]);
    
// }
//Descending order with selection sort
/*#include<stdio.h>
int main()
{
  int i,j,temp,n;
  int arr[10];
  printf("enter the value of n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("enter the value of %d=",i+1);
      scanf("%d",&arr[i]);
    }
  for(i=0;i<n;i++)
    {
      for(j=(i+1);j<n;j++)
        {
          if(arr[i]<arr[j])
          {
            temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
          }
        }
      
    }
   printf("after string\n");
       for(i=0;i<10;i++)
         printf("%d \t",arr[i]);
}*/
/*#include<stdio.h>
int main()
{
  int i,j,n,temp;
  int arr[50];
  printf("enter the size of Array :");
  scanf("%d",&n); 
  if(n>50)
  {
    printf("unsufficient value");
  }
  for(i=0;i<n;i++)
    {
      printf("enter the value of %d=",i+1);
      scanf("%d",&arr[i]);
    }
  for(i=0;i<n;i++)
    {
      for(j=(i+1);j<n;j++)
        {
          if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
          arr[j]=temp;
          }
     }
    }
  printf("After sorting\n");
  for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
  
}*/

// program to print n numbers and delete desired number from the list using array.
/*#include<stdio.h>
int main()
{
  int i,j,n,temp,num;
  int arr[50];
  printf("enter the size of array :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("enter the value of %d=",i);
      scanf("%d",&arr[i]);
      
    } 
  printf("enter the number to be deleted :");
  scanf("%d",&num);
  for(i=0;i<n;i++)
    {
      if(arr[i]==num)
      {
        for(j=i;j<n;j++)
          {
            arr[j]=arr[j+1];
          }
        n--;
      
        {
          printf("after dele the num\n");
          for(i=0;i<n;i++)
            printf("%d\t",arr[i]);
          
        }
        
      }
      
    }
    
}*/
/*#include<stdio.h>
int main()
{
int arr[10]={5,9,3,2,7,12,8,18,22,4};
  int temp,i,j;
  for(i=0;i<10;i++)
    {
      temp=arr[i];
      j=i-1;
      while(arr[j]>temp&&j!=-1)
        {
          arr[j+1]=arr[j];
          j--;
        }
      arr[j+1]=temp;
      
    }
  for(i=0;i<10;i++)
    printf("%d\n",arr[i]);
  
}*/
// program to input n numbers and update desire no. with new n umber.
/*#include<stdio.h>
int main()
{
  int i,j,n,temp,sub,add;
  int arr[50];
  printf("enter the size of array :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("enter the value of %d=",i);
      scanf("%d",&arr[i]);
      
    } 
  printf("enter the number to be deleted :");
  scanf("%d",&sub);
  for(i=0;i<n;i++)
    {
      if(arr[i]==sub)
      {
        for(j=i;j<n;j++)
          {
            arr[j]=arr[j+1];
          }
        n--;
        {
          printf("which number you want to add :");
          scanf("%d",&add);
          arr[n]=add;
          n++;
        }
        {
          printf("after dele and add the num\n");
          for(i=0;i<n;i++)
            printf("%d\t",arr[i]);
          
        }
        
      }
      
    }
    
}*/
/*#include<stdio.h>
int main()
{
  int arr[3][4]={{5,8,6,1},{2,3,5,4},{7,3,8,6}};
int y[3][4]={{4,2,1,0},{5,6,8,9},{3,2,1,0}};
  int i,j;
    int z[3][3];
  
  for(i=0;i<3;i++){
    for(j=0;j<4;j++)
      printf("%d\t",arr[i][j]);
    printf("\n");
  }
    for(i=0;i<3;i++){
      for(j=0;j<4;j++)
        printf("%d\t",y[i][j]);
    printf("\n");
    }
      for(i=0;i<3;i++)
          for(j=0;j<4;j++)
  z[i][j]=arr[i][j]+y[i][j];
 
  for(i=0;i<3;i++)
    for(j=0;j<4;j++)
       printf("%d\t",z[i][j]);
      printf("\n");        
}*/
  
  


/*#include<stdio.h>
int main()
{
  int arr[3][4];
  int i,j;
  printf("enter 3*4 matrix of elements");
  for(i=0;i<3;i++)
    for(j=0;j<4;j++)
      scanf("%d",&arr[i][j]);
  for(i=0;i<3;i++)
    for(j=0;j<4;j++)
      printf("%d",arr[i][j]);
  printf("\n");
  
}*/
/*#include<stdio.h>
 int main()
{
  char name[20];
  printf("enter your name");
  scanf("%s",name);
}*/
/*#include<stdio.h>
int main()
{
  char x[10];
  int i;
  char temp;
  printf("enter your name");
  while(1)
    {
    scanf("%c",&x[i]);
      if(temp==13   && temp==30)
        break;
      else{
        x[i]=temp;
        i++;
      }
    }
  x[i] = '\0';
}*/

/*#include<stdio.h>
int main()
{
  int i=0;
  char user[10],pass[10];
  char temp;
  printf("Enter your username");
  scanf("%s",user);
  printf("password");
  while(1)
    {
    scanf("%c",&pass[i]);
      if(temp==13 && temp==30)
        break;
      else{
        pass[i]=temp;
        printf(" * ");
        i++;
      }
    }
  pass[i]='\0';
}*/
// 28/01/2024
//%[^\n]

// #include<stdio.h>
// int main()
// {
//   char name[10];
//   printf("enter your name:");
//   scanf("%[^\n]",name);
//   printf("your name is:%s",name);
// }

//[^\t]
/*#include<stdio.h>
int main()
{
  char para[10];
  printf("enter your para:");
  scanf("%[^\t]",para);
  printf("your para is %s",para);
}*/

// program to find the length of string//
/*#include<stdio.h>
int main()
{
  char name[20];
  int i;
  printf("enter your name:");
    scanf("%s",name);
  for(i=0;name[i]!='\0';i++);
  printf("the length of the string is %d",i);
}*/

// comapare two strings//
/*#include<stdio.h>
int main()
{
  char name[20];
  char name1[20];
  int flag=0,i;
  printf("enter your first name:");
  scanf("%s",name);
  printf("enter your second name:");
  scanf("%s",name1);
  for(i=0;name[i]!='\0'==name1[i]=='\0';i++)
    {
      if(name[i]!=name1[i])
      {
        flag=1;
        break;
      }
      if(flag==0)
        printf("the strings are equal");
      else
        printf("not equal");
    }
}*/
//program uppercase to lowercase//
// #include<stdio.h>
// int main()
// {
//   char name[20];
//   int i;
//   printf("enter your name:");
//   scanf("%s",name);
//   for(i=0;name[i]!='\0';i++)
//     {
//       if(name[i]>=65 && name[i]<=90)
//         name[i]=name[i]+32;
//     }
//   printf("%s",name);
// }

// 28/01/2024 HOMEWORK 

// THE PROGRAM TO COUNT NO. OF VOWELS EXISTING IN INPUTTRD STRING.
/*#include<stdio.h>
int main()
{
  char name[50];
  int i,count=0;
  printf("enter your name:");
  scanf("%s",name);
  for(i=0;name[i]!='\0';i++)
    {
      if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u' ||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
      count++;
      
        }
  printf("the no. of vowels are %d",count);
    
}*/
//program to count number of word in sentences.
/*#include<stdio.h>
int main()
{
  char name[200];
  int i,count=1;
  printf("enter the sentences:");
  scanf("%[^\n]",name);
  for(i=0;name[i]!='\0';i++)
    if(name[i]==32)
    {
    count++;
    }
    printf("%d",count);
}*/
// THE PROGRAM TO PRINT TO COUNT THE NO. OF UPPERCASE,LOWERCASE,DIGITS,SPECIAL CHARACTERS,

/*#include<stdio.h>
int main()
{
  char name[20];
  int i,upper=0,lower=0,numeric=0,BODMAS=0,special=0;
  printf("Enter your string:");
  scanf("%s",name);
  for(i=0;name[i]!='\0';i++)
    {
      if(name[i]>=65 && name[i]<=90)
        upper++;
    }
  printf(" The uppercase total value is:%d\n",upper);
  for(i=0;name[i]!='\0';i++)
    {
      if(name[i]>=97 && name[i]<=122)
        lower++;
    }
  printf(" The lowercase total valie is:%d\n",lower);
  for(i=0;name[i]!='\0';i++)
    {
      if(name[i]>=48 && name[i]<=57)
        numeric++;
    }
  printf("Total numeic value is:%d\n",numeric);
  for(i=0;name[i]!='\0';i++)
    {
      if(name[i]>=41 && name[i]<=47)
        BODMAS++;
    }
  printf("Total BODMAS char is:%d\n",BODMAS);
  for(i=0;name[i]!='\0';i++)
    {
      if(name[i]>=58 && name[i]<=64)
        special++;
    }
  printf("Total special char value is:%d",special);
}*/

//THE PROGRAM TO CHECK THE VALIDITY OF EMAIL-ID//


/*#include<stdio.h>
int main()
{
  int i;
  char name[50];
  printf("Enter your email-id:");
  scanf("%s",name);
  for(i=0;name[i]!='\0';i++)
    
      if(name[i]>=65 || name[i]<=90 || name[i]>=97 || name[i]<=122 || name[i]>=48 || name[i]<=57 || name[i]==46 || name[i]==64){
        printf("valid email id");
    }
      else
        printf("invalid email id;");
    
    }*/
//program lowercase to uppercase//


/*#include<stdio.h>
int main()
{
  char name[20];
  int i;
  printf("enter your name:");
  scanf("%s",name);
  for(i=0;name[i]!='\0';i++)
    {
      if(name[i]>=97 && name[i]<=122)
        name[i]=name[i]-32;
    }
  printf("%s",name);
}*/

//progrma to cheeck the emai id and password is match to the given email id and password//


/*#include<stdio.h>
int main()
{
  char emailid[50],emailpassword[50];
  char emailaddress[50]= "utkarshadley";
  char password[50]="0001";
  int i;
  printf("enter your email id:");
  scanf("%s",emailid);
  printf("enter your password:");
  scanf("%s",password);
  for(i=0;emailid[i]!='\0';i++){
    
      if(emailid[i]==emailaddress[i] && emailpassword[i]==password[i])
       printf("Valid Authentication\n");
  else
        printf("Invalid Authentication\n");
}
}*/

//PRACTICE -31/01/2023
//PROGRAM TO COPY STRING TO ANOTHER STRING//

/*#include<stdio.h>
int main()
{
  int i;
  char string[50]="RAMESH";
  char copystring[50];
  for(i=0;string[i]!='\0';i++)
    copystring[i]=string[i];
  copystring[i]='\0';
  printf("%s",copystring);
}*/
// PROGRAM TO REVERSE THE STRING//
/*#include<stdio.h>
int main()
{
  int i,j;
  char string[50], revstring[50];
  printf("Enter the string:");
  scanf("%s",string);
  for(i=0;string[i]!='\0';i++);
  i--;
  for(j=0;i>=0;i--,j++)
    revstring[j]=string[i];
  revstring[i]='\0';
  printf("%s",revstring);
  
}*/

//PROGRAM TO check STRING IS PALINDROMEN OR NOT?//
/*#include<stdio.h>
int main()
{
  int i,j;
  char string[50];
  char revstring[50];
  printf("Enter the string:");
  scanf("%s",string);
  for(i=0;string[i]!='\0';i++);
  i--;
  for(j=0;i>=0;i--,j++)
    revstring[j]=string[i];
  revstring[i]='\0';
  for(i=0;string[i]!='\0';i++);
  i--;
  
  if(string[i]==revstring[i])
    printf(" It's a palindrome string");
  else
    printf(" It's a not plaindrome");
}*/

//strlen()
/*#include<stdio.h>
int main()
{
  char string[10]="ram";
  int i=strlen(string);
  printf("%d",i);
}*/
//strcat()
//  #include<stdio.h>

// int main()
// {
//   char str1[10]="rajeev";
//   char str2[20]="kumar";
//   strcat(str1,str2);
//   printf("%s",str1);
// }
/*#include<stdio.h>
#include<string.h>
int main()
{
  char str1[10]="rajesh";
  char str2[10]="rajeev";
  if (strncmp(str1,str2,5)==0)
  printf("same");
  else
  printf("not same");
}*/
//program to check the availablity of inputted name in the initilaised list of names.//

/*#include<stdio.h>
#include<string.h>
  int main()
{
  char name[5][50]={"rajesh","ram","mohit","rajeev","raj"};
  char str[50];
  int i;
  printf("search your name:");
  scanf("%s",str);
  for(i=0;i<5;i++)
    if(strcmp(name[i],str)==0){
      printf("name is avaliable");

    if(strcmp(name[i],str)!=0){
      printf("name is not avaliable");
}}*/
//same program of above the question//

 /*#include<stdio.h>
#include<string.h>
  int main()
{
  char name[10][50]={"rajesh","ram","mohit","utkarsh","rajeev","raj","sobhit","shubham","sagar","rishi"};
  char str[50];
  int i;
  printf("Search your name:");
  scanf("%s",str);
  for(i=0;i<9;i++)  
    if(strcmp(name[i],str)==0){
      printf("Name is avaliable");
      break;
    }
    if(i==9)
      printf("name is not avaliable");
}*/
//the program to print the password of inputted user id and password should be initialise in different array.//

/*#include<stdio.h>
#include<string.h>
int main()
{
  char name[20]="rajesh";
  char name1[20]="ravi";
  char name2[20]="sobhit";
  

  char pass[20]="5555";
  char pass1[20]="6666";
  char pass2[20]="7777";
  char str[20];
  printf("enter your username:");
  scanf("%s",str);
    if(strcmp(name,str)==0){
      printf("your password is: %s",pass);
    }
      if(strcmp(name1,str)==0){
      printf("your password is: %s",pass1);
      }
        if(strcmp(name2,str)==0){
      printf("your password is: %s",pass2);
        }
        
}*/
//Asscending order of names//
     
//  #include<stdio.h>
// int main()
// {
//   int i,j;
//   char temp[50];
//   char arr [10][50]={"rajesh","mohit","amit","sanjeev","jay","aditya","nobita","ziyan","doraemon","utkarsh"};
//   for(i=0;i<10;i++)
//     {
//       for(j=(i+1);j<10;j++)

//           if(strcmp (arr[i],arr[j])>0)
//           {
//             strcpy(temp, arr[i]);
//             strcpy(arr[i], arr[j]);
//             strcpy(arr[j], temp);
//           }
//         }
//       printf("after string\n\n");
//       for(i=0;i<10;i++)
//         printf("%s \n",arr[i]);

// }
// #include<stdio.h>
// int main()
// {
//   int n,g=1;
//   printf("enter the value of n");
//   scanf("%d",&n);

//   while(n>0)
//     {
//       g=g*n;
//       n--;
//     }
//   if(n<0){
//     printf("invalid input");
//   }

//   printf("value of g=%d",g);
// }

// with return without argument//

// #include<stdio.h>
// int sum (void);
// int main()
// {
//   int r=sum();
//   printf("%d",r);
  
// }
// int sum(){
//   int x,y;
//   printf("enter the two no.s=");
//   scanf("%d %d",&x,&y);
//   return(x+y);
// }
//with return and with arugment//

// #include<stdio.h>
// int sum(int,int);
// int main(){
//   int x,y,z;
//   printf("enter the no.s=");
//   scanf("%d %d",&x ,&y);
//   z=sum(x,y);
//   printf("%d",z);
// }
// int sum (int p, int q)
// {
//   return(p+q);
// }