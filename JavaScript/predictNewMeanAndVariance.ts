type Values = {
  newMean: number;
  newVar: number;
};

export function update(
  mean1: number,
  var1: number,
  mean2: number,
  var2: number
): Values {
  const newMean = (1 / (var1 + var2)) * (var2 * mean1 + var1 * mean2);
  const newVar = 1 / (1 / var1 + 1 / var2);
  return { newMean, newVar };
}

export function predict(
  mean1: number,
  var1: number,
  mean2: number,
  var2: number
): Values {
  const newMean = mean1 + mean2;
  const newVar = var1 + var2;
  return { newMean, newVar };
}

const updateValues = update(10.0, 8.0, 13.0, 2.0);
console.log(
  `Update new mean: ${updateValues.newMean}, Update new variance: ${updateValues.newVar}`
);

const predictValues = predict(
  updateValues.newMean,
  updateValues.newVar,
  updateValues.newMean,
  updateValues.newVar
);
console.log(
  `Predict new mean: ${predictValues.newMean}, Predict new variance: ${predictValues.newVar}`
);
