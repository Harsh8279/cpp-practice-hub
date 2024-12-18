#include<iostream>
#include<vector>
using namespace std;

class BubbleSort{

private:

    vector<int> arr;
    int size;

public:
    BubbleSort(){
        cout<<"Enter size of The Vector : ";
        cin>>size;

        cout<<"Enter Unsorted Array : \n";
        for(int i = 0;i<size;i++){
            int num;
            cout<<"Enter "<<i+1<<" Element : ";
            cin>>num;
            arr.push_back(num);
        }

    }

    void apply_bubble_sort(){
        for(int i=1;i<size;i++){
            for(int j = 0;j<size-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
                else{
                    continue;
                }
            }
        }

        cout<<"---------------- Sorted Array ----------------\n";
        for(auto data: arr){
            cout<<data<<", ";
        }
        cout<<"\n";
    }

};

int main(){

    BubbleSort b1 = BubbleSort();

    b1.apply_bubble_sort();

    return 0;

}

/*
            Bubble Sort

    We Will get Largest Element at the end

    Iterate the loop till size-1

    and

    Compare Adjacent Values

    Adjacent means Aajubaju ni value

    e.g. 
    4 1 6 5 3 2

    1st Iter - i = 0
        4 1 6 5 3 2 --> j = 0
        compare 4 > 1? yes --> swap 
        1 4 6 5 3 2 --> j = 1
        compare 4 > 6 ? No --> ignore
        1 4 6 5 3 2 --> j = 2
        compare 6 > 5 ? yes --> swap
        1 4 5 6 3 2 --> j = 3
        compare 6 > 3 ? yes --> swap
        1 4 5 3 6 2 --> j = 4
        compare 6 > 2 ? yes --> swap
        1 4 5 3 2 6 --> j = 5
        In the 1st Iter we got our highest element at the end of the array.
    2nd Iter - i = 1
        1 4 5 3 2 6 --> j = 0
        compare 1 > 4 ? No --> Ignore
        1 4 5 3 2 6 --> j = 1
        compare 4 > 5 ? No --> Ignore
        1 4 5 3 2 6 --> j = 2
        compare 5 > 3 ? Yes --> Swap
        1 4 3 5 2 6 --> j = 3
        compare 5 > 2 ? Yes --> Swap
        1 4 3 2 5 6 --> j = 4
        No Need to compare 5 and 6 because they are largest.

    3rd Iter - i = 2
        1 4 3 2 5 6 --> j = 0
        compare 1 > 4 ? No --> Ignore
        1 4 3 2 5 6 --> j = 1
        compare 4 > 3 ? Yes --> swap
        1 3 4 2 5 6 --> j = 2
        compare 4 > 2 ? Yes --> swap
        1 3 2 4 5 6 --> j = 3
        No Need to compare 4 and 5 and 6 because they are largest.
    
    4th Iter - i = 3
        1 3 2 4 5 6 --> j = 0
        compare 1 > 3 ? No --> Ignore
        1 3 2 4 5 6 --> j = 1
        compare 3 > 2 ? Yes --> swap
        1 2 3 4 5 6 --> j = 2
        No Need to compare 3, 4 and 5 and 6 because they are largest.

    5th Iter -  i = 4
        1 2 3 4 5 6 --> j = 0
        compare 1 > 2 ? No --> Ignore
        1 2 3 4 5 6 --> j = 1
        No need to compare 2,3,4,5,6 because they are largest.
    
    Now we got our entire array sorted.




*/