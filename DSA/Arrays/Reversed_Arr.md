# Problem:
Largest Element in Array

# Platform:
LeetCode

# Difficulty:
Easy

# Approach:
Two Pointer

# Time Complexity:
O(n)

# Space Complexity:
O(1)

# Code:
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10];
    cout<<"enter 10 elements of array"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int start = 0;
    int end = 9;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
   return 0; 
}
