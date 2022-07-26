#include <stdio.h>

  int main(){
    char a ;
    
        printf("Enter your character :");
        scanf("%c",&a);
        if(a == 'a'|| a=='e' ||a=='i' ||a=='o' ||a=='u' ||a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U' )
        {
            printf("%c is vowel.",a);
        }
        else if(a>=0||a<0)
        {
            printf("You entered a number it's not character :%c",a);
        }
        else
        {
            printf("%c is consonant.",a);
        }
  return 0;
}