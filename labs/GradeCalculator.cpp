

#include <iostream>
#include <string>
#include <iomanip>
int main()
{
 //Story 1
    // Lab 1
    // Keith Eubanks
    // 2024FL COSC-1436-20005 - Programming Fundamentals
    // Fall Semester
    std::cout << "Lab 1" << std::endl;
    std::cout << "Name: Keith Eubanks" << std::endl;
    std::cout << "Course: COSC 1436 - Fall 2024" << std::endl;

    //Story 2
    std::string studentName;
    int labGrade1, labGrade2, labGrade3, labGrade4; 
    int examGrade1, examGrade2, examGrade3;
    std::cout << "Enter your name: ";
    std::getline(std::cin, studentName);
    std::cout << "Enter your 4 lab grades: " << std::endl;
    std::cout << "Lab 1: ";
    std::cin >> labGrade1;
    std::cout << "Lab 2: ";
    std::cin >> labGrade2;
    std::cout << "Lab 3: ";
    std::cin >> labGrade3;
    std::cout << "Lab 4: ";
    std::cin >> labGrade4;
    std::cout << "Enter your 3 exam grades: " << std::endl;
    std::cout << "Exam 1: ";
    std::cin >> examGrade1;
    std::cout << "Exam 2: ";
    std::cin >> examGrade2;
    std::cout << "Exam 3: ";
    std::cin >> examGrade3;

    //Story 3

    double labAverage = (labGrade1 + labGrade2 + labGrade3 + labGrade4) / 4.0;
    std::cout << "Student Name: " << studentName << std::endl;
    std::cout << "Lab Grades: " << std::endl;
    std::cout << "Lab 1: " << labGrade1 << std::endl;
    std::cout << "Lab 2: " << labGrade2 << std::endl;
    std::cout << "Lab 3: " << labGrade3 << std::endl;
    std::cout << "Lab 4: " << labGrade4 << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Lab Average: " << labAverage << std::endl;

    //Story 4

    double examAverage = (examGrade1 + examGrade2 + examGrade3) / 3.0;
    std::cout << "Exam Grades:" << std::endl;
    std::cout << "Exam 1: " << examGrade1 << std::endl;
    std::cout << "Exam 2: " << examGrade2 << std::endl;
    std::cout << "Exam 3: " << examGrade3 << std::endl;
    std::cout << "Exam Average: " << examAverage << std::endl;

    //Story 5

    double classAverage = (labAverage * 0.75) + (examAverage * 0.25);
    std::cout << "Lab Average (65%): " << labAverage << std::endl;
    std::cout << "Exam Average (20%): " << examAverage << std::endl;
    std::cout << "Class Average: " << classAverage << std::endl;

    //Story 6

    int participationGrade;
    int finalExamGrade;
    std::cout << "Enter your participation grade: ";
    std::cin >> participationGrade;
    std::cout << "Enter your final exam grade: ";
    std::cin >> finalExamGrade;
    std::cout << "Participation Grade (5%); " << participationGrade << std::endl;
    std::cout << "Final Exam Grade (10%): " << finalExamGrade << std::endl;

    




    std::exit;



   
}
