#include<iostream>
using namespace std;

int main(){
    int length = 0, breath =0;
    cin>>length>>breath;

    int area = length * breath;
    int peri = 2*(length +breath);

    cout<<"Area:"<<area<<endl<<"perimeter:"<<peri<<endl;
    return 0;
}