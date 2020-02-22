#include <iostream>


int foo(int* ptr, int x)
{
    int y = 2;
    ptr = &x;

    return y;
}



int main()
{
    int num = 4, y = 0;
    int* ptr = &num;

    y = foo(ptr, num);

    std::cout << "X value is: " << *ptr << std::endl;
    std::cout << "Y value is: " << y << std::endl;
}
