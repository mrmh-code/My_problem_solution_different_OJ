#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int temp[n];
    for(int i=0; i<n; i++){
         scanf("%d",&temp[i]);

    }
    int s=0;
    for(int i=0; i<n; i++){
        s=s+temp[i];
    }
    printf("%d\n",s);

    
}