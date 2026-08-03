#include <iostream>

int main() {
    
    char op;
    double num1, num2, resultado;

    std::cout <<"########## CALCULADORA ##########" << std::endl;

    std::cout << "Ingrese (+ - * /): ";
    std::cin >> op;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            resultado = num1 + num2;
            std::cout << "Resultado: " << resultado << std::endl;
            break;
        case '-':
            resultado = num1 - num2;
            std::cout << "Resultado: " << resultado << std::endl;
            break;
        case '*':
            resultado = num1 * num2;
            std::cout << "Resultado: " << resultado << std::endl;
            break;
        case '/':
            if(num2 != 0) {
                resultado = num1 / num2;
                std::cout << "Resultado: " << resultado << std::endl;
            } 
            else {
                std::cout << "Error: Division por cero." << std::endl;
            }
            break;
        default:
            std::cout << "Operacion invalida." << std::endl;
    }
    
    std::cout <<"#################################" << std::endl;

    return 0;
}
