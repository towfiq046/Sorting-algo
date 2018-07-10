#include <iostream>
using namespace std;

void insetionSort(int A[], int n) {
    for(int index = 0; index < n; index++) {

        while(index > 0 && A[index + 1] > A[index]) {
            A[index] = A[index +1];
            index++;
        }
    }
    return;
}

int main() {

    int n;
    cout << "Number of elements: ";
    cin >> n;

    if(n > 100) {cout << "Not enough memory."; return -1;}
    if(n <= 0) {cout << "Not valid."; return -1;}

    int i, A[100];
    cout << "\nEnter " << n << " integers to sort--->>\n" << endl;

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    insetionSort(A, n);
    cout << "Sorted: " << endl;
    for(int index = 0; index < n; index++) {
        cout << A[index] <<" ";
    }

    return 0;
}
