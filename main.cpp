#include <iostream>

#include "tester/tester.h"

int main() {
    Tester::execute();
    /*
    Matrix<int> result(3, 3);
    result.set(0,0,7);
    result.set(0,1,8);
    result.set(1,1,5);
    result.set(2,2,3);
    result.set(2,1,1);
    cout << "val00: " << result(0,0) << endl;
    cout << "val01: " << result(0,1) << endl;
    cout << "val11: " << result(1,1) << endl;
    cout << "val22: " << result(2,2) << endl;
    cout << "val21: " << result(2,1) << endl;
    cout << "val22: " << result(2,2) << endl;
    cout << "val11: " << result(1,1) << endl;
    cout << "***********\n";
    cout << " M1\n";
    result.print();

    Matrix<int> m2 = result*2;
    cout << "***********\n";
    cout << " M2:MULT\n";
    m2.print();


    Matrix<int> m3 = m2.transpose();
    cout << "***********\n";
    cout << " M3:TRANSP\n";
    m3.print();


    Matrix<int> m4 = result+m2;
    cout << "***********\n";
    cout << " M4:SUMA\n";
    m4.print();

    Matrix<int> m5 = m4-m2;
    cout << "***********\n";
    cout << " M5:RESTA\n";
    m5.print();
     */
    return EXIT_SUCCESS;
}

