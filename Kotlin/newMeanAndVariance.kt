class Values
{
    var mean: Double = 0.0; 
    var variance: Double = 0.0;
 };

fun main(){  
    var values: Values = update(10.0, 8.0, 13.0, 2.0);
    println("\n newMean: " + values.mean + "\n newVar: " + values.variance)
}

fun update(mean1: Double, var1: Double, mean2: Double, var2: Double): Values {
    var values = Values();  
    values.mean = (1 / (var1 + var2)) * (var2 * mean1 + var1 * mean2);
    values.variance = 1 / (1 / var1 + 1 / var2);
    return values;
}





