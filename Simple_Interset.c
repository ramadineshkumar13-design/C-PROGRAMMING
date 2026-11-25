#include<stdio.h>

int main()
{
    int principel = 1000;
    int Interest = 5;
    int years = 5;
    int simple_interest = (principel*years*Interest)/100;
    
    printf("SIMPLE INTEREST AMOUNT : %d",simple_interest);
}