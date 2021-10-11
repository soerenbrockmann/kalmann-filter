use core::f32::consts::PI;

fn main() {
    let result: f32 = calc_gaussain(10.0, 4.0, 10.0);
    println!("let x = {}f32", result);
}


fn calc_gaussain(mu: f32, sigma2: f32, x: f32) -> f32
{
    return (1.0 / (2.0 * PI * sigma2)).sqrt() * ((-0.5 * (x - mu)).powf(2.0) / sigma2).exp();
}
