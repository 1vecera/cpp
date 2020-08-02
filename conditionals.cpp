#include <iostream>
#include <string>

using namespace std;

int main(){
    int x;
    cout<< "Give  a number for x ";
    cin>> x;

    if(x == 5){
        cout << "Variable x has value " << x << " which is equal to 5" <<endl;
    }
    else if ((x % 2)==0)
    {
    cout << "Variable x is an odd number"<< endl;
        }

    else{
        cout << "Variable x has value " << x << " not equal to 5" <<endl;
    }

    switch (x)
    {
    case 5:
        cout << "Yes, again, your number is five." << endl;
        break;
    case 7:
        cout << "Lucky seven for you mate" << endl;
    default:
        cout << "Your number is not 5 or 7" <<endl;
        break;
    }


    return 0;

}