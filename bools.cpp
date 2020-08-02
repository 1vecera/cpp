#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    std::cout << true << endl;
    cout << "True OR False: " << (true || false) << endl;
    cout << "True AND False: " << (true && false) << endl;
    cout << "Five is not equal to seven: " << !(5==7) << endl;

    bool thebool = true;
    int five = 5;

    thebool= 4;
    cout << "Forced boolean to be five is equal to: "<< thebool <<endl;
    bool theBool2 = -0.3;
    cout << "Wrong bool assignment from the get go:" << theBool2 <<endl;

    return 0;
}


