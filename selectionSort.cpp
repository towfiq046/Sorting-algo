#include <iostream>
using namespace std;

int findindexOfMax(int A[], int start, int end) {
    int i, currMaxIndex = start;

    for(i = start; i < end; i++) {
        if( A[i] >= A[currMaxIndex]) {
            A[currMaxIndex] = A[i];
        }
    }

    return currMaxIndex;
}

void swap(int A[], int index1, int index2) {

    int temp;
    temp = A[index1];
    A[index1] = A[index2];
    A[index2] = temp;

    return;
}


int main() {

    int n;
    cout << "How many int number to sort: ";
    cin >> n;

    if(n > 100) { cout << "Too many numbers!"; return -1;}
    if(n <= 0) {cout << "Enter valid input."; return -1;}

    int count, A[100];
    cout << "\nEnter " << n << " ints to sort--->>" << endl;

    for(count = 0; count < n; count++) {
        cin >> A[count];
    }

    int currTop, currMaxIndex;
    for(currTop = 0; currTop < n; currTop++) {
        currMaxIndex = findindexOfMax(A, currTop, n);
        swap(A, currTop, currMaxIndex);

        cout << A[currMaxIndex] << " ";
    }

}
