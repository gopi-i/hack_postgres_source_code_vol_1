struct User<I,N> {

	emp_id: I,
    emp_name: N,
    
}

impl<I,N> User<I,N> {

	fn display_emp_id(&self) -> &I {
    	&self.emp_id
    }
}

fn main() {

	let emp_1: User<i32, String> = User { emp_id:100, emp_name:String::from("John") };
    
    println!("emp id is {} and emp name {}", emp_1.emp_id, emp_1.emp_name);
    
    println!("emp id is {}", emp_1.display_emp_id());
}
