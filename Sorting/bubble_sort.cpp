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