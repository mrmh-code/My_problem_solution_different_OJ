#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int num,per[6],tim=0,ten=1;
		scanf("%d",&num);
		for(int i=1;i<6;i++)
		{
			per[i]=num%10;//Store the numbers in the array
			num/=10;
			if(per[i] != 0)
				tim ++; //Record the number of non-zero occurrences
		}
		printf("%d\n",tim);
		for(int i=1;i<6;i++)
		{
			if(per[i]!=0)
				printf("%d ",per[i]*ten);//Output each part
			ten*=10;	
	    }
	   printf("\n");	 
 
 
   	
    cout<<endl;
	}		
}