fn main() {

	// main-line-1
	let a:i32 = 10;
    let b:i32 = 20;
    
    // main-line-2
    let sum_closure = |a,b| { a+b };
    
    // main-line-3
    let sum:i32 = sum_closure(a,b);
    
    // main-line-4
    println!("Sum of  a and b is {}", sum);

}
