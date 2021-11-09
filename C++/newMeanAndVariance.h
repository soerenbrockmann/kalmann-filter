#include <iostream>
#include <cmath>

using namespace std;

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
