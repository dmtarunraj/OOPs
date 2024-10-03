#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Tarun"<<endl;
    }

    int  sayHello(string name, int n){
        cout<<"Hello Man "<<endl;
        return 1;
    }

    void sayHello(string name){
        cout<<"Hello "<<endl;
    }

};

int main(){

    A obj;
    obj.sayHello("Varun",10);

    return 0;
}

