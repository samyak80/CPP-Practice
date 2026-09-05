#include <iostream>
namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

int main (){
    using namespace first;
    using std::cout;
    using std::string;

    string boom = "this not a boom of cpp i need to prep for jee and other exams again";
    cout << boom <<'\n';
}






// int main (){
//     int x = 0;
//     std::cout << x << '\n';
//     std::cout << first::x << '\n';
//     std::cout << second::x << '\n';
// }