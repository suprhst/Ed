fn main() {
    
    // For loop

    for i in 1..11 {
        println!("{}",i);
    }
// Can also be done as 
    println!("\n\n\n");

    let range = 10..20;

    for a in range {
        println!("{}",a);
    }


    // Vectors 

    let name = vec!["Adam","Abe","Mak","Macro"];

    // if done like this values cannot be accessed for vector 
    //for b in name {
    //    println!("Hello  {}",b);
    //}

    // or 
    for c in name.iter() {
        println!("Hello  {}",c);
    }

    // For enumerating the position 

    for (index,c) in name.iter().enumerate() {
        println!("{} . Hello  {}",index,c);
    }
}
