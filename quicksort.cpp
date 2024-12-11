#include <iostream>
using namespace std;

void read(int A[100], int n) {
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
}

void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int Partition(int A[], int l, int r) {
    int p = A[l];
    int i = l;
    int j = r + 1;

    while (true) {
        while (A[++i] < p) {
            if (i == r) break;
        }
        while (A[--j] > p) {
            if (j == l) break;
        }
        if (i >= j) break;
        swap(A[i], A[j]);
    }
    swap(A[l], A[j]);
    return j;
}

void QuickSort(int A[], int l, int r) {
    if (l < r) {
        int s = Partition(A, l, r);
        QuickSort(A, l, s - 1);
        QuickSort(A, s + 1, r);
    }
}

void PrintArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[100];
    read(A, n);

    cout << "Unsorted array: ";
    PrintArray(A, n);

    QuickSort(A, 0, n - 1);

    cout << "Sorted array: ";
    PrintArray(A, n);
    return 0;
}

