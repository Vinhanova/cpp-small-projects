#include <iostream>
#include "Calculator.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Calculator cal = Calculator();
    double n1 = 0.0;
    double n2 = 0.0;
    char op = '+';
    
    cout << "YOOOOOO!\n";
    cout << "Write a calculation:\n";
    
    cin >> n1 >> op >> n2;
    
    double res = cal.Calculate(n1, op, n2);
    
    cout << res << endl;
    
    cout << "YOO2";
    
    return 0;
}
