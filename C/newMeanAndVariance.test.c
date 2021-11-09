#include <assert.h>
#include "newMeanAndVariance.h"

int main(void)
{
  struct Values expectedValues; 
  expectedValues.mean = 12.4;
  expectedValues.var = 1.6000000000000001;

  struct Values result = update(10.0, 8.0, 13.0, 2.0);

  assert(expectedValues.mean == result.mean);
  assert(expectedValues.var == result.var);

  return (0);
}
