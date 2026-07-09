/*
Topic: Searching
Algorithm: Binary Search
Time Complexity: O(log n)
Space Complexity: O(1)
*/
#include <iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size()-1;

    while(low<=high) {
        int mid = low + (high - low) / 2;
        if(target > arr[mid] ) {
            low = mid + 1;
        }
        else if (target < arr[mid]) {
            high = mid - 1;
        }
        else {
            return mid;
        }
    }
    return - 1;
}

int main() {
  int n, target;

  cout<<"Enter size of elements : ";
  cin>>n;

  vector<int>arr(n);

  cout<<"Enter the "<<n<<" elements in a sorted manner:"<<endl;
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }

  cout<<"Enter the element to be found : ";
  cin>>target;

  int result = binarySearch(arr, target);

  if(result != -1) {
    cout<<"Element found at index : "<<result<<endl;
  }
  else {
    cout<<"Element not found";
  }

  return 0;
}