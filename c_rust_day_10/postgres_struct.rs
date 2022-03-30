struct Employee {
	emp_id: i32,
    emp_name: String,
}

fn main() {

	//Creating immutable struct
    let emp_1 = Employee { emp_id: 101, emp_name: String::from("John")};
    
    println!("{} and {}", emp_1.emp_id, emp_1.emp_name);
    
    //Creating mutable struct
    let mut emp_2 = Employee {emp_id:0, emp_name:String::from("Dummy")};
    
    emp_2.emp_id = 102;
    emp_2.emp_name = String::from("Jane");
    
    println!("{} and {}", emp_2.emp_id, emp_2.emp_name);

}
