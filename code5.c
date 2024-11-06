// To convert the distance 
#include<stdio.h>
void main(){
    float dis;
    printf("The distance between 2 cities (in km) is :");
    scanf("%f", &dis);

    printf("The distance in meters is %f \n",dis*1000);
    printf("The distance in feet is %f\n",dis*3280.84);
    printf("The distance in %f\n",dis*100000);

}