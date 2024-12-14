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
        vector<int> new_vector;

        new_vector.push_back(arr[0]);
        
       for(int i = 1;i<size;i++){
        if(arr[i]>arr[i-1]){
            new_vector.push_back(arr[i]);
        }
        else{
            int temp = new_vector[i-1];
            new_vector[i-1] = arr[i];
            new_vector.push_back(temp);
        }
        cout<<"\n------------ Sorted Array ------------\n";
        for(auto data: new_vector){
            cout<<data;
        }
       }
    
    }

};

int main(){
    InsertionSort in1 = InsertionSort();

    in1.perform_sorting();
    return 0;
}