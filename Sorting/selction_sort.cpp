#include<iostream>
#include<vector>
using namespace std;

class SelectionSort{

private:
    vector<int> arr;
    int size;

public:
    SelectionSort(){
        cout<<"Enter Size : ";
        cin>>size;

        for(int i = 0;i<size;i++){
            int num;
            cout<<"Enter "<<i+1<<" Element : ";
            cin>>num;

            arr.push_back(num);
        }

    }

    int get_min_num_and_index(int start_index){
        int min_pos = start_index-1;
        for(int i=start_index;i<arr.size();i++){
            if(arr[i]<arr[min_pos]){
                min_pos = i;
            }
        }
        return min_pos;
    }

    void do_sorting(){
        for(int i = 0;i<size;i++){
            int min_pos = get_min_num_and_index(i+1);
            if(min_pos!=i){
                int temp = arr[i];
                arr[i] = arr[min_pos];
                arr[min_pos] = temp;
            }
        }
        cout<<"---------------------------Sorted Array---------------------------"<<endl;
        for(auto data: arr){
            cout<<data<<", ";
        }
        cout<<"\n-------------------------------------------\n";

    }

};

int main(){

    SelectionSort d1 = SelectionSort();

    d1.do_sorting();

    return 0;
}

/*
            Selection Sort
    In Selection Sort we works with Minimum.

    e.g. 
    4 1 6 5 3 2
    
    4 1 6 5 3 2
        Round - 1 --> i = 0
        find minimum from i = 0 to i < size and if minimum found then swap it with current ith.
        min - 1 --> swap 4 and 1
    1 4 6 5 3 2
        Round - 2  --> i = 1
        find minimum from i = 1 to i < size and if minimum found then swap it with current ith.
        min - 2 --> swap 4 and 2
    1 2 6 5 3 4
        Round - 3  --> i = 2
        find minimum from i = 2 to i < size and if minimum found then swap it with current ith.
        min - 3 --> swap 6 and 3
    1 2 3 5 6 4
        Round - 4  --> i = 3
        find minimum from i = 3 to i < size and if minimum found then swap it with current ith.
        min - 4 --> swap 4 and 5
    1 2 3 4 6 5
        Round - 5  --> i = 4
        find minimum from i = 4 to i < size and if minimum found then swap it with current ith.
        min - 5 --> swap 5 and 6
    1 2 3 4 5 6

    Done.

*/