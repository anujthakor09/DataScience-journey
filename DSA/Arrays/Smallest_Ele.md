# Problem:
Largest Element in Array

# Platform:
LeetCode

# Difficulty:
Easy

# Approach:
Linear Traversal

# Time Complexity:
O(n)

# Space Complexity:
O(1)

# Code:
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
  int arr[10];
  cout<<"enter the elements of arr"<<endl;
  for(int i=0;i<10;i++){
    cin>>arr[i];
  }
  int min = INT_MAX;
  for(int i=1;i<10;i++){
    if(arr[i]<min){
      min = arr[i];
    }
  }
  cout<<"the Smallest number in arr is "<<min<<endl;
  return 0;
}
