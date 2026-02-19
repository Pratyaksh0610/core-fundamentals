#include<iostream>
using namespace std;

class parent1{
    public:
    int a = 4;
};

class parent2{
    public:
    int a = 8;
};

class child: public parent1, public parent2{
    public:

};

int main(){
    child c;
    cout<<c.parent1::a<<endl;
    return 0;
}