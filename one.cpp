#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    void print(){
        cout << "Level: " << level << endl;
    }

    int getHealth(){
        return health;;
    }

    char getlevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setlevel(int ch){
        level = ch;
    }    

};

int main(){

    Hero ram;  //Static allocation
    ram.setHealth(80);
    ram.setlevel('A');
    cout<<"Level is: "<<ram.level<<endl;
    cout<<"Health is: "<<ram.getHealth()<<endl;


    Hero *b = new Hero;  //Dynamic allocation
    b->setHealth(90);
    b->setlevel('B');
    cout<<"Level is: "<<(*b).level<<endl;
    cout<<"Health is: "<<(*b).getHealth()<<endl;

    cout<<"Level is: "<<b->level<<endl;
    cout<<"Health is: "<<b->getHealth()<<endl;


    
    // ram.health = 70;
    // ram.level = 'A';
    // cout<<"Health is: "<<ram.health<<endl;
    //  cout<<"Level is: "<<ram.level<<endl;


    //cout<<"Size: "<<sizeof(h1)<<endl;


    // cout<<"Ram health is: "<<ram.getHealth()<<endl;
    // ram.setHealth(70);
    // cout<<"Ram health is: "<<ram.getHealth()<<endl;

    // cout<<"Size of ram: "<<sizeof(ram)<<endl;


    return 0;
}