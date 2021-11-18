package main

import (
	"fmt"
)

func update(
  mean1 float64,
  var1 float64,
  mean2 float64,
  var2 float64,
) (float64, float64){
   newMean := (1 / (var1 + var2)) * (var2 * mean1 + var1 * mean2);
   newVar := 1 / (1 / var1 + 1 / var2);
  return newMean, newVar;
}

func predict(
  mean1 float64,
  var1 float64,
  mean2 float64,
  var2 float64,
) (float64, float64){
   newMean := mean1 + mean2;
   newVar := var1 + var2;
  return newMean, newVar;
}

func main() {
    updateMean, updateVar := update(10.0, 8.0, 13.0, 2.0);
    fmt.Printf(`\n Updated mean = %f, updated variance = %f \n`, updateMean, updateVar);
    predictMean, predictVar := predict(updateMean, updateVar, updateMean, updateVar);
    fmt.Printf(`\n Updated mean = %f, updated variance = %f \n`, predictMean, predictVar);
}