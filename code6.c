#include<stdio.h>
void main(){
    float a,b,c,d,f;
    float sum;
    float avg;
    float percentage;
    
    printf("ENTER the marks you have get in five subject(maximum 100)");
    scanf("%f %f %f %f %f", &a,&b,&c,&d,&f);

    sum= a+b+c+d+f;

    printf("THE aggregate marks are%f\n",sum);
    
    avg= sum/500;
    percentage=  avg* 100;

    printf("THE percentage marks are %f\n",percentage);
}