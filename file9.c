/*program to calculate the number ofcomments present in file */
#include<stdio.h>
int main()
{
  FILE *fp1;
  char ch; int comm=0;
  fp1=fopen("fact.c","r");
  while((ch=fgetc(fp1))!=EOF)
    {
      if(ch==47 && ((ch=fgetc(fp1))==47 || ch==42))
        {
          comm++;
        }
        
    }
  printf("%d\n",comm);
  fclose(fp1);
}
    
              
