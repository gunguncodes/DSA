/*
Topic: Sorting
Algorithm: Bubble Sort
Worst Time Complexity: O(n^2)
Best Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> &arr, int n) {
    for(int i = 0; i<arr.size()-1; i++) {
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void display(vector<int> &arr, int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
  int n;

  cout<<"Enter size of elements : ";
  cin>>n;

  vector<int>arr(n);

  cout<<"Enter the "<<n<<" elements:"<<endl;
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }
  bubbleSort(arr,n);

  cout<<"Sorted array";
  display(arr,n);
  
}