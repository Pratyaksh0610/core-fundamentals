#include<iostream>
#include<vector>
using namespace std;

class parent{
    public:
    static int number;
    int number2 = 100;
    void greet();
    inline void inlineGreet(){
        cout<<"INLINE"<<endl;
        return;
    };
};

int parent :: number = 100;

void parent::greet(){
    cout<<"TERA BAAP"<<endl;
}


int main(){
    parent p1;
    int v[100];
    cout<<v[0]<<endl;
    p1.greet();
    return 0;
}