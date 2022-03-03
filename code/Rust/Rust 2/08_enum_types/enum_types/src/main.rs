enum Direction {
    Up,
    Down, // gonna get eroors for the unused but its fine 
    Left,
    Right,
}
fn main() {
    let player_direction:Direction = Direction::Up;
    match player_direction {
        Direction::Up => println!("\nMoving up"),
        Direction::Down => println!("\nMoving Down"),
        Direction::Left => println!("\nMoving Left"),
        Direction::Right => println!("\nMoving Right"),
    }
}
