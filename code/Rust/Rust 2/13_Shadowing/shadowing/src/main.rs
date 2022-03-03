fn main() {
    // Shadowing

    let  x =10;

    {
       let x = 15;
       println!("value of x shadowed = {}",x);
    }
    println!("Value of x = {}",x);

    let x = "Hello";
    println!("x = {}",x);

    let x = true;
    println!("x = {}",x);
}

