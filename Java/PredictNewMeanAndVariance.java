// class Values
// {
//     public Double mean; 
//     public Double var;  
//  };

public class PredictNewMeanAndVariance {
    public static void main(String[] args) {
      Values updateValues = update(10.0, 8.0, 13.0, 2.0);
      System.out.println("\n update newMean: " + updateValues.mean + "\n update newVar: " + updateValues.var);

      Values predictValues = predict(updateValues.mean, updateValues.var, updateValues.mean, updateValues.var);
      System.out.println("\n predict newMean: " + predictValues.mean + "\n predict newVar: " + predictValues.var);
    }

    static Values update(double mean1, double var1, double mean2, double var2){
      Values values = new Values();  
      values.mean = (1 / (var1 + var2)) * (var2 * mean1 + var1 * mean2);
      values.var = 1 / (1 / var1 + 1 / var2);
      return values;
    }

    static Values predict(double mean1, double var1, double mean2, double var2){
      Values values = new Values();  
      values.mean = mean1 + mean2;
      values.var = var1 + var2;
      return values;
    }
  }