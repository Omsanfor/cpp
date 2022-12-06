#include <iostream>

int main(int argc, char *argv[]) {

    int i = 1;
    int j = 0;

    if (argc > 1)
        while (i < argc) {
            j = 0;
            while (j < (strlen(argv[i]))){
                std::cout << (char) std::toupper(argv[i][j]);
                j++;
            }
            i++;
        }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}
