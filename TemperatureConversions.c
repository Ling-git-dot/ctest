#include <math.h>

int celsiusToFahrenheit(float celsius)
{
    float result = (9.0 / 5.0) * celsius + 32;
    return round(result);
}

int fahrenheitToCelsius(float fahrenheit)
{
    float result = (5.0 / 9.0) * fahrenheit - 32;
    return round(result);
}
