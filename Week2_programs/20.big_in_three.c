#include <stdio.h>

  int main(){
   int a, b, c ;
    printf("Enter frist number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
     if(a>b && a>c){
    
        printf("%d is greater !",a);
     }
    else if(b>a && b>c)
    {
        printf("%d is greater !",b);
    }
    else if(c>a && b<c)
    {
        printf("%d is greater !",c);
    }
    else
    {
        printf("No one is greater !");
    }
     return 0;
}