#include "Harl.hpp"

int main()
{
    std::string cmd;
    Harl    object;
    std::cout << "Enter one cmd: DEBUG, INFO, WARNING, ERROR" << std::endl;
    std:: cin >> cmd;

    object.complain(cmd);
    return(0);
}