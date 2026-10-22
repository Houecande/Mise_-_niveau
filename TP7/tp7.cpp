#include <iostream>
using namespace std;

int main() {
    int N = 15;
    int T[15] = {0, 0, 2, 0, 1, 3, 2, 5, 4, 1, 0, 2, 3, 1, 0};

    int maxVal = 0;
    for(int i=0; i<N; i++) {
        if(T[i] > maxVal) maxVal = T[i];
    }
 
    for(int h = maxVal; h > 0; h--) {
        for(int i = 0; i < N; i++) {
            if(T[i] >= h) cout << " * ";
            else cout << "   ";
        }
        cout << endl;
    }

    for(int i=0; i<N; i++) cout << "---";
    cout << endl;
    for(int i=0; i<N; i++) cout << " " << i << " ";
    cout << endl;

    return 0;
}