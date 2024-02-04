#include <iostream>

int main()
{
    char inputExit = 'y';
    while (inputExit != 'x') {
        int num1, num2 = (0, 0);
        std::cout << "Write num1: ";
        std::cin >> num1;
        std::cout << "Write num2: ";
        std::cin >> num2;
        std::cout << "Write an option: p - for plus, m - for minus, s - for multiply,  d - for division: ";
        char inputCh = '\0';
        std::cin >> inputCh;
        double result = 0;
        switch (inputCh) {
            case 'p':
                result = num1 + num2;
                std::cout << "result is " << result << std::endl;
                break;
            case 'm':
                result = num1 - num2;
                std::cout << "result is " << result << std::endl;
                break;
            case 's':
                result = num1 * num2;
                std::cout << "result is " << result << std::endl;
                break;
            case 'd':
                if (num2 != 0) {
                    result = num1 / num2;
                    std::cout << "result is " << result << std::endl;
                }
                else {
                    std::cout << "Num2 = 0, cant divide by 0" << std::endl;
                }
                break;
            default:
                result = num1 + num2;
                std::cout << "Wrong option" << std::endl;
                break;
        }
        std::cout << "Do you want to use a calc again?" << std::endl << "Write \"x\" to stop a program, or smth to continue: ";
        std::cin >> inputExit;
    }
}