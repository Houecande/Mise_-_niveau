#include <iostream>
using namespace std;

int main() {
    int L = 15, H = 5; 
  
    for(int i=0; i<L; i++) cout << "*";
    cout << endl;

    for(int i=1; i<H-1; i++) {
        for(int j=0; j<L-1-i; j++) cout << " ";
        cout << "*" << endl;
    }

    for(int i=0; i<L; i++) cout << "*";
    cout << endl;
    return 0;
}