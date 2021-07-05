#include <stdio.h>
#include <string.h>
char *gets();
int main()
{
    char s[1000];
     gets(s);

    for(int i=0; i<strlen(s); i++){
       if (s[i]==' ')
       {
           printf("\n");
       }else{
           printf("%c",s[i]);
       }
       
    }
    printf("\n");
}