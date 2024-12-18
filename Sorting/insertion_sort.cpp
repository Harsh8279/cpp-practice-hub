#include<iostream>
#include<vector>
using namespace std;

class InsertionSort{

private:

    vector<int> arr;
    int size;

public:
    InsertionSort(){
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
    void perform_sorting(){
        vector<int> new_vector(size);   // this statement is very useful for shifting right... size matters!!

        new_vector[0] = arr[0];

        for(int i = 1;i<size;i++){

            for(int j = i-1;j>=0;j--){
                if(arr[i]<new_vector[j]){
                    new_vector[j+1] = new_vector[j];
                    new_vector[j] = arr[i];
                }
                else{
                    new_vector[j+1] = arr[i];
                    break;
                }
            }
        }
        
        cout<<"---------------- Sorted Array ----------------\n";
        for(auto data: new_vector){
            cout<<data<<", ";
        }
        cout<<"\n";
    }

};

int main(){
    InsertionSort in1 = InsertionSort();

    in1.perform_sorting();
    return 0;
}


/*

            Insertion sort

    Right Shifting and placing right element at right place.

    e.g. 
    4 1 6 5 3 2


    4 1 6 5 3 2
        new_arr =  4 
        Round - 1 -> i = 1
            1 < 4 ? yes -->  right shift 4 and place 1 at 0 th pos
    4 1 6 5 3 2
        new_arr =  1 4
        Round - 2 -> i = 2
            6 < 4 ? No --> Insert after 4
    4 1 6 5 3 2
        new_arr = 1 4 6
        Round - 3 -> i = 3
        5 < 6 ? yes --> 5 < 4 ? No --> right shift 6 and place 5 at 2 pos
    4 1 6 5 3 2
        new_arr = 1 4 5 6
        Round - 4 --> i = 4
        3 < 6 ? yes --> 3 < 5 ? yes --> 3 < 4 ? yes --> 3 < 1 ? No. -->  right shift till 4 and place 3 at 2 Pos

    4 1 6 5 3 2
        new_arr = 1 3 4 5 6
        Round - 5 -> i = 5
        2 < 6 ? yes --> 2 < 5 ? yes --> 2 < 4 ? yes --> 2 < 3 ? yes --> 2 < 1 ? No --> -->  right shift till 3 and place 2 at 1 Pos
    
    new_arr = 1 2 3 4 5 6
*/