#include <iostream>
using namespace std;

void    fun()
{
    cout << "hi";
}
void fun(string name)
{
    cout << "hi " << name;
}

int main() {
    fun();
    fun("ahmed");
    return (0);
}