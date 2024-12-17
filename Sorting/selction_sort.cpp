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