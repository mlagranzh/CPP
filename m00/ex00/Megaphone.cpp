#include <iostream>
 
int main(int argc, char **argv)
{
    int j;
    int i;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (i = 1; i < argc; i++)
    {
        j = -1;
        while (argv[++j])
            std::cout << (char)toupper(argv[i][j]);
        // if (i != (argc - 1))
            std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}