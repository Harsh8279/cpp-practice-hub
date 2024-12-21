/*

Problem statement
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.

 Note:
Unique element is always present in the array/list according to the given condition.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec
Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once. So, the unique number in this array is 1.
Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
Explanation: In the first test case, the array is [2, 4, 7, 2, 7]. Here, the numbers 2 and 7 are present twice, and the number 4 is present only once. So, the unique number in this array is 4.

10
Explanation: In the second test case, the array is [1, 3, 1, 3, 6, 6, 7, 10, 7]. Here, the numbers 1, 3, 6, and 7 are present twice, and the number 10 is present only once. So, the unique number in this array is 10.

*/

// Note : This solution works with any condition whether particular element repeats odd times or even times.

#include<iostream>
#include<unordered_map>
using namespace std;

class FindUnique{

private:
    int arr[100];
    int size;
public:
    FindUnique(){
        cout<<"Enter the size of the Array : ";
        cin>>size;

        for(int i=0;i<size;i++){
            cout<<"Enter "<<i+1<<" Element : ";
            cin>>arr[i];
        }
    }

    void find_unique(){
        unordered_map<int,int> hash_map = {};

        for(int i=0;i<size;i++){
            
            hash_map.insert({arr[i],0});

        }

        for(int i=0;i<size;i++){
            int cnt = hash_map[arr[i]];
            hash_map[arr[i]] = ++cnt;
        }

        for(auto &data : hash_map){
            if(data.second==1){
                cout<<"Found Unique --> "<<data.first<<endl;
                break;
            }
        }
    }


};


int main(){
    FindUnique f1 = FindUnique();

    f1.find_unique();

    return 0;
}

/*

Time Complexity:
1. First Loop (`for(int i = 0; i < size; i++)`):
   - Inserts each element of the array into the unordered map.
   - Insertion into an unordered map is \( O(1) \) on average.
   - This loop runs \( size \) times, so its time complexity is \( O(size) \).

2. Second Loop (`for(int i = 0; i < size; i++)`):
   - Accesses and updates the count for each element in the unordered map.
   - Accessing or updating an element in an unordered map is \( O(1) \) on average.
   - This loop also runs \( size \) times, so its time complexity is \( O(size) \).

3. Third Loop (`for(auto &data : hash_map)`):
   - Iterates over all unique elements stored in the unordered map.
   - In the worst case, there are \( size \) unique elements (when all elements are distinct), making this loop \( O(size) \).

Total Time Complexity:
- Adding up all three loops: \( O(size) + O(size) + O(size) = O(size) \).

---

 Space Complexity:
1. Unordered Map Storage:
   - Stores all unique elements from the array.
   - In the worst case, if all elements are unique, the unordered map will store \( size \) elements.
   - Space used: \( O(size) \).

2. Other Space Usage:
   - A few variables like `cnt` and the iterator in the loop.
   - This additional space is \( O(1) \).

Total Space Complexity:
- Dominated by the unordered map: \( O(size) \).

---

 Summary:
- Time Complexity: \( O(size) \).
- Space Complexity: \( O(size) \).

 Optimization Suggestion:
If the array allows XOR operations (i.e., the integers can be directly XORed without any issues with overflow or special cases), an XOR-based solution would be more space-efficient with \( O(1) \) space complexity and the same \( O(size) \) time complexity.

 */