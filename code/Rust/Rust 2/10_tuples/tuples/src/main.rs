fn main() {
    // Tuples

    let ex_tup = (1,2,3,4,5);

    println!("{}",ex_tup.2);

    // multiple types

    let se_tup = (1,"Hello",true,1.8);

    
    println!("{}",se_tup.2);
    
    // Nested tuple

    let nest_tup =(1,2,3,(4,5,6));

    println!("last value in nest {}",nest_tup.3.2);
    println!("first value in nest {}",(nest_tup.3).0);
    

    // Destructing 

    let sam_tup = (4,1.2,"Hello");
    let (a,b,c) = sam_tup;
    

    println!("First value : {}",a);
    println!("Second value : {}",b);
    println!("Third value : {}",c);
}


