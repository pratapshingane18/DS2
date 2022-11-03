// Fixed pointers of all types

#include<iostream>
using namespace std;


struct Rect{
    int length;
    int breath;

};
int main(){
    
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rect *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    /*
    Output of the above is 
    4
    4
    4
    4
    4

    Reason: 
    Is should take different sizes like int 4 char 1 ..

    But all is taking 4 bytes
    
    Independent of data type poiter take same amount of energy;;
    */


    return 0;

}