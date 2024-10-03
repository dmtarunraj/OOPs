#include<bits/stdc++.h>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Animal is speaking"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Human is speaking"<<endl;
    }

};

class Hybrid : public Animal, public Human{


};


int main(){

     Hybrid d;
     d.bark ();
    d.speak();

    return 0;
}