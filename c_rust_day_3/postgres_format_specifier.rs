fn main() {

    //Integer format specifiers
    let _i8: i8 = 1; // 1 byte
    let _i16: i16 = 2; // 2 byte
    let _i32: i32 = 4; // 4 byte
    let _i64: i64 = 8; // 8 byte
    let _i128: i128 = 16; // 16 byte

    println!("{}{}{}{}{}", _i8, _i16, _i32, _i64, _i128);

    //Float format specifiers
    let _f32: f32 = 4.0; // 4 bytes
    let _f64: f64 = 8.0; // 8 bytes

    println!("{}{}", _f32, _f64);

    //Character format specifiers
    let _char: char = '1'; // 4 bytes

    println!("{}", _char);

    //Bool format specifier
    let _bool: bool = true; // 1 byte

    println!("{}", _bool);

}
