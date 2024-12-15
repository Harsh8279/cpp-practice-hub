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