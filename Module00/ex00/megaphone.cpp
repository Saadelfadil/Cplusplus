#include <iostream>

std::string toUppercase(std::string str) {
    int i = 0;
    while (i < str.length()) {
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
            i++;
        }
        else
            i++;
    }
    return str;
}

int main(int argc, char *argv[]) {
    if (argc > 1)
    {
        int i = 1;
        while (i < argc)
        {
            std::cout << toUppercase(argv[i]);
            i++;
        }
        std::cout << "\n";
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    }
}