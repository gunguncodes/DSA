/*
Topic: Sorting
Algorithm: Selection Sort
Worst Time Complexity: O(n^2)
Best Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int> &arr, int n) {
    for(int i = 0; i<arr.size()-1; i++) {
       int minIndex = i;
       for(int j = i+1; j<n; j++) {
            if(arr[j]<arr[minIndex]) {
                minIndex = j;
            }    
       }
       swap(arr[i],arr[minIndex]);
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
  selectionSort(arr,n);

  cout<<"Sorted array : ";
  display(arr,n);
  
}