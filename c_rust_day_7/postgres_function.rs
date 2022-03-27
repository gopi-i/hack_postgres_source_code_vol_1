fn main() {

	let a: i32 = 10;
    let b: i32 = 20;
    let c: i32;
    
    c = sum(a, b);
    
    println!("{}", c);

}

fn sum(a: i32, b: i32) -> i32 {

	a+b // returning value from function
    
}
