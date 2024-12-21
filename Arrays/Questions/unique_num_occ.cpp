/*

https://leetcode.com/problems/unique-number-of-occurrences/description/

    Unique Number of Occurances

    Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000

*/

#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

class Solution{

public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hash_map;
        for(auto inc = arr.begin();inc<arr.end();inc++){
            hash_map[*inc] = 0;
        }

        for(auto inc = arr.begin();inc<arr.end();inc++){
            int cnt = hash_map[*inc];
            hash_map[*inc] = ++cnt;
        }
        set<int> new_set;
        vector<int> new_vector;
        for(auto &data:hash_map){
            new_set.insert(data.second);
            new_vector.push_back(data.second);
        }

        return new_set.size()==new_vector.size();

    }

};

int main(){

    int size;
    cout<<"Enter Size of the array : ";
    cin>>size;
    vector<int> arr = {};
    for(int i = 0;i<size;i++)
    {   
        int n = 0;
        cout<<"Enter "<<i<<" Element : ";
        cin>>n;

        arr.push_back(n);
    }

    Solution s1 = Solution();

    cout<<s1.uniqueOccurrences(arr);


    return 0;
}
