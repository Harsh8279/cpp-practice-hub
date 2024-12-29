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
// #include <fstream>
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

   for(int i = 0;i<returned_vec.size();i++){

    vector<int> zero_vector = {0,0};
    sorted_vector.push_back(zero_vector);

   }

    sorted_vector[0] = returned_vec[0];

    // ofstream file;
    // file.open("output.txt");

    // for(auto data: returned_vec){
    //     for(auto idata: data){
    //         file<<idata<<" ";
    //     }
    //     file<<endl;
    // }
    // file<<endl<<endl;
    

    for(int i = 1;i<returned_vec.size();i++){
        for(int j = 0; j < i;j++){
            if(sorted_vector[j][0]<returned_vec[i][0]){
                if(sorted_vector[j+1][0]==0 and sorted_vector[j+1][1]==0){
                        sorted_vector[j+1] = returned_vec[i];
                }

            }
            else if(sorted_vector[j][0]>returned_vec[i][0]){
                int cnt = sorted_vector.size()-1;

                while(cnt>j){
                    sorted_vector[cnt] = sorted_vector[cnt-1];
                    --cnt;
                }
                sorted_vector[j] = returned_vec[i];
                break;
            }
            else{

                if(sorted_vector[j][1]>returned_vec[i][1]){

                    int cnt = sorted_vector.size()-1;
                    
                    while(cnt>j){
                        sorted_vector[cnt] = sorted_vector[cnt-1];
                        --cnt;
                    }
                    sorted_vector[j] = returned_vec[i];
                    break;


                }
                else if(sorted_vector[j][1]<returned_vec[i][1]){
                    if(sorted_vector[j+1][0]==0 and sorted_vector[j+1][1]==0){
                        sorted_vector[j+1] = returned_vec[i];
                    }

                }
                else{
                    if(sorted_vector[j+1][0]==0 and sorted_vector[j+1][1]==0){
                        sorted_vector[j+1] = returned_vec[i];
                    }
                }

            }
        }
    }
    
    // file<<"\n------------------------------Sorted Vector------------------------------\n";
    // for(auto data : sorted_vector){
    //     for(auto sdata: data){
    //         file<<sdata<<" ";
    //     }
    //     file<<endl;

    // }
    // file<<endl;
    // file<<"\n------------------------------END------------------------------\n";


    // file.close();

   return sorted_vector;

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

    vec = {-1,3,8,6,-7,-1,-2,-9,-1,1,5,-8,8,-4,6,4,4,1,-9,9,0,7,-9,-4,-3,4,-6,-5,-4,8,0,3,5,-5,5,3,-9,-5,-5,0,7,4,-6,-7,-5,5,-6,8,6,0,9,9,0,-7,-8,-1,7,-4,-3,-3,-8,1,4,8,1,8,3,-8,-4,-3,0,6,-7,7,-7,0,8,1,6,-8,-2,0,9,-5,3,-1,-3,-3,7,4,0,-2,3,0,-4,5,-5,-8,-6,2,-5,-6,-3,-7,4,4,6,-5,5,5,-4,0,-9,-3,3,0,-9,0,-4,7,0,-1,-9,1,-9,3,6,9,6,1,-2,0,-8,8,-5,4,2,0,0,-2,0,-1,-3,3,4,3,-4,1,0,-9,-4,-9,9,-7,1,1,0,6,-9,-4,9,4,-5,0,0,4,2,7,-2,1,7,-8,0,-4,-2,0,-9,-2,-7,-8,6,-4,-4,9,0,0,-5,-4,0,8,-8,4,-5,0,-2,-8,-2,6,8,-9,9,-5,-1,3,-2,-1,-1,-1,-4,4,2,-9,-4,-1,4,-4,0,-1,7,9,4,-6,5,-3,2,-5,-5,4,2,-3,6,6,2,0,4,-3,0,-4,0,0,4,1,-5,7,-4,-7,6};
    s = 4;
    new_vector = pairSum(vec, s);

    // cout<<"Output ::"<<endl;
    // for(auto data: new_vector){
    //     for(auto i : data){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    35 -7
-4 7 -3 4 -8 4 4 0 -6 -7 6 9 3 5 4 -1 -1 -6 -9 0 9 -3 8 5 2 6 2 0 9 -4 -3 0 0 8 4 

    */

    return 0;
}