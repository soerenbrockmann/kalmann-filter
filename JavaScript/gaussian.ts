function calcGaussain(mu: number, sigma2: number, x: number) {
  return (
    (1 / Math.sqrt(2 * Math.PI * sigma2)) *
    Math.exp((-0.5 * (x - mu) ** 2) / sigma2)
  );
}

const result = calcGaussain(10.0, 4.0, 10.0);

console.log(result);
