/*

You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.

Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec
Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
Sample Output 1 :
2 2 3
3   
Explanation for Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
Sample Input 2 :
2
3 3 
1 4 5
3 4 5
1 1
3
6
Sample Output 2 :
4 5
-1

*/



#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> common_vector;

	if(n>m){
        for(int i = 0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr2[i]==arr1[j]){
                    common_vector.push_back(arr1[j]);
                    arr1[j] = -1;
                    break;
                }
            }
        }
    }
    else{
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr1[i]==arr2[j]){
                    common_vector.push_back(arr1[i]);
                    arr2[j] = -1;
                    break;
                }
            }
        }

    }

    return common_vector;
}

int main(){

    vector<int> arr_1 = {1,2,3,4,5};
    vector<int> arr_2 = {1,2,3};

    int n = 5;
    int m = 3;

    vector<int> common_vcc = findArrayIntersection(arr_1, n, arr_2, m);

    for(auto data:common_vcc){
        cout<<data<<", ";
    }

    n = 6;
    m = 4;

    arr_1 = {1,2,2,2,3,4};
    arr_2 = {2,2,3,3};

    common_vcc = findArrayIntersection(arr_1, n, arr_2, m);

    cout<<endl;
    for(auto data:common_vcc){
        cout<<data<<", ";
    }


}

/*

3
3 3 
1 4 5
3 4 5
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4 

1,2,2,2,3,4

*/