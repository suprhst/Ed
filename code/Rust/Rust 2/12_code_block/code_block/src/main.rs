fn main() {
    //Code block
    let x = 10;
    
    {
        let y = 15; // y only exists inside here 
        println!("Sum of {} and {} = {}",x,y,x+y);
    }

}
