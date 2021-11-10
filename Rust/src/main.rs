use core::f32::consts::PI;

struct Values {
    mean: f32,
    variance: f32,
}

fn main() {
    let result: f32 = calc_gaussain(10.0, 4.0, 10.0);
    println!("let x = {}f32", result);

    let values: Values = update_new_mean_and_variance(10.0, 8.0, 13.0, 2.0);
    println!("newMean = {}f32", values.mean);
    println!("newVar = {}f32", values.variance);
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





