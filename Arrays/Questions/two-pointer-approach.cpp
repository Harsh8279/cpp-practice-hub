/*

sort only 0 & 1 using Two Pointer Approach

*/

#include<iostream>
using namespace std;

class SortZeroOne{

private:

    int *arr;
    int n;

public:
    SortZeroOne(int data[],int size){
        n = size;

        arr = new int[n];  // Allocate memory for the array
        for (int i = 0; i < n; i++) {
            arr[i] = data[i];  // Copy elements into the class member
        }
    }

    void sort_01(){
        int left = 0, right = n-1;

        while(left<right){
            if(arr[left]==0){
                left++;
            }
            else if(arr[right]==1){
                right--;
            }
            else{
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
            
        }

        for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    int arr[18] = {0,1,0,1,1,0,1,0,1,0,0,1,0,1,1,1,0,0};

    SortZeroOne s_obj = SortZeroOne(arr,18);

    s_obj.sort_01();

    return 0;

}