#include<stdio.h>
#include<stdlib.h>
void main(){
    int a,b,c, lno, result;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    result = (a+b +(abs(a-b)))/2;
    result = ((result + c) + (abs(result - c))) / 2;
    printf("The maximum number is: %d", result);

}
