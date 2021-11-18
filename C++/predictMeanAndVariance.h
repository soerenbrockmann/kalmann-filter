#include <stdio.h>
#include <math.h>

struct Values
{
  float mean;
  float var;
};

struct Values update(
    float mean1,
    float var1,
    float mean2,
    float var2);

struct Values predict(
    float mean1,
    float var1,
    float mean2,
    float var2);
