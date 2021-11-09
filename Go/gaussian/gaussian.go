package main

import (
	"fmt"
	"math"
)

func main() {
	result := calcGaussain(10.0, 4.0, 10.0);
	fmt.Println(result)
}

func calcGaussain(mu float64, sigma2 float64 , x float64) float64 {
	return (1 / math.Sqrt(2 * math.Pi * sigma2)) * math.Exp(math.Pow(-0.5 * (x - mu), 2) / sigma2)
}
  
