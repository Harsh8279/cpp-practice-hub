/*

3SUM

https://www.naukri.com/code360/problems/triplets-with-given-sum_893028

You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.

An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".

Constraints:
1 <= T <=  50
1 <= N <= 10^3  
-10^6 <= ARR[i] <= 10^6
-10^9 <= K <= 10^9

Time Limit: 1 sec
Sample Input 1:
1
5
10 5 5 5 2
12
Sample Output 1:
5 5 2
Explanation for Sample Input 1:
5 5 2 is the only triplet that adds up to 12. Note that the order of the output doesn’t matter, so 5 2 5 or 2 5 5 is also acceptable.
Sample Input 2:
3
6
1 2 3 1 2 3
6
4
1 2 3 4 
11
6
1 1 2 2 1 1
4
Sample Output 2:
1 2 3
-1
1 1 2
Explanation for Sample Input 2:
In the first input, (1, 2, 3) is the only unique triplet that adds up to six.

In the second input, since there are no such triplets, we print -1.

For the third input, the only distinct triplet is (1, 1, 2), so just print 1 1 2.

*/

#include<iostream>
#include <set>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	
    set<vector<int>> nsarr;
    int diff;
    for(int i = 0; i<arr.size();i++){
        diff = K - arr[i];
        cout<<"\narr["<<i<<"] -> "<<arr[i]<<"\tdiff -> "<<diff;
        vector<int> inarr;
        inarr.push_back(arr[i]);
        for(int j = 0;j<arr.size();j++){
            if(i==j){
                continue;
            }
            
            // cout<<"\n\tarr["<<j<<"] -> "<<arr[j]<<"\tdiff -> "<<diff;
            if(arr[j]<=diff){

                diff = diff - arr[j];
                cout<<"\n\tarr["<<j<<"] -> "<<arr[j]<<"\tdiff -> "<<diff;
                inarr.push_back(arr[j]);
            }

            if(inarr.size()==3 and diff == 0 ){
                // continue;
                diff = K - arr[i];

            }

            
        }
        sort(inarr.begin(),inarr.end());
        if(inarr.size()==3){
            nsarr.insert(inarr);
        }
    }
    vector<vector<int>> narr(nsarr.begin(),nsarr.end());
    cout<<"Nested arr : "<<endl;
    for(auto data: narr){
        for(auto indata: data){
            cout<<indata<<" ";
        }
        cout<<endl;
    }
    cout<<"\n--------------------------------------------\n";
    return narr;

}
int main(){

    vector<int> dataarr = {10,5,5,5,2};
    int K = 12;
    int n = 5;

    // findTriplets(dataarr,n,K);

    dataarr = {1,2,3,1,2,3};
    K = 6;
    n = dataarr.size();

    // findTriplets(dataarr,n,K);


    dataarr = {1,2,3,4};
    K = 11;
    n = dataarr.size();
    
    // findTriplets(dataarr,n,K);

    dataarr = {1,1,2,2,1,1};
    K = 4;
    n = dataarr.size();

    // findTriplets(dataarr,n,K);

    dataarr = {-26,32,4,17,-16,18,1,8,6,8,3,-13};
    K = 10;

    n = dataarr.size();

    findTriplets(dataarr,n,K);


    return 0;
}


/*
5
12
-26 32 4 17 -16 18 1 8 6 8 3 -13 
10
9
2 -95 9 1 -79 88 96 0 5 
10
6
7 -36 5 3 41 5 
10
9
4 4 -40 27 1 6 36 3 -50 
-10
12
9 5 -20 -70 2 1 82 1 4 8 55 -100 
-10

*/