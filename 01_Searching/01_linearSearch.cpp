/*
Topic: Searching
Algorithm: Linear Search
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int>& arr, int target) {
    for(int i = 0;i<arr.size();i++) {
      if(arr[i] == target) {
        return i;
      }
    }
     return -1;
}

int main() {
  int n, target;

  cout<<"Enter size of elements : ";
  cin>>n;

  vector<int>arr(n);

  cout<<"Enter "<<n<<" elements:"<<endl;
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }

  cout<<"Enter the element to be found : ";
  cin>>target;

  int result = linearSearch(arr, target);

  if(result != -1) {
    cout<<"Element found at index : "<<result<<endl;
  }
  else {
    cout<<"Element not found";
  }

  return 0;
}


