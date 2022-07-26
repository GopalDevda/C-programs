#include <stdio.h>

  int main(){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d number is Even !",a);
    }
    else
    {
        printf("%d number is odd !",a);
    }
  return 0;
}