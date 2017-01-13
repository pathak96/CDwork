/*program to calculate the number of vowels and consonants */
#include<stdio.h>
int main()
{
  FILE *fp1;
  char ch; int vow=0,conso=0;
  fp1=fopen("abc1.txt","r");
  while((ch=fgetc(fp1))!=EOF)
    {
      if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
        {
          if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vow++;
          else
            conso++;
        }
        
    }
   printf("vowels count \n %d\n consonants count \n %d",vow,conso);
  fclose(fp1);
}
    
              
