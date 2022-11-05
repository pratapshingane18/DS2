#include<iostream>
using namespace std;

int main(){


    // c way of allocating Heap memory;;
    // int *p;
    // p = (int *) malloc(5*sizeof(int));
    // p[0] = 10;
    // p[1] =23;
    // p[2] = 67;
    // p[3] = 21;
    // p[4] = 45;

    int *p;
    p = new int[5]; //dynamic allocation
    p[0] = 10;
    p[1] =23;
    p[2] = 67;
    p[3] = 21;
    p[4] = 45;


    for(int i = 0; i <5; i++){
        cout<<p[i]<<endl;
    }


    // When we finished using memory we should delete it;
    delete [ ] p;  // Delete array like this OR

    // delete p; // If it is a simple variable;;

    //free(p);  // Use in c language;

    // If the program is very small we may skip deallocation

    // In project dellocation matters
     return 0;
}