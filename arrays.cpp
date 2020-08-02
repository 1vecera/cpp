#include <iostream>
// function that uses a vector to square
// every number from 0 to 49
// uses the reserve operation to save space in memory
#include <vector>
using namespace std;



double darray[4]; //Static array with definite length of characters
int arr[] = {1, 2, 3, 4};  // This is size 4.

int main(){

    for(int i = 0; i<4; i++){
        //Iterate over an array
        cout << arr[i] << endl;
    }

    cout<<endl;
    for (int item: arr){ //Looping directly over the elements
        cout << item <<endl;
    }
    cout<<endl;

    vector<int> intvector;
    intvector.reserve(50);
    for(int i=0;i<50;i++){
        intvector.push_back(i*i);
    }
    cout << intvector[10] <<endl;
}
