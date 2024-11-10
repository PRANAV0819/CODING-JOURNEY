#include<stdio.h>
#include<math.h>

void square(float num);

int main(){
    float num ;
    printf("Enter number");
    scanf("%f",&num);

    square(num);
}

void square(float num){
    printf("%f\n",pow(num,2));
}