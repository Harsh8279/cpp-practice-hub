/*

can-place-flowers

https://leetcode.com/problems/can-place-flowers/

You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
 

Constraints:

1 <= flowerbed.length <= 2 * 104
flowerbed[i] is 0 or 1.
There are no two adjacent flowers in flowerbed.
0 <= n <= flowerbed.length

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;

        for(int i = 0; i<flowerbed.size();i++){
            if(i!=0 and i!=flowerbed.size()-1){
                if(!flowerbed[i]){
                    if(!flowerbed[i-1] && !flowerbed[i+1]){
                        flowerbed[i] = 1;
                        cnt++;
                    }
                }
            }
            else if(i==0){

                if(!flowerbed[i]){
                    if((i+1)<flowerbed.size()){
                        if(!flowerbed[i+1]){
                            flowerbed[i] = 1;
                            cnt++;
                        }
                    }
                    else{
                        flowerbed[i] = 1;
                        cnt++;
                    }
                }

            }
            else if(i==flowerbed.size()-1){

                if(!flowerbed[i]){
                    if(!flowerbed[i-1]){
                        flowerbed[i] = 1;
                        cnt++;
                    }
                }

            }
        }

        return cnt==n;
    }
};

int main(){

    Solution s1 = Solution();

    vector<int> candies = {0,0,1,0,0};

    cout<<s1.canPlaceFlowers(candies, 1 );

    return 0;
}