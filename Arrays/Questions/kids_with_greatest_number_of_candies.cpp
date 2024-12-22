/*
Kids With the Greatest Number of Candies

https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.

Example 1:

Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
Explanation: If you give all extraCandies to:
- Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
- Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
- Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
- Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
- Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
Example 2:

Input: candies = [4,2,1,1,2], extraCandies = 1
Output: [true,false,false,false,false] 
Explanation: There is only 1 extra candy.
Kid 1 will always have the greatest number of candies, even if a different kid is given the extra candy.
Example 3:

Input: candies = [12,1,12], extraCandies = 10
Output: [true,false,true]
 

Constraints:

n == candies.length
2 <= n <= 100
1 <= candies[i] <= 100
1 <= extraCandies <= 50

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int get_max(vector<int>& vec){
        int max = vec[0];

        for(int i = 1;i<vec.size();i++){
            if(vec[i]>max){
                max = vec[i];
            }
        }

        return max;

    }

    vector<int> get_new_vector(vector<int>& candies){
        vector<int> new_vector;
        for(int i = 0; i<candies.size();i++){
            new_vector.push_back(candies[i]);
        }

        return new_vector;
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> bool_vector;
        for(int i = 0; i<candies.size();i++){
            int num = candies[i] + extraCandies;
            vector<int> new_vector = get_new_vector(candies);
            new_vector[i] = num;
            int max = get_max(new_vector);
            for(auto data: new_vector){
                cout<<data<<", ";
            }
            bool_vector.push_back(max==num);
            
        }

        return bool_vector;
    }
};

int main(){

    Solution s1 = Solution();

    vector<int> candies = {2,3,5,1,3};

    s1.kidsWithCandies(candies, 3 );

    return 0;
}