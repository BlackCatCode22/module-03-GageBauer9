#include <iostream>
using namespace std;

int main(){
    cout << "It's tax season! You owe: ";
    int a = 5;
    int* p = &a;

    cout << *p << " million USD" << endl; 
    cout << "Just " << p << " Kidding" << endl;

    *p = 10;
    cout << "You owe: " << *p << " million USD" << endl;

    return 0;
}