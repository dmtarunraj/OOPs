#include<bits/stdc++.h>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Animal is speaking"<<endl;
    }
};

class Dog : public Animal{


};

int main(){

     Dog d;
    d.speak();

    return 0;
}