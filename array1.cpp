#include<iostream>
using namespace std;

int main()
{
    int A[5];
    A[0] =10;
    A[1] = 15;
    A[2] = 20;

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n", A[2]);

    //initializing an array

    int B[5] = {1,2,3,4,5};


    // printing all the element in an array
    for(int i =0; i < 5; i++){
        cout<<B[i]<<endl;
    }
    // Initilize without declaring size
    int C[] = {3,2,1};

    int D[10] = {9,8,7,6,5,4,3};
    cout<<D[8]<<endl; // It return if there is not value at certain position


    // Using for each loop to display the values..

    for(int x: D){
        cout<<x<<endl;
    }

    // Taking size of an array as an input:
    cout<<"Enter Size"<<endl;
    int size;
    cin>>size;

    int arr[size] = {1,2,3,4};

    cout<<arr[1]<<endl;

    for(int i = 0; i <size; i++){
        cout<<arr[i]<<endl;
    }




    return 0;
}