#include<stdio.h>
int main(){

    int n,max=0,i,ar[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    scanf("%d",&ar[i]);
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
}
printf("%d\n",max);


}