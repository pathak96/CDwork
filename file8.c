/*program to print vowels in a reverse order*/
#include<stdio.h>
#include<string.h>
int main()
{
  FILE *fp1;
  char ch; int i=0;char vow[100];
  fp1=fopen("abc1.txt","r");
  while((ch=fgetc(fp1))!=EOF)
    {
      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
         {
           vow[i]=ch; i++;
         }
   }
   for(i=strlen(vow);i>=0;i--)
    printf("%c",vow[i]);
  fclose(fp1);
}
    
              
