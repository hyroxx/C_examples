#include <stdio.h>
#include <stdlib.h>

void perf(int a)
{

    int i;
    
    for(i=0; i<=a ; i++){


        if(a==i*i){

             printf("%d is a perfect square!\n",a);
             return 0;
        }
}
        printf("%d is not a perfect square \n",a);
         return 0;
    }


void sum(int n){
    printf("n= %d \n",n);
    printf("Positive Divisors: ");
    int k;
    int sums=0;
    int temp=0;

    for(k=1;k<=n;k++){
        if(n%k==0){

            printf("%d-",k);

            sums=sums+k;


        }
    }
    printf("\na: %d\n",n);

     printf("b: %d\n",sums);

     temp=sums+n;

     printf("a+b: %d\n ",temp);

     perf(temp);
     printf("\n");



}

int main() 
{ 
printf ("Enter number:");
int n;
  scanf("%d",&n);
  sum(n);
 
    return 0;
}
