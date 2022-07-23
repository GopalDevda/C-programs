# include<stdio.h>
 int main(){
   float T ;
    // far = (T * 9 / 5) + 32 ; 
    printf("Enter Temperature :");
    scanf("%d",&T);
    if (T){
    
    printf("Your given Temperature in fahrenhiet is :%f", (T * 9 / 5) + 32  );

    }


    return 0;
 }