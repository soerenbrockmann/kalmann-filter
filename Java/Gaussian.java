public class Gaussian {
    public static void main(String[] args) {
      double result = calcGaussain(10.0, 4.0, 10.0);
      System.out.println(result);
    }

    static double calcGaussain(double mu, double sigma2, double x){
      return (1 / Math.sqrt(2 * Math.PI * sigma2)) * Math.exp(Math.pow(-0.5 * (x - mu), 2) / sigma2);
    }
  }

