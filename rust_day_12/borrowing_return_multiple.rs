fn main() {

	//main-line-1
	let _str: String = String::from("String Object");
    
    //main-line-2
    let _str_length: usize = calculate_string_length(&_str);
    
    //main-line-3
    println!("{} - {}", _str, _str_length);
    
}

fn calculate_string_length(_s: &String) -> usize {

	let _s_len: usize = _s.len();
    
    _s_len
    
}
