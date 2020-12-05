#include<function.h>
float do_celsius_fahrenheit(long int input1)
{
    float result = 9/5*(input1)+32;
    return result;
}

float do_kelvin_fahrenheit(long int input1)
{
    float result = 9/5*(input1-273)+32;
    return result;
}


float do_fahrenheit_celsius(long int input1)
{
    float result = 5/9*(input1-32);
    return result;
}

float do_celsius_kelvin(long int input1)
{
    float result = input1+273;
    return result;
}

float do_kelvin_celsius(long int input1)
{
    float result = input1-273;
    return result;
}

float do_fahrenheit_kelvin(long int input1)
{
    float result = 5/9(input1-32)+273;
    return result;
}
