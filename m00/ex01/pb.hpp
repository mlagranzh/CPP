#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void);
{
    std::cout << m_day << "/" << m_month << "/" << m_year;
}

PhoneBook::~PhoneBook(void);
{
    std::cout << m_day << "/" << m_month << "/" << m_year;
}

void PhoneBook::add();
{
    std::cout << m_day << "/" << m_month << "/" << m_year;
}

void PhoneBook::search()
{
    std::cout << m_day << "/" << m_month << "/" << m_year;
}
