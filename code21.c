#include<stdio.h>
 void printHello();
 void goodbye();

 int main(){
    printHello();
    printHello();
    goodbye();
    goodbye();
    return 0;
 }

 void printHello(){
    printf("Hello\n");
 }
 void goodbye(){
    printf("goodbye\n");
 }