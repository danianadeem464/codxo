// login n registration system
#include <iostream>
#include <string>
#include <map>

std::map<std::string, std::string> users;

void registerUser() {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;
    users[username] = password;
    std::cout << "User registered successfully!" << std::endl;
}

void loginUser() {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;
    if (users.find(username) != users.end() && users[username] == password) {
        std::cout << "Login successful!" << std::endl;
    } else {
        std::cout << "Invalid username or password!" << std::endl;
    }
}

int main() {
    int choice;
    while (true) {
        std::cout << "1. Register" << std::endl;
        std::cout << "2. Login" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                return 0;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    }
    return 0;
}
