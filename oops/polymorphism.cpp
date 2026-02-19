#include <iostream>
using namespace std;

class parent
{
public:
    virtual void greet()//adding virtual enables run-time polymorphism
    {
        cout << "PARENT" << endl;
    }
};

class child : public parent
{
public:
    void greet()
    {
        cout << "CHILD" << endl;
    }
};

int main()
{
    parent *p = new child();
    p->greet();
    return 0;
}