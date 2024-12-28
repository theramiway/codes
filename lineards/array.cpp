#include <iostream>
using namespace std;

void read(int a[], int n);
void print(int a[], int n);

int main() {
    int n;
    int a[50];
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    read(a, n);
    print(a, n);
    return 0;
}

void read(int a[], int n) {
    for(int c = 0; c < n; c++) {
        cout << "Enter the value for a[" << c << "]: ";
        cin >> a[c];
    }
}

void print(int a[], int n) {
    for(int c = 0; c < n; c++) {
        cout << a[c] << endl;
    }
}
