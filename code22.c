#include<stdio.h>
 void india();
 void french();

 int main(){
    printf("enter f for french and i for india");
    char ch;
    scanf("%c",&ch);

    if(ch == 'i'){
        india();
    }
    else if (ch == 'f'){
        french();
    }
    return 0;

 }

 void india(){
    printf("NAMASTE\n");
 }
 void french(){
    printf("BONJOUR\n");
 }