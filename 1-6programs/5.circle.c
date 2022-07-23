// Circle Diameter, Circumference, Area Calculator
# include <stdio.h>
int main(){
	int Radius;
    printf("Enter Radius : ");
	scanf("%d",&Radius);
    printf("Diameter of Circle is %d\n", 2*Radius);
    printf(" Circumference of Circle is %.2f\n",2*3.14*Radius);
    printf("Area of Circle is %.2f\n",3.14*Radius*Radius);
 return 0;

}