#include<bits/stdc++.h>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char *name = new char[100];
    char level;
    static int timeToComplete;
    //deafault constructor, 
    //when the user create his own constructor the default constructor will removed from the compiler.
    Hero(){
        cout<<"Default Constructor Called"<<endl;  
        //name = new char[100];
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

    // // copy constructor
    // Hero(Hero& temp) {
    // cout << "Copy Constructor Called" << endl;
    // this->health = temp.health;
    // this->level = temp.level;
    // }

     // copy constructor
    Hero(Hero& temp) {

        char *ch = new char(strlen(temp.name)+1);
        strcpy(ch,temp.name);
        this->name = ch;

    cout << "Copy Constructor Called" << endl;
    this->health = temp.health;
    this->level = temp.level;
    }

    void print(){
        cout<<"Name: "<<this->name<<endl;
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

    void setlevel(char ch){
        level = ch;
    }    

    void setName(char name[]){
        strcpy(this->name,name);
    }

    // static int random(){
    //     return timeToComplete;
    //     //cout<<timeToComplete<<endl;
    // }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
    
};

int Hero::timeToComplete = 5;

int main(){

    cout<<Hero::timeToComplete<<endl;

    // Hero a;
    // cout<<a.timeToComplete<<endl; //bad practice for accessing static keyword

    // Hero b;
    // b.timeToComplete = 10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;


    // //static
    // Hero a;

    // //dynamic
    // Hero *b = new Hero();
    // delete b;
  

    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setlevel('A');
    // //char name[] = "John";
    // hero1.setName("John");

    // //hero1.print();

    // //use default copy constructor - shallow copy
    // Hero hero2 = hero1;
    // // hero2.print();

    // hero1.name[0] = 'T';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;
    // hero1.print();
    // hero2.print();

    return 0;
}