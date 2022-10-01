#include<bits/stdc++.h>
using namespace std;

struct mem{
private:
    int x=10;
public:
    void fun(int n){
        x=n;

    }
    void foo(){
    cout<<x;
    }
};

int main(){
    mem m;
    m.foo();

    return 0;
}
