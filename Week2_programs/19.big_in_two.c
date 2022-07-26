#include <stdio.h>

  int main(){
   int a, b ;
    printf("Enter frist number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
     if(a>b){
        printf("%d is greater then %d",a,b);
     }
     else if (a<b)
     {
     printf("%d is greater then %d",b,a);
    }
    else
    {
        printf("No one is greater !");
    }

    
  return 0;
}