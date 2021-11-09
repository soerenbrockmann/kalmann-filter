export function update(
  mean1: number,
  var1: number,
  mean2: number,
  var2: number
) {
  const newMean = (1 / (var1 + var2)) * (var2 * mean1 + var1 * mean2);
  const newVar = 1 / (1 / var1 + 1 / var2);
  return [newMean, newVar];
}

console.log(update(10.0, 8.0, 13.0, 2.0));
