fn main() {
    let data = Box::new(vec![1, 2, 3, 4, 5]); // data owns the heap-allocated vector
    print_data(&data); // borrowed reference
    // Ownership ensures data is freed automatically when it goes out of scope
}

fn print_data(data: &Vec<i32>) {
    for val in data {
        println!("{}", val);
    }
}
