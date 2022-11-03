#include<iostream>
using namespace std;

struct rect{
    int length;
    int breath;
    char x;
    
};
// struct rect R1 //In this way it will be a global declaration and it will be available to all


/* OR we can declare as:
struct rect{
    int length;
    int breath;
} R1, R2, R3;
*/


int main(){
    struct rect R1;
    R1.length = 10;
    R1.breath = 15;
    R1.x = 'P';
    

    cout<<sizeof(R1); // Size should have been 9 but the output size is 12 this is because it is easy for compiler to allocate 4 bytes so it will allocate 4 Bytes but only 1 Byte will be used
    cout<<endl;

    cout<<R1.length<<endl<<R1.breath<<endl<<R1.x<<endl;

    
    return 0;
}