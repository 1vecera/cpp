#include <iostream>
using namespace std;

//function that multiplies number by 2
int timestwo( int num) {
    return num *2;
}

double squareroot (double n){
    double root = n/ 2;

    for (int i=0;i <20; i++){
        root = 0.5 * (root + n / root );
       // cout << "iteration " << i<< ", Root:" << root << endl;

    }
return root;


}

void change_ValuesLocally( int inputVar){
    // "Creating local name space", pass by value
    int nextVar = inputVar *2;
    inputVar = 4;
    cout << "nextVar = " << nextVar << " inputVar = " << inputVar;
}

void change_ValuesGlobally(int &inputVar){
    //Pass by reference
inputVar = 999;
}


void add_lists(const int first[], const int second[], int total[], int length){
    //Lists are always pass by reference, const forces an error raise if we were to alter any of those variables
    int element;
    for (element = 0; element < length; element ++) {
        total[element] = first[element] + second[element];
    }
}

int main() {

    cout << "Running times two function" << endl;

    cout << "5 multiplied by 2 is " << timestwo(5) << endl;
    cout <<  squareroot(256)<< endl;
    int myVar = 10;

    change_ValuesLocally( myVar );
    cout << " myVar = " << myVar<<endl;
    change_ValuesGlobally(myVar);
    cout << "After global change, MyVar = " << myVar << endl;



    return 0;


}






