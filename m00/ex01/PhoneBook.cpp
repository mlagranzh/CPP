#include "PhoneBook.hpp"

int main()
{
    std::string command;
    PhoneBook PhoneBook;
    int index;
    int i;

    i = -1;
    while (1)
    {
        std::cout << "Введите команду: ";
        std::cin >> command;
        if (command == "ADD")
        {
            i++;
            PhoneBook.contact[i%8].add();
            PhoneBook.contact[i%8].index = i%8;
            std::cout << "SUCCSESS!" << std::endl;
        }
        else if (command == "SEARCH")
        {
            for (int j = 0; j < 4 && !PhoneBook.contact[j].last_name.empty(); j++)
            {
                if (PhoneBook.contact[j].first_name.size() > 10)
                {
                    PhoneBook.contact[j].first_name.resize(9);
                    PhoneBook.contact[j].first_name.resize(10, '.');
                }
                std::cout << std::setw(10) << PhoneBook.contact[j].index << "|";
                std::cout << std::setw(10) << PhoneBook.contact[j].first_name << "|";
                std::cout << std::setw(10) << PhoneBook.contact[j].last_name << "|";
                std::cout << std::setw(10) << PhoneBook.contact[j].nickname << std::endl;
            }
            std::cout << "Введите индекс: ";
            std::cin >> index;
            if (index > i)
                std::cout << "Такого индекса не существует!" << std::endl;
            else
                PhoneBook.contact[index].search();
        }
        else if (command == "EXIT")
        {
            exit(0);
        }
    }
    return 0;
}