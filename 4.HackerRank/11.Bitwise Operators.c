#include <stdio.h>

void calculate_the_maximum(int n, int k) {
   int i,j;
   int maxand=0;
   int maOR=0;
   int maXor=0;
   for(i=1;i<=n; i++){
       for(j=i+1; j<=n; j++){
            if ((i&j)>maxand && (i&j)<k)
            {
               maxand=(i&j);
            }
            if ((i|j)>maOR && (i|j)<k)
            {
                maOR=(i|j);
            }
            if ((i^j)>maXor && (i^j)<k)
            {
               maXor=(i^j);
            }
       }
   }

   printf("%d\n%d\n%d\n",maxand,maOR,maXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}