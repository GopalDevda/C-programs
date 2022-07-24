# include<stdio.h>
 int main(){
   float T,Celcius;
    printf("Enter Temperature :");
    scanf("%f",&T);
    Celcius =  (T-32)*5/9;
    printf("Your given Temperature in celcius is :%f",Celcius);



    return 0;
 }