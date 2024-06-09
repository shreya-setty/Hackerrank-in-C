#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k) 
{
  int max1=0,max2=0,max3=0;
  for(int j=1;j<=k;j++)
  {
    for(int i=j+1;i<=n;i++)
    {
        if((j&i)>max1 && (j&i)<k )
          max1=j&i;
        if((j|i)>max2 && (j|i)<k)
          max2=j|i;
        if((j^i)>max3 && (j^i)<k)
          max3=j^i;
    } 
  }
  printf("%d\n%d\n%d",max1,max2,max3);
}

int main()
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
