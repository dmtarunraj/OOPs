#include<bits/stdc++.h>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;
    //deafault constructor, 
    //when the user create his own constructor the default constructor will removed from the compiler.
    Hero(){
        cout<<"Default Constructor Called"<<endl;  
    }

    //Parameterised constructor
    Hero(int health){
       // cout<<"this->"<<this<<endl;
       this->health = health; 
    }

    Hero(int health,char level){
       this->health = health; 
        this->level = level;
    }

    // copy constructor
    Hero(Hero& temp) {
    cout << "Copy Constructor Called" << endl;
    this->health = temp.health;
    this->level = temp.level;
    }


    void print(){
        cout<<"Health is: "<<this->health<<endl;
        cout<<"Level is: "<<this->level<<endl;
    }

    int getHealth(){
        return health;;
    }

    void setHealth(int h){
        health = h;
    }

    char getlevel(){
        return level;
    }

    void setlevel(int ch){
        level = ch;
    }    
    
};

int main(){

    Hero suresh(20,'A');
    suresh.print();

    Hero ritish(suresh);
    ritish.print();


    //Object created statically
//     Hero ramesh(10);
//     // cout<<"Address of ramesh: "<<&ramesh<<endl;
//     // ramesh.getHealth();
//     ramesh.print();
//    //cout<<"HI"<<endl;

//     //dynamically
//     Hero *h=new Hero(20);
//     h->print();

//     Hero temp(22,'B');
//     temp.print();

    return 0;
}