#include<iostream>
using namespace std;

class rect{
private:
    int length;
    int breath;

public:

    rect(){
        length =0;
        breath =0;
    }

    rect(int l, int b){
        length = l;
        breath = b;

    }

    int area(){
        return length*breath;
    }

    int peri(){
        return 2*(length*breath);
    }

    void setLength(int l){
        length = l;

    }

    void setBreath(int b){
        breath =b;
    }

    int getLength(){
        return length;
    }

    int getBreath(){
        return breath;
    }

    ~rect(){
        cout<<"Object REct is being Destructed"<<endl;
    }

};


int main(){
    rect r(10,5);

    cout<<"Area:"<<endl<<r.area()<<endl;
    cout<<"Perimeter:"<<endl<<r.peri()<<endl;


    return 0;
}