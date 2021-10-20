object Gaussian {
    def main(args: Array[String]): Unit = {
        def result = calcGaussain(10.0,4.0,10.0) 
        println(result)
    }

    def calcGaussain(mu: Double, sigma2: Double, x: Double): Double = (1 / Math.sqrt(2 * Math.PI * sigma2)) * Math.exp(Math.pow(-0.5 * (x - mu), 2) / sigma2);
      
}
