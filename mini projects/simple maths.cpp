//first project



#include <iostream>
#include <cmath>

using namespace std;

int main (){
    double num1;
    double num2;
    double result;

    cout << "enter your first no: ";
    cin >> num1 ;
    
    cout << "enter your second no: ";
    cin >> num2;

    // double result= sqrt((num1*num1) + (num2*num2));
    
    result = sqrt(pow(num1 , 2)+pow(num2 , 2));
    
    cout << "your result is : " << result;

}



// #include <iostream>
// #include <cmath>

// int main() {
//     double num1, num2;
    
//     std::cout << "Enter your first number: ";
//     std::cin >> num1;

//     std::cout << "Enther your second number: ";
//     std::cin >> num2;

//      double result= hypot (num1 , num2);
//     std::cout << "your hypertonous is : " << result;

//     return 0;
// }