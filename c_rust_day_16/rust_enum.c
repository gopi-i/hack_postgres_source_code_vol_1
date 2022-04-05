// Creating enum type
enum Weeks { 
     Sunday,
     Monday,
    } // No need of semicolon
    
fn main() {
    
    let first_week: Weeks = Weeks::Sunday;
    let second_week: Weeks = Weeks::Monday; 
    // We use match statement in rust
    // If passed expression `first_week` is matched with any patterns 
    // like `Weeks::Sunday` or `Weeks::Sunday`, it executes code after
    // `=>`
    match first_week {
	    Weeks::Sunday => { 
        println!("Its Sunday"); }
        
        Weeks::Monday => {
        println!("Its MondaY"); }
   }

       match second_week {
    	Weeks::Sunday => {
        println!("Its Sunday"); }
        Weeks::Monday => {
        println!("Its MondaY"); }
   }
    	
 }
