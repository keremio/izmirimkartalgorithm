#include <stdio.h>
#include <stdlib.h>
int main()
{
    char cardno[13]; //izmirimkart number is made of 13 digits (abcde-fghij-k)
    int sum = 0;
    for (int i = 0; i < 13; i++)
    {
        scanf("%c" , &cardno[i]); //input
    }
    for(int i = 0; i < 11; i++)
    {
        if (i != 5)
        {
            int x = cardno[i] - '0'; //int to char
            sum = sum + x;
        }
    }
    if ((sum % 10) == cardno[12] - '0') //the algorithm: (a+b+c+...+i+j) (mod 10) = k, else the number is invalid.
    {
        printf("the card number is valid");
    }
    else{
        printf("invalid card number\a");
    }
}
