 //prograam of calculator by using switch case
#include <stdio.h>
int main(){
int num1,num2,choice;
printf("Enter two number \n");
scanf("%d %d",&num1,&num2);
printf("Enter choice \n");
printf("1. Addition\n");
printf("2. Substraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. remainder\n");
scanf("%d",&choice);
switch(choice)
{
case 1:

printf("Addition of two is: %d\n",num1+num2);
break;
case 2:
printf("Substraction of two is: %d\n",num1-num2);
break;
case 3:
printf("Multiplication of two is: %d\n",num1*num2);
break;
case 4:
printf("Division of two is: %d\n",num1/num2);
break;
case 5:
printf("Remainder of two is: %d\n",num1%num2);
break;
}
return 0;
}