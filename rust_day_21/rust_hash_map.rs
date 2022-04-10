// Using hash map from standard library
use std::collections::HashMap;

fn main() {

    // Create mutable hash map.
    let mut hash_map = HashMap::new();

    // Create key value pairs to store in hash map.
    let emp_101_id: i32 = 101;
    let emp_101_name: String = String::from("John");

    // Storing in hash map
    hash_map.insert(emp_101_id, emp_101_name);

    /*
    * Note: After inserting `emp_101_id`, `emp_101_name` 
    * into hash map, we can't use those variables further 
    * because of ownership system rules. Just like vector, 
    * hash map also stores data in heap.
    */

    // Traversing hash map
     for (key, value) in &hash_map {
            println!("{}: {}", key, value);
        }
}
