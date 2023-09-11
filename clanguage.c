#include<stdio.h>
  int main()
{
  int number;

    printf("Enter the number\n");
  scanf("%d",&number);

  if (number>0){
    printf("The number is positive");
  }
  else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}
