// upr6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    unsigned int n,m;
   
    n = 998;
    m = 3;
    int z, x;
    printf("% Izberi funciq po slednata sxema\n 1=&\n 2=|\n 3=^\n 4=<<\n 5=>>\n 6=~\n");
    scanf_s("%d", &x);
    switch (x)
    {
    case 1: z = n & m;
        break;
    case 2: z = n | m;
        break;
    case 3: z = n^m;
        break;
    case 4: z = n << m;
        break;
    case 5: z = n >> m;
        break;
    case 6: z = ~n;
    }
    printf("%d",z);
    
}

