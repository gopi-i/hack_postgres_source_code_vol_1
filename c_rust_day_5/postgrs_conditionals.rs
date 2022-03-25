fn main() {
	
    let argc: i32 = 1;
    
    // Conditional check using if
    if argc < 0 {
    	println!("{}","No args are supplied.");
    }
    
    // Conditional if - else
    if argc < 0 {
    	println!("{}","No args are supplied.");
    } else {
    	println!("{}","Args are supplied.");
   }
   
   // Conditional if - else if - else
    if argc == 0 {
    	println!("{}","Zero args are supplied.");
    } else if  argc == 1 {
    	println!("{}"," One arg is supplied.");
   } else {
    	println!("{}","More than one arg is supplied.");
   }

}
