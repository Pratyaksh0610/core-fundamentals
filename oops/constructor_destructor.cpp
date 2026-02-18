// #include<iostream>
// using namespace std;

// class parent{
//     public:
//     int cost = 0;
//     parent(){};
//     parent(int a){
//         cost = a;
//     };
//     parent(parent &p1){//default copy constructor also exists but seizes to exist when we override
//         cout<<"COPY BITCH"<<endl;
//     };
// };

// int main(){
//     parent p1(50);//parameterized constructor
//     // cout<<p1.cost<<endl;
//     parent p2(p1);//copy constructor
//     // cout<<p2.cost<<endl;
//     parent p3;
//     p3=p2;//no copy constructor since we are overriding existing class instance and not creating anew
//     parent p4 = p3;//since new class instance is being created, copy constructor is used;
// }

#include <iostream>
using namespace std;

class A
{
private:
public:
    virtual ~A() = 0;
};

A::~A()
{
    cout << "HELLO";
}

class B : public A{
    public:
    int cost = 4;
};

int main()
{
    B *obj = new B();
    cout<<obj->cost<<endl;
    delete obj;
    return 0;
}