#include <iostream>
using namespace std;

void merge(int left, int right, int A) {
    //elementINleft = sizeof(A)
    //elementINright = sizeof(A)

    int smlindexleft = 0, smlindexright  = 0, positionTofill = 0;

    while(smlindexleft < elementINleft && smlindexright < elementINright) {
        if()
    }

}

void mergeSort(int A) {
    int n = sizeof(A);

    if(n < 2) {
        return;
    }

    mid = n\2;
    left = sizeof(mid);
    right = sizeof(n - mid);

    for(int i = 0; i < mid; i++) {
        left[i] = A[i];
    }
    for(i = mid; mid < n - 1; i++) {
        right[i - mid] = A[i];
    }
}

int main() {

    int n;
    cout<< "How many number you want to sort? ";
    cin>> n;

    if(n > 100) {cout << "Not enough memory."; return -1;}
    if(n <= 0) {cout << "Not valid."; return -1;}

    int A[100];

    for(int i = 0; i < n; i++) {
        cin>> A[i];
    }
}




