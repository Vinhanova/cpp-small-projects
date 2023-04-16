//
//  Calculator.hpp
//  Calculator
//
//  Created by Tiago Vinhanova on 16/04/2023.
//

#ifndef Calculator_hpp
#define Calculator_hpp

#include <stdio.h>

#endif /* Calculator_hpp */

class Calculator {
    
public:
    Calculator ();
    double Calculate(int n1, char op, int n2);
    
private:
    double Sum(int n1, int n2);
    double Sub(int n1, int n2);
    double Div(int n1, int n2);
    double Mul(int n1, int n2);
};
