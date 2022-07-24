# include<stdio.h>
 int main(){
   float T, fahrenhiet ;
    printf("Enter Temperature :");
    scanf("%f",&T);
    fahrenhiet = (T * 9 / 5) + 32 ; 
    printf("Your given Temperature in fahrenhiet is :%f", fahrenhiet );
    return 0;
 }