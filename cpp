#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int val = 1;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            a[i][j] = val++;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
