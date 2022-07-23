// Calculator for two numbers
# include <stdio.h>
int main(){
	int a , b;
    printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	printf("Sum of the numbers is %d\n",a+b);
	printf("Substraction of the numbers is %d\n",a-b);
	printf("Multiplication of the numbers is %d\n",a*b);
	printf("Division of the numbers is %.2f\n",a/b);
    return 0;

}