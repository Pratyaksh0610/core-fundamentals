#include <iostream>
using namespace std;

class parent
{
public:
    virtual parent *create()
    {
        return new parent();
    }

    virtual void greet()
    {
        cout << "Parent" << endl;
    }
    virtual parent *clone()
    {
        return new parent(*this);
    }
};

class child : public parent
{
public:
    parent *create()
    {
        return new child();
    }
    parent *clone()
    {
        return new child(*this);
    }
    void greet()
    {
        cout << "CHILD" << endl;
    }
};

int main()
{
    parent p1 ;
    // parent p2 = child;
    parent* p3 = p1.clone();
    // parent* p4 = p2.clone();
    p3->greet();
    // p4->greet();
    return 0;
}