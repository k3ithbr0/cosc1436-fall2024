

#include <iostream>
#include <string>
int main()
{
 // Story 1
    std::cout << "Lab 1" << std::endl;
    std::cout << "Keith Eubanks" << std::endl;
    std::cout << "COSC 1436 Fall 2024" << std::endl;

    //Story 2
    std::string studentName;
    int lab1, lab2, lab3, lab4;
    int exam1, exam2, exam3;

    std::cout << "Lab 1" << std::endl;

    std::cout << "Keith Eubanks";
    std::getline(std::cin, studentName);

    std::cout << "65";
    std::cin >> lab1;
    std::cout << "8";
    std::cin >> lab2;
    std::cout << "34";
    std::cin >> lab3;
    std::cout << "35";
    std::cin >> lab4;

    std::cout << "38";
    std::cin >> exam1;
    std::cout << "54";
    std::cin >> exam2;
    std::cout << "34";
    std::cin >> exam3;

    std::cout << "Keith Eubanks" << studentName << std::endl;
    std::cout << "65" << lab1 << "8" << lab2 << "34" << lab3 << "35" << lab4 << std::endl;
    std::cout << "38" << exam1 << "54" << exam2 << "34" << exam3 << std::endl;





}
