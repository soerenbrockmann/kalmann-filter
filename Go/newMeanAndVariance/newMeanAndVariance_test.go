package newMeanAndVariance

import (
  "testing"
)

func TestUpdate(t *testing.T) {
  newMean, newVar := update(10.0, 8.0, 13.0, 2.0);
  newMeanWanted, newVarWanted := 12.4, 1.6000000000000001

  if newMean != newMeanWanted {
      t.Fatalf(`Reiceived newMean = %f, want match for %f`, newMean, newMeanWanted)
  }

  if newVar != newVarWanted {
    t.Fatalf(`Reiceived newVar = %f, want match for %f`, newVar, newVarWanted)
}
}
