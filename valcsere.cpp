#include <iostream>

int main(){
int a = 2018;
int b = 42;

std::cout << "a: " << a << " " << "b: " << b << std::endl;

a = b - a;
b = b - a;
a = b + a;

std::cout << "a: " << a << " " << "b: " << b << std::endl;

a = b - a;
b = b - a;
a = b + a;

std::cout << "a: " << a << " " << "b: " << b << std::endl;

return 0;
}
