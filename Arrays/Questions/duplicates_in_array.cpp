/*

https://www.naukri.com/code360/problems/duplicate-in-array_893397

You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

Note : 

A duplicate number is always present in the given array.


Constraints:
1 <=  T  <= 10
2 <=  N <= 10 ^ 5
1 <=  ARR[i]  <= N - 1

Where 'T' denotes the number of test cases, 'N' denotes the number of elements in the array, and 'ARR[i]' denotes the 'i-th' element of the array 'ARR'.

Time limit: 1 sec
Sample Input 1:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
Sample Output 1:
1
3
Explanation of sample input 1:
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
Sample Input 2:
2
6 
5 1 2 3 4 2  
9
8 7 2 5 4 7 1 3 6
Sample Output 2:
2
7


Hints:
1. Simply calculate the frequency of each value.
2. Try to optimise the above approach by using an array to store the frequencies.
3. Think of a solution using Floyd’s cycle finding algorithm.
4. Try to think of a solution based on bitwise XOR.


*/

#include<iostream>
#include<vector>
using namespace std;

int get_xor_result(vector<int> &arr, int start_index){
    int dxor = 0;
    int main_value = arr[start_index];
    start_index = (start_index + 1);
    for(int i=start_index;i<arr.size();i++){
        dxor = main_value^arr[i];
        if(dxor==0){
            return dxor;
        }
    }

    return dxor;
}

int findDuplicate(vector<int> &arr) 
{
    int dxor;
    for(int i = 0;i<arr.size();i++){
        dxor = get_xor_result(arr, i);
        if (dxor==0){
            return arr[i];
        }
    }
}


int main(){
    vector<int> arr = {6,3,1,5,4,3,2};
    cout<<findDuplicate(arr);

    return 0;
}