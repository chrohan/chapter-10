#include<stdio.h> //recursive method
int digisum(int);
int main()
{
int i,ans;
printf("enter a five digit number\n");
scanf("%d",&i);
ans = digisum(i);
printf("sum of digits of the number is %d\n",ans);
}

int digisum(int x)
{
   int j,k,l,m,n,sum;
   j = x % 10;
   k = (x/10) % 10;
   l = (x/100) % 10;
   m = (x/1000) % 10;
   n = x/10000;
 
   sum = j + k + l + m + n;
   return(sum);
}
