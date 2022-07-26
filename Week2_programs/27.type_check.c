#include <stdio.h>

  int main(){
    char a ;
     printf("Enter your input :");
     scanf("%c",&a);
     if((a>='a' && a<='z') || (a>='A' && a<='Z'))
     {
        printf("'%c' is a alphabet.",a);
     }
     else if(a>=0 && a<=9)
     {
        printf("'%c' is a number.",a);
     }
    else
    printf("'%c' is a spacial character.",a);
  return 0;
}