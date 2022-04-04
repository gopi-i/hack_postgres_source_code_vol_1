fn main() {

	// rust-main-line-1
	let number: i32 = 10;
    
    // rust-main-line-2
    let refernce_to_number: &i32 = &number;
    
    // rust-main-line-3
    println!("Rust placed {} in memory location at address {:p}", number, refernce_to_number);
    
    }
