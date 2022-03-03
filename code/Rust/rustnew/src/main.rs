use std::io; // uses standard io module (importing)
fn main() {
    println!("Hello, Rust");
    // Variables
    let var_one = 1;
    let y = 3.5;
    let name = "Matt";
    let boolean = true;

    println!("The statement is {}",boolean);
    println!("Hello, {}",name);
    println!("Float Value  = {}",y);
    println!("The value of variable = {}",var_one);

    // Basic math

    let sum = 1+2;
    let sub = 1-2;
    let mul = 1*2;
    let div:f64 = 1.0/2.0;
    let rem:f64= 1.0%2.0;
    println!("sum = {} sub = {} div = {} mul = {} rem = {}",sum,sub,div,mul,rem);

    //array
    let my_array =[1,2,3];

    // Tuples
    let my_tuple = ('a','b',3);

    let (dynamicx,dynamicy,dynamicz) = my_tuple; // Tuples to variables

    println!("Dynamic x = {}",dynamicx);
    println!("Dynamic y = {}",dynamicy);
    println!("Dynamic z = {}",dynamicz);
    print!("{}\n",my_array[0]);
    print!("{}\n",my_array[1]);
    print!("{}\n",my_array[2]);

    // Functions
    
    fn hello(){
        println!("Hello ")
    }

    hello();

    // Func parameters

    

    fn greet(full_name: &str){
        println!("Hello, {}",full_name);
    }
    
    greet("John Doe");

    fn add(x:i64,y:i64) {
        let k:i64 =x+y;
        println!("{}",k);
    }
    add(32,56);


    // Input 

    

    let mut input = String::new();

    println!("Enter a Value : ");

    match io::stdin().read_line(&mut input) {
        Ok(_)=> {
            println!("Input is Sucessful");
        },
        Err(e) => println!("Something went wrong {}",e)
    }

    println!("You have entered {}",input);

    //Conditional Statements IF-Else

    
    



}
