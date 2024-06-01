#include <string>
#include <iostream>
using namespace std;

class MyClass {

private :
    int age;
    string name;
    string last_name;
    string birth_date;

public:
    int id;
    string username;
    string get_name()
    {
        return (name);
    }
    MyClass(int a, string n, string lm, string bd)
    {
        name = n;
        age = a;
        last_name = lm;
        bd = bd;
    }

};

int main()
{
    MyClass me(21, "Soufine", "El Bouazzaoui", "21-04-2003");
    me.username = "soel-bou";
    me.id = 1;
    cout << me.get_name();
}