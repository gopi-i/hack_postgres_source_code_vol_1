fn main() {


	/*
    * Strings in rust categorized as string literals 
    * and string objects.
    * String literals are static in nature.
    * String Objects are mutable.
    * Strings don't follow index notation to retrieve character
    * from string.
    */
    
    // String literals type &str or &'static str
	let _string_literal: &'static str = "str";
    println!("{}", _string_literal);
    
    
    // String object
    let _string_object_t1 = String::new(); // creates empty string
    let _string_boject_t2 = String::from("str");  // from string literal
    
    println!("{} and {}", _string_object_t1, _string_boject_t2);
    
    
}
