fun main(){  
    var result: Double = calcGaussain(10.0, 4.0, 10.0);
    println(result)
}

fun calcGaussain(mu: Double, sigma2: Double, x: Double): Double {
      return (1 / Math.sqrt(2 * Math.PI * sigma2)) * Math.exp(Math.pow(-0.5 * (x - mu), 2.0) / sigma2);
    }