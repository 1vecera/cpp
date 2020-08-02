#include <iostream>
#include <string>

using namespace std;

int main()
{
    int varM = 101;
    int *ptrX = &varM;
    int varN = varM;

    cout << "Value, M:   " << varM << endl;
    cout << "Value, N same as M:   " << varN << endl;
    cout << "Pointers X has same value as  M:   " << *ptrX << endl;

    cout << endl
         << endl
         << "Locations, M:   " << &varM << endl;
    cout << "Locations  N differs from M:   " << &varN << endl;
    cout << "Pointers X points to same locatoin as M:   " << ptrX << endl;
    cout << "Even if pointer itself is stored in a different part of memory:   " << &ptrX << endl;

    varM = 50;
    cout << "If i change varMs value to:   " << varM << endl;
    cout << "Pointers value should change as well:   " << *ptrX << endl;

    cout << endl
         << endl
         << "Playing around with null pointer" << endl;

    while (ptrX) {
        cout << "Pointer X points to:" << &ptrX << endl;
        cout<< "It has value:" << *ptrX <<endl;

        ptrX = nullptr;
        cout << "Pointer X made equal to nullptr" << endl;
        cout << "Pointer X points to:" << ptrX << endl;


    }


    return 0;
}
