#include <iostream>
#include <cmath>
using namespace std;

float calcGaussain(float mu, float sigma2, float x)
{
    return (1 / sqrt(2 * M_PI * sigma2)) * exp(pow(-0.5 * (x - mu), 2) / sigma2);
}

int main(void)
{
    float result = calcGaussain(10.0, 4.0, 10.0);
    cout << result;
    return 0;
}
