/*

sort012

https://www.naukri.com/code360/problems/sort-0-1-2_631055

Problem statement
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Note :
Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.

Constraints :
1 <= T <= 10
1 <= N <= (5 * (10 ^ 5))
0 <= ARR[i] <= 2

Where 'N' is the size of the given array/list.
And, ARR[i] denotes the i-th element in the array/list.

Time Limit: 1sec 

Sample Input 1 :
2
6
0 1 2 2 1 0
7
0 1 2 1 2 1 2
Sample Output 1 :
0 0 1 1 2 2
0 1 1 1 2 2 2
Sample Input 2 :
2
7
2 2 2 1 1 1 0
6
2 1 2 0 1 0
Sample Output 2 :
0 1 1 1 2 2 2
0 0 1 1 2 2

*/

#include<iostream>
// #include <fstream>
using namespace std;

void sort012(int *arr, int n)
{

    int left=0,right=n-1;

    // cout<<" Before  ";
    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<" ---------------->  ";
    while(left<right){
        if(arr[left]>arr[right]){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else{
            left++;
        }
    }

    while(right<n){
        if(arr[left]>arr[right]){
            swap(arr[left],arr[right]);
        }
        right++;
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {2,2,1,1,1,0,0,0,0};
    sort012(arr,9);
    
    int n = 6;
    int arr1[n]= {0,1,2,2,1,0};
    sort012(arr1,n);

    n = 6;
    int arr2[n]= {0,1,2,1,2,1,2};
    sort012(arr2,n);


    return 0;
}

/*
0 1 2 2 1 0
i         j

i=0
j=n-1

if(arr[i]>arr[j]){
    swap(arr[i],arr[j]);
}
i++;
j--;


2
6
0,1,2,2,1,0

i = 0
j = 5

i==j
i = 1
j = 5

1>0 

i = 2
j = 4

0 0 2 2 1 1
0 0 1 2 2 1





7
0,1,2,1,2,1,2

*/