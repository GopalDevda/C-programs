#include <stdio.h>

  int main(){
    char a ;
     printf("Enter your input :");
     scanf("%c",&a);
     if(a>='a' && a<='z') 
     {
        printf("'%c' is a lowercase alphabet.",a);
     } 
     else if(a>='A' && a<='Z')
     {
        printf("'%c' is a uppercase alphabet.",a);
     }
    else
    {
        printf("invalid input :%c",a);
    }
  return 0;
}