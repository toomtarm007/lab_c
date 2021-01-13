// power.c
// Enter the base
// 2
// Enter the exponent
// 3
// The power of the no = 8

#include<stdio.h>
void main(){
    system("cls");

    int b, e;
    printf("Enter the base: ");
    scanf("%d",&b);

    printf("Enter the exponent: ");
    scanf("%d",&e);

    calculate_power(b,e);   
}
void calculate_power(int b, int e){
    int power = 1;
    while (e>0)
    {
        power = power * b;
        e--; 
    }
    printf("The power of the no = %d",power);
}