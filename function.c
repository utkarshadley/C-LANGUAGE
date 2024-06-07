// int add(int x , int y)
// {
//   return (x+y);
// }
// #include<stdio.h>
// #include "xyz.h"
// int main()
// {
//   int x;
//   x=add(100,20);
//   printf("%d",x);
// }

// void main(int argc , char *argv[]){
//   if (argc>=2)
//   {
//     printf("invalid");
//   return;
//   }
//   if (strcmp(argv[0],argv[1])==0)
//     printf("same");
//   else
//     printf("not same");
// }
//     void msg()
// {
//   printf("Hello World");
// }
// void main()
// {
//   void (*but)();
//   but=&msg;
//   but();

// int add(int x , int y)
// {
//   return (x+y);
// }
// #include<stdio.h>
// #include "xyz.h"
// int main()
// {
//   int x;
//   x=add(100,20);
//   printf("%d",x);
// }

// void main(int argc , char *argv[]){
//   if (argc>=2)
//   {
//     printf("invalid");
//   return;
//   }
//   if (strcmp(argv[0],argv[1])==0)
//     printf("same");
//   else
//     printf("not same");
// }
//     void msg()
// {
//   printf("Hello World");
// }
// void main()
// {
//   void (*but)();
//   but=&msg;
//   but();

// #include<stdio.h>
// int main()
// {
//   int i;
//   FILE* fp=fopen("outfile1.txt","w");
//   printf("input an integer :");
//   scanf("%d",&i);
//   fprintf(fp,"%d\n",i);
//   fclose(fp);
// }
// #include<stdio.h>
// void main()
// {
//   int ptr=fopen("outfile2.txt","w");
//   if(!ptr)
//     printf("file name error:");
//   return;
// }

/*#include<stdio.h>
int main()
{
  FILE * clang;
  clang=fopen("outfile5.txt","w");
  if(!clang)
    printf("file name error:");
  return
   fprintf(clang,"hi c lang : replit here/././.*8/8/*8");
  fclose(clang);
}*/

// #include<stdio.h>
// int main()
// {
//   FILE *clang;
//   clang=fopen("herb.txt","w");
//   if(!clang)
//     printf("ERROR:");
//   return
//    fprintf("hi c lang : replit here/././.*8/8/*8");
//   fclose(clang);
// }
/*struct student{
int roll;
char name[10];
};
#include<stdio.h>
int main(){
  struct student st;
  FILE *fp;
  fp=fopen("student.txt","w");
  if (fp==NULL)
    printf("ERROR:-:");
  else
    printf("Enter your name :");
  scanf("%s",st.name);
  printf("Enter your roll :");
  scanf("%d",&st.roll);
  fprintf(fp, "name =%s\n",st.name);
  fprintf(fp, "roll =%d\n",st.roll);
  fclose(fp);
}*/

// fscanf()

// #include<stdio.h>
// int main(){
//   char str[10];
//   FILE *fp;
//   fp=fopen("student1.txt","r");
//   if(fp==NULL)
//     printf("ERROR");
//   else
//     fprintf(fp,"HELLO WORLD !");
//   fclose(fp);
//   fp=fopen("student1.txt","r");
//   fscanf(fp,"%s",str);
//   printf("%s",str);
//   fclose(fp);
// }

// fputs()
/*#include<stdio.h>
int main(){
  FILE *fp;
  fp=fopen("student1.txt","w");
  if (fp==NULL)
    printf("Error:;");
  return
  fputs("HELLO C-lang",fp);

  fclose(fp);
}*/
// fgets()
// #include <stdio.h>
// int main() {
//   char str[20];
//   char ch;
//   FILE *fp;
//   fp = fopen("student1.txt", "w");
//   if (fp == NULL)
//     printf("Error:;");
//   return fputs("HELLO C-lanjiji", fp);

//   fclose(fp);
//   fp = fopen("student1.txt", "r");
//   rewind(fp);
//   while ((ch = fgetc(fp)) != EOF) {
//     printf("%c", ch);
//   }
//   fclose(fp);
// }
// rewind()

/*#include<stdio.h>
int main(){
  char str[200];

  FILE *fp;
  fp=fopen("file.txt","w+");
  if(fp==NULL)
    printf("error::");
  return
    fputs("HELLoooooo",fp);
  rewind(fp);
  fgets(str,3,fp);
  printf("%s",str);
  fclose(fp);
}*/
// HOMEWORK//
//  count no. of sentence //
//  #include<stdio.h>
//  int main(){
//    char str[200];
//    int count=1,i;
//    FILE *space;
//    space=fopen("file.txt","w");
//   if(space==NULL)
//     printf("error");
//    else
//     printf("enter the string:");
//    scanf("%[^\n]",str);
//    for(i=0;str[i]!='\0';i++)
//      if (str[i]==32)
//      count++;
//    fprintf(space,"the length of the string is %d",count);
//    fclose(space);

// }
//counting the no. of words by file handling//
    //counting the no. of words by file handling//
    //#include<stdio.h>
// int main(){
//   char str[200];
//   int count=1,i;
//   char ch;
//   FILE*space;
//   space=fopen("file.txt","w");
//   if(space==NULL)
//     printf("ERROR::");
//   else
//     fputs("hey c lang what's up!",space);
//   fclose(space);
//   space=fopen("file.txt","r");
//   while((ch=fgetc(space))!=EOF)
//     if(ch==32)
//       count++;
//   printf("the no. of words is %d",count);  
// }

/*#include<stdio.h>
int main(){
  FILE *fp;
  fp=fopen("creck.txt","w");
  fprintf(fp,"A paragraph is a collection of words strung together to make a longer unit than a sentence. Several sentences often make a paragraph. There are normally three to eight sentences in a paragraph. Paragraphs can start with a five-space indentation or by skipping a line and then starting over. This makes it simpler to tell when one paragraph ends and the next starts simply it has 3-9 linesA topic phrase appears in most ordered types of writing, such as essays. This paragraph's topic sentence informs the reader about the topic of the paragraph. In most essays, numerous paragraphs make statements to support a thesis statement, which is the essay's fundamental point.Paragraphs may signal when the writer changes topics. Each paragraph may have a number of sentences, depending on the topic.");
  fseek(fp,0,SEEK_SET);
  fseek(fp,10,SEEK_SET);
  
}*/
