#include <iostream>
using namespace std;

void selectionSort(int A[], int n) {
    for(int index = 0; index < n - 1; index++) {
        int indexofMin = index;

        for(int j = index + 1; j < n; j++) {
            if(A[j] < A[indexofMin]) {indexofMin = j;} //it changes the value use of A[] can not change value
        }                                              //condition will never be true smaller value will be assigned and doesn't change
                                                       // A[j] is checking the element
        int temp = A[index];
        A[index] = A[indexofMin];                      //indexofMin has the index of min element // swap element
        A[indexofMin] = temp;
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

    selectionSort(A, n);
    cout << "Sorted: " << endl;
    for(int indexofMin = 0; indexofMin < n; indexofMin++) {
        cout << A[indexofMin] <<" ";
    }

    return 0;
}

