/*program to remove whitespaces in a file*/
#include<stdio.h>
#include<ctype.h>
int main()
{
  FILE *fp1, *fp2;
  char ch; 
  fp1=fopen("abc1.txt","r");
  fp2=fopen("abcnew.txt","w");
  while((ch=fgetc(fp1))!=EOF)
    {
      if(isspace(ch))
      ;
      else
      fputc(ch,fp2);
        }
  fclose(fp1);
  fclose(fp2);
}
    
