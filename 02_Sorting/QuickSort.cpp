/*
Topic: Sorting
Algorithm: Quick Sort
Worst Time Complexity: O(n^2)
Best Time Complexity: O(nlogn)
Average Time Complexity: O(nlogn)
Space Complexity: O(log n)
 */

#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while(i<=high && arr[i]<=pivot) {
            i++;
        }

        while(j>=low && arr[j] > pivot) {
            j--;
        }

        if(i < j) {
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[low],arr[j]);

    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if(low >= high) {
        return;
    }
    int pivotIndex = partition(arr,low,high);

    quickSort(arr,low,pivotIndex-1);

    quickSort(arr, pivotIndex+1,high);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr,0,n-1);

    cout << "Sorted array: ";

    for(int x: arr) {
        cout <<x <<" ";
    }

    return 0;
    
}