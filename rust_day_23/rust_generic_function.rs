fn display<T>(a:T) -> T {	
	a
}

fn main() {

	let a: i32 = 10;

    println!("Display integer {}", display(a));

    let x: f32 = 10.0;

    println!("Display float {}", display(x));

}
