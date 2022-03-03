fn main() {
    // Infinite loop
    //let mut n = 0;

    //loop {
      //  n += 1;
        //println!("value is {}",n);
    //}

    //break 

    let mut x = 0;

    
    loop {
        x += 1;
        println!("value is x= {}",x);
        if x == 10{
            break;
        }

    }
        //Continue


    let mut y = 0;

    
    loop {
        y += 1;

        if y ==5 {
            continue;
        }
        
        if y == 10{
            break;
        }
        println!("value is y = {}",y);

    }
}
