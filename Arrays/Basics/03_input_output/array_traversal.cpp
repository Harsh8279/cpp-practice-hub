#include<iostream>
using namespace std;

class ArrayTraversal{

public:
    ArrayTraversal(){
        int arr[10] = {1,2,3,4,5,6,7,8,9,10};

        cout<<"\n\tForward Traversal : \n";
        // Forward Traversal
        for(int i = 0; i<10;i++){
            cout<<arr[i]<<", ";
        }

        cout<<"\n\tBackward Traversal : \n";
        // Backward Traversal
        for(int i = 9; i>=0;i--){
            cout<<arr[i]<<", ";
        }
        
        cout<<endl;
        // Finding maximum element during traversal
        int max = arr[0];  // Assume first element is max
        for(int i = 1; i < 10; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "\n\tMaximum element: " << max << endl;

        cout<<endl;
        // Sum of all elements during traversal
        int sum = 0;
        for(int i = 0; i < 10; i++) {
            sum += arr[i];
        }
        cout << "\n\tSum of all elements: " << sum << endl;
        }

};

int main(){

    ArrayTraversal();

    return 0;

}