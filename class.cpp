#include<iostream>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char level;

    void print(){
        cout<<"health is: " <<health<<endl;
    }

    //get function
    void getHealth(){
        return health;
    }
    void getLevel(){
        return level;
    }

    //set function

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }


};
int main(){

    //creation of object
    Hero ave;

    cout<<"ave health"<< ave.getHealth() <<endl;

    //dot.operator
    ave.level = 'b';

    cout<<"ave health"<< ave.getHealth() <<endl;
    cout<<"level is:"<<ave.level<<endl;

    return 0;
}