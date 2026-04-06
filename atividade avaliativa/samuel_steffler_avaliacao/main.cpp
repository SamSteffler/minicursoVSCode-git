#include <iostream>

// exemplo de programa
int main(int argc, char* argv[]) {
    if (argc < 2 || argc >= 3) {
        std::cerr << "Usage: " << argv[0] << " argv[1]" << std::endl;
        return 1;
    }
    std::cout << "argv[0]: " << argv[0] << std::endl;
    std::cout << "argv[1]: " << argv[1] << std::endl;
    return 0;
}
