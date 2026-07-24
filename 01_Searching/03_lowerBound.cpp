#include <iostream>
#include<vector>

using namespace std;

int lowerBound(vector<int> & arr, int target) {
    int low = 0;
    int high = arr.size()-1;
    int ans = arr.size();

    while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] >= target) {
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
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

  int result = lowerBound(arr, target);

  if(result == arr.size()) {
    cout << "No Lower Bound exists";
  }
  else {
    cout << "Lower Bound Index = " << result;
  }

  return 0;
}