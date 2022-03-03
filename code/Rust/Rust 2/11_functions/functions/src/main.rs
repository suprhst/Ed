fn main() {
    // Functions 
print_num(10);

println!("{}",addition(1,5));

print_number_till(30);
}

// define function 

fn print_num(num : u32){
    for i in 1..num {
        println!("{}",i);
    }
}


fn addition(num1:u32,num2:u32)-> u32 { // "-> type" specify the type of return value
    let  sum :u32;
    sum = num1+num2;
    return sum;
    
}

// Another example 

fn print_number_till(x:u32){
    for n in 1..x{
        if is_even(n){
            println!("{} is even",n);
        }else {
            println!("{} is odd ",n);
        }
        
    }
}

fn is_even(y:u32) ->bool {
    return y%2==0;
}