// Write a program that will predict your new mean
// and variance given the mean and variance of your
// prior belief and the mean and variance of your
// motion.

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
  struct Values newValues;
  newValues.mean = (1 / (var1 + var2)) * (var2 * mean1 + var1 * mean2);
  newValues.var = 1 / (1 / var1 + 1 / var2);
  return newValues;
}

struct Values predict(float mean1,
                      float var1,
                      float mean2,
                      float var2)
{
  struct Values newValues;
  newValues.mean = mean1 + mean2;
  newValues.var = var1 + var2;
  return newValues;
}

int main(void)
{
  struct Values updateResult = update(10.0, 8.0, 13.0, 2.0);
  cout << "\n newMean: " << updateResult.mean << "\n newVar: " << updateResult.var;

  struct Values predictResult = predict(updateResult.mean, updateResult.var, updateResult.mean, updateResult.var);
  cout << "\n newMean: " << predictResult.mean << "\n newVar: " << predictResult.var;
  return 0;
}
