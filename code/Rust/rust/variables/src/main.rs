fn main() {

    // immutable variable

    let x = 5; 
    println!("{}",x);


    //Immutable

    let mut y = 6;
    println!("{}",y);
    y=7;
    println!("{}",y);

    //constant

    const LIMIT_PERCENT: u32 = 100;

    println!("Max score = {} ",LIMIT_PERCENT);

    // Shadow Variable

    let a = 1;
    println!("The value of a {}",a);
    let a = a + 1;
    println!("The value of a {}",a);
    
    // Example

    let o: i32 = 5;
    println!("The value of o {} ",o);

    let g: bool =true;
    println!("The value of g {}",g);

    let mut p: i32 = 3;
    println!("The value of p {}",p);
    p = 5;
    println!("The value of p {}",p);

    let k: i32 = 6;
    println!("The value of k {}",k);

    let k: i32 = k + 1;
    println!("The value of k {}",k);

    const NAME: &str ="Mike";
    println!("Name constant {}",NAME);
    





}
