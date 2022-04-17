fn main() {

		let x:i32 = 10;
        let y:i32 = 20;
        
        let z:&i32 = largest(&x,&y);
        
        println!("Largest is {}", z);
}

fn largest(a:&i32, b:&i32) -> &i32 {
	if a>b {
    	a
    } else {
    	b
    }
}
