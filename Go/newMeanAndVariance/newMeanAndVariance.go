package newMeanAndVariance


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