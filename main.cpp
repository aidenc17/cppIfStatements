#include <iostream>

int main() {
    //if statements

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "You are too old!" << '\n';
    }else if (age >= 18) {
        std::cout<< "You are 18 or older!" << '\n';
    }else if (age < 0){
        std::cout << "You haven't even been born yet!" << '\n';
    }else {
        std::cout << "You are younger than 18" << '\n';
    }


    int month;
    std::cout << "Enter the month number: ";
    std::cin >> month;

    switch (month) {
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default:
            std::cout << "Please only enter a month number (1-12)";



    }

    return 0;
}