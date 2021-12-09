#include <iostream>
#include <regex>
#include <string>
#include "Polinomio.h"

bool validarPlaca(const std::string& );

int main(int argc, char **argv){
    if(validarPlaca(argv[1])){
        std::cout << "digito" << std::endl;
    }
    else{
        std::cout << "digitos" << std::endl;
    }
    return 0;
}

bool validarPlaca(const std::string& placa){
    const std::regex expReg("x|(\\d|-|\\+)\\d*x|(x|(\\d|-|\\+)\\d*x)(-|\\+)\\d+|(x|(\\d|-|\\+)\\d*x)\\*\\*(\\d)+|(x|(\\d|-|\\+)\\d*x)\\*\\*\\d+(-|\\+)(x\\*\\*\\d+(-|\\+))*(x|x(-|\\+)\\d+|x\\*\\*\\d+)|(x|(\\d|-|\\+)\\d*x)\\*\\*\\d+(-|\\+)(x\\*\\*\\d+(-|\\+))*\\d(\\d|x\\*\\*\\d+(-|\\+)(x\\*\\*\\d+(-|\\+))*\\d)*(x|x(-|\\+)\\d+|x\\*\\*\\d+|x\\*\\*\\d+(-|\\+)(x\\*\\*\\d+(-|\\+))*(x|x(-|\\+)\\d+|x\\*\\*\\d+))");
    return regex_match(placa, expReg);
}