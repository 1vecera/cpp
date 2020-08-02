#include <iostream>
using namespace std;

//function that multiplies number by 2
char GenerateRandomLetters() {


    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    char randomString;

    randomString = letters[rand() % 26];
    for(int i=0;i<25;i++){
        randomString = randomString << letters[rand() % 26];
    }
    return randomString;
}
int main(){
    char testString;
    testString = GenerateRandomLetters();

    cout << testString;


    return 0;
}