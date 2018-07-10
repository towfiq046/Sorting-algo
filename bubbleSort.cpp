#include <iostream>
using namespace std;

void bubbleSort(int A[], int n) {
    for(int k = 0; k < n - 1; k++) {
            int flag = 0;

        for(int i = 0; i < (n - k - 1); i++) {
            if(A[i] > A[i + 1]) {

                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;

                flag = 1;
            }
        }
        if(flag == 0) {break;}
    }
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

    bubbleSort(A, n);
    cout << "Sorted: " << endl;

    for(int i = 0; i < n; i++) {
        cout << A[i] <<" ";
    }

    return 0;
}
