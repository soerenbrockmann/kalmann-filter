class Values
{
    public Double mean; 
    public Double var;  
    public int    BirthYear; 
 };

public class NewMeanAndVariance {
    public static void main(String[] args) {
      Values values = update(10.0, 8.0, 13.0, 2.0);
      System.out.println("\n newMean: " + values.mean + "\n newVar: " + values.var);

    }

    static Values update(double mean1, double var1, double mean2, double var2){
      Values values = new Values();  
      values.mean = (1 / (var1 + var2)) * (var2 * mean1 + var1 * mean2);
      values.var = 1 / (1 / var1 + 1 / var2);
      return values;
    }
  }
