/*
https://www.naukri.com/code360/problems/pair-sum_697295

Problem statement

You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:

Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 10^3
-10^5 <= ARR[i] <= 10^5
-2 * 10^5 <= S <= 2 * 10^5

Time Limit: 1 sec
Sample Input 1:
5 5
1 2 3 4 5
Sample Output 1:
1 4
2 3
Explaination For Sample Output 1:
Here, 1 + 4 = 5
      2 + 3 = 5
Hence the output will be, (1,4) , (2,3).
Sample Input 2:
5 0
2 -3 3 3 -2
Sample Output 2:
-3 3
-3 3
-2 2
*/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   
   vector<vector<int>> returned_vec;
   for(int i = 0; i<arr.size(); i++){

    int new_num = s-arr[i];

    if(new_num>arr[i]){

        for(int j = 0;j<arr.size();j++){
            bool is_matched = 0;
            if(arr[j]==new_num){
                is_matched = 1;
            }
            if(is_matched){
                vector<int> new_vector = {arr[i], new_num};
                returned_vec.push_back(new_vector);
            }
        }
       
    }
    else if(new_num==arr[i]){
        bool is_matched = 0;
        for(int j = 0;j<arr.size();j++){
            if(arr[j]==new_num){
                is_matched = 1;
            }
        }
        if(is_matched){
            vector<int> new_vector = {arr[i], new_num};
            returned_vec.push_back(new_vector);
        }
    }

   }

    vector<vector<int>> sorted_vector;
    sorted_vector.push_back(returned_vec[0]);
    cout<<"\nHiiiiiiiiiiiiiii\n";
    for(auto retr = returned_vec.begin();retr<returned_vec.end();retr++){
        for(auto itr = sorted_vector.begin();itr<sorted_vector.end();itr++){
            if((*itr)[0]<(*retr)[0]){
                sorted_vector.push_back(*retr);
            }
            else if((*itr)[0]==(*retr)[0]){
                if((*itr)[1]<(*retr)[1])
                {
                    sorted_vector.push_back(*retr);
                }
                else{
                        vector<int> temp = *itr;
                        *itr = *retr;
                        *(++itr) = temp;
                }
            }
        }

    }

   return returned_vec;

}

int main(){

    vector<int> vec = {1,2,3,4,5};
    int s = 5;

    vector<vector<int>> new_vector;
    new_vector = pairSum(vec, s);

    cout<<"Output ::"<<endl;
    for(auto data: new_vector){
        for(auto i : data){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    vec = {2, -3, 3, 3, -2};
    s = 0;
    new_vector = pairSum(vec, s);

    cout<<"Output ::"<<endl;
    for(auto data: new_vector){
        for(auto i : data){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    vec = {2,-6,2,5,2};
    s = 4;
    new_vector = pairSum(vec, s);

    cout<<"Output ::"<<endl;
    for(auto data: new_vector){
        for(auto i : data){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    vec = {-4,7,-3,4,-8,4,4,0,-6,-7,6,9,3,5,4,-1,-1,-6,-9,0,9,-3,8,5,2,6,2,0,9,-4,-3,0,0,8,4};
    s = -7;
    new_vector = pairSum(vec, s);

    cout<<"Output ::"<<endl;
    for(auto data: new_vector){
        for(auto i : data){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    /*
    35 -7
-4 7 -3 4 -8 4 4 0 -6 -7 6 9 3 5 4 -1 -1 -6 -9 0 9 -3 8 5 2 6 2 0 9 -4 -3 0 0 8 4 

    */

    return 0;
}