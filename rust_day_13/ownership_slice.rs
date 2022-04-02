
fn main() {

	let _str: String = String::from("John Doe");
    
    let _str_slice: &str = send_first_letter_first_name(&_str[0..4]);
    
    println!("{}", _str_slice);
    
}

fn send_first_letter_first_name(_s: &str) -> &str {
    
    &_s[0..1]
    
}
