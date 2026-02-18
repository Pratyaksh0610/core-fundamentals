#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

struct vehicle{
    int wheels = 4;
};

class transport{
    //private by default
    // public:
    int wheels = 4;
};

int main(){
    vehicle a;
    transport b;
    cout<<a.wheels<<" "<<b.wheels<<endl;
    return 0;
}