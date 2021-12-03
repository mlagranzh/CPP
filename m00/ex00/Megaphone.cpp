#include <iostream>
 
int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (i = 1; i < argc; i++)
    {
        j = -1;
        while (argv[i][++j])
            std::cout << (char)toupper(argv[i][j]);
    }
    std::cout << std::endl;
    return 0;
}