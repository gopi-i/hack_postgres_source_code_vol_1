fn main() {

	// main-line-1
	let _str: String = String::from("String Object");
    
    // main-line-2 (modified)
    let (_str, _str_length): (String, usize) = calculate_string_length(_str);
    
    // main-line-3
    println!("{}{}", _str, _str_length);
    
}

fn calculate_string_length(_s: String) -> (String, usize) {
    let _s_len: usize = _s.len();
	(_s, _s_len)
}
