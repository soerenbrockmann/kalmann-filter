use core::f32::consts::PI;

struct Values {
    mean: f32,
    variance: f32,
}

fn main() {
    let result: f32 = calc_gaussain(10.0, 4.0, 10.0);
    println!("let x = {}f32", result);

    let update_values: Values = update_new_mean_and_variance(10.0, 8.0, 13.0, 2.0);
    println!("update newMean = {}f32", update_values.mean);
    println!("update newVar = {}f32", update_values.variance);

    let predict_values: Values = predict_new_mean_and_variance(update_values.mean, update_values.variance, update_values.mean, update_values.variance);
    println!("predict newMean = {}f32", predict_values.mean);
    println!("predict newVar = {}f32", predict_values.variance);
}


fn calc_gaussain(mu: f32, sigma2: f32, x: f32) -> f32
{
    return (1.0 / (2.0 * PI * sigma2)).sqrt() * ((-0.5 * (x - mu)).powf(2.0) / sigma2).exp();
}


fn update_new_mean_and_variance(mean1: f32, var1: f32, mean2: f32, var2: f32) -> Values
{
    let values = Values {
        mean: (1.0 / (var1 + var2)) * (var2 * mean1 + var1 * mean2),
        variance: 1.0 / (1.0 / var1 + 1.0 / var2),
    }; 
    return values;
}

fn predict_new_mean_and_variance(mean1: f32, var1: f32, mean2: f32, var2: f32) -> Values
{
    let values = Values {
        mean: mean1 + mean2,
        variance: var1 + var2,
    }; 
    return values;
}



