#include<bits/stdc++.h>
using namespace std;

class A {

    public:
    void func(){
        cout<<"Inside Function 1"<<endl;
    }

};

class B{

    public:
    void func(){
        cout<<"Inside Function 2"<<endl;
    }
};

class C: public A, public B{

    // public:
    // void func3(){
    //     cout<<"Inside Function 3"<<endl;
    // }
};


int main(){

    C obj;

    //obj.func(); //error
    obj.B::func();


    return 0;
}