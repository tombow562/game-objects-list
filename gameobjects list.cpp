#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::cout << "Hello World!\n";

    std::vector<std::string> objects;
    int n1; 
    std::string input;

    // Prompt for the number of elements
    std::cout << "Enter the amount of objects in your list: ";
    std::cin >> n1;

    
    std::cout << "Enter " << n1 << " items: ";
    for (int i = 0; i < n1; ++i) {
        std::cin >> input;
        objects.push_back(input);
    }

    // Display entered items
    std::cout << "You entered: ";
    for (const std::string& name : objects) {
        std::cout << name << " ";
    }

    return 0;
}
