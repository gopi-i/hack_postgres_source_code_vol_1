use std::rc::Rc;

fn main(){ 

	//Create i32 data on heap using Rc<T>
    // `first_ref` is a reference pointing to the data on heap memory
    let first_ref:Rc<i32> = Rc::new(11); 
    
    // Find count of references on data 11 on heap
    println!("Count of references {}", Rc::strong_count(&first_ref));
    
    // `second_ref` is a reference to the data on heap memory
    let second_ref:Rc<i32> = Rc::clone(&first_ref); 
    
    // Find count of references on data 11 on heap
    println!("Count of references {}", Rc::strong_count(&second_ref));
    
}
