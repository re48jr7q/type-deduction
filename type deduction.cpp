
#include <iostream>

int getVal()
{
    return 1;
}

int main()
{
    auto val{ getVal() };
}           //val deduced to type int


