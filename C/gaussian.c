#include <stdio.h>
#include <math.h>

float calcGaussain(float mu, float sigma2 , float x)  {
	return (1 / sqrt(2 * M_PI * sigma2)) * exp(pow(-0.5 * (x - mu), 2) / sigma2);
}

int main(void)
{
    float result = calcGaussain(10.0, 4.0, 10.0);
    printf("%.6f", result);
    return 0;
}
