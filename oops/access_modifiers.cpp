#include <iostream>
using namespace std;

class parent;

class grandChild
{
public:
    void greet(parent &p1);
};

class parent
{
protected:
    string protectedGreeting = "protected";

private:
    string greeting = "HELLO";

public:
    static int count;
    void greet()
    {
        cout << greeting << endl;
        cout << protectedGreeting << endl;
        return;
    }
    friend void grandChild::greet(parent &p1);
    friend void outsideGreet(parent &p);
};

void grandChild::greet(parent &p1)
{
    cout << "YO" << endl;
}

int parent::count = 0;

class child : public parent
{
public:
    void childGreet()
    {
        cout << protectedGreeting << endl;
    }
};

void outsideGreet(parent &p)
{
    cout << "OUTSIDE " << p.greeting << endl;
    cout << "OUTSIDE " << p.protectedGreeting << endl;
    return;
}

int main()
{
    parent p1;
    child c1;
    // p1.greet();
    // outsideGreet(p1);
    // c1.childGreet();
    cout << parent::count << endl;
    return 0;
}