fn main() {

	let emp_id:i32; // lifetime starting point for `emp_id`
    
    {
    	let assign_id:i32 = 101; // lifetime starting point for `assign_id`
        emp_id = &assign_id;
    }// lifetime ending point for `assign_id`
    
    println!("Employee id: {}", emp_id);
    
}// lifetime ending point for `emp_id`
