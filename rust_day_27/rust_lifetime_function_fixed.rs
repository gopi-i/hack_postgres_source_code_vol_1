// main-line-0
fn main() {

		// main-line-1
		let x:i32 = 10;
        // main-line-2
        let y:i32 = 20;
        
        // main-line-3
        let z:&i32 = largest(&x,&y);
        
        // main-line-4
        println!("Largest is {}", z);
}

// 'a is used to denote lifetime and dubbed as lifetime parameter
fn largest <'a> (a:&'a i32, b:&'a i32) -> &'a i32 {

	//largest-line-1
	if a>b {
    	a
    } else {
    	b
    }
}
