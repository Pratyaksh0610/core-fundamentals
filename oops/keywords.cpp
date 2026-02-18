#include<iostream>
using namespace std;

class parent {
    public:
    // virtual void greet() final{ cannot override bcoz of final keyword
    //     cout<<"Parent"<<endl;
    // }
};

class child: public parent{
    public:
    void greet(){
        cout<<"CHILD"<<endl;
    }
};

int main(){
    return 0;
}