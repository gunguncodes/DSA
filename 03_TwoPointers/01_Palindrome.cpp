/*
Topic: Two Pointers
Algorithm: 
Time Complexity: O(n)
Space Complexity:O(1) 
*/

#include<iostream>

using namespace std;

bool checkPalindrome (string word) {
    int left = 0;
    int right = word.size()-1;
    while(left < right) {
        if(word[left] == word[right]) {
            left++;
            right--;
        }
        else {
            return false;
        }
    }
    return true;
}

int main () {
    string word;
    cout<<"Enter word : ";
    cin>>word;

    bool result = checkPalindrome(word);

    if(result == true) {
        cout<<"Palindrome"<<endl;
    }
    else {
        cout<<"Not palindrome";
    }

    return 0;
}