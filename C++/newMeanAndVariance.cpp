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
    float var2)
{
  Values newValues;
  newValues.mean = (1 / (var1 + var2)) * (var2 * mean1 + var1 * mean2);
  newValues.var = 1 / (1 / var1 + 1 / var2);
  return newValues;
}

int main(void)
{
  struct Values result = update(10.0, 8.0, 13.0, 2.0);

  cout << "\n newMean: " << result.mean << "\n newVar: " << result.var;
  return 0;
}
