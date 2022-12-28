#include "stdio.h"
#include "factorial.h"

int factorial(int n);

int main()
{
    int input_value = 3;
    int result = 0;

    result = factorial(input_value);
    printf_s("%d! = %d \n",input_value,result);

    return 0;
}