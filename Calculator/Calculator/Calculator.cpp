//
//  Calculator.cpp
//  Calculator
//
//  Created by Tiago Vinhanova on 16/04/2023.
//

#include "Calculator.hpp"

Calculator::Calculator() {
    
}

double Calculator::Calculate(int n1, char op, int n2) {
    switch (op) {
        case '+':
            return Sum(n1, n2);
            break;
        case '-':
            return Sub(n1, n2);
            break;
        case '/':
            return Div(n1, n2);
            break;
        case '*':
            return Mul(n1, n2);
            break;
        default:
            return -1;
    }
}

double Calculator::Sum(int n1, int n2) {
    return n1 + n2;
}
double Calculator::Sub(int n1, int n2) {
    return n1 - n2;
}
double Calculator::Div(int n1, int n2) {
    return n1 / n2;
}
double Calculator::Mul(int n1, int n2) {
    return n1 * n2;
}
