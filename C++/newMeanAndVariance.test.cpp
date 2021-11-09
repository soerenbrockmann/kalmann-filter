#include <assert.h>
#include "newMeanAndVariance.h"

int main(void)
{
  Values expectedValues;
  expectedValues.mean = 12.4;
  expectedValues.var = 1.6000000000000001;

  Values result = update(10.0, 8.0, 13.0, 2.0);

  assert(expectedValues.mean == result.mean);
  assert(expectedValues.var == result.var);

  return (0);
}
