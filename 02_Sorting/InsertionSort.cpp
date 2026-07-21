/*
Topic: Sorting
Algorithm: Insertion Sort
Worst Time Complexity: O(n^2)
Best Time Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr, int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void display(vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> arr(n);

    cout << "Enter "<< n <<" elemnts:\n";

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout<<"Sorted Array: ";
    display(arr);

    return 0;
}