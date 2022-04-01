fn main() {

	// Creating immutable string 
	let _str: String = String::from("String Object");
    
    // Creating mutable referecne to _str and causes error
   // let _str_mut_ref_1: &mut String = &mut _str;
    
    // Creating multiple immutable reference to _str
    let _str_ref_1: &String = &_str;
    let _str_ref_2: &String = &_str;
    
    // first usage of _str_ref_1(_str_ref_1's completion of life time)
    println!("{}", _str_ref_1);
    
    // Using _str_ref_1 again causes error
    //println!("{}", _str_ref_1);
    
    // Creating mutable string
    let mut _str_mut: String  = String::from("Mutable String Object");
    
    //Creating mutable reference
    let _str_mut_ref_1: &mut String = &mut _str_mut;
    
    //Creating another mutable reference causes error
   // let _str_mut_ref_2: &mut String = &mut _str_mut;
    
    //End of life time for _str_mut_ref_1
    println!("{}", _str_mut_ref_1);
    
    //Creating another mutable reference as there is no live mutable reference
    let _str_mut_ref_2:&mut String = &mut _str_mut;
    
 }
