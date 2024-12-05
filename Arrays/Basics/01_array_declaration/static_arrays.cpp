#include<iostream>
using namespace std;

class StaticArray{

public:
    StaticArray(){
        // Basic array declaration
        int classScores[5]; // Unintialized array of 5 Integers

        // Initializing all elements
        int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Partially Initialized array
        int student_age[10] = {15,12,16};   // First 3 elements set, rest are 0

        // compile-time known size array        
        const int team_size = 5;  // it should be constant
        int team[team_size] = {101, 102, 103, 104, 105};

        // character array(string-like)
        char arr[6] = {'H', 'A', 'R', 'S', 'H', '\0'};

        cout << "Static Array Demonstration:\n";

        cout<<"Class Scores : "<<endl;
        for(auto &data: classScores){
            cout<<"\t"<<data<<endl;
        }

        cout<<"Month Days : "<<endl;
        for(auto &data: month_days){
            cout<<"\t"<<data<<endl;
        }

        cout<<"Student Age : "<<endl;
        for(int i = 0; i<10;i++){
            cout<<"\t"<<student_age[i]<<endl;
        }

        cout<<"Character Array : "<<endl;
        for(auto &data: arr){
            cout<<"\t"<<data<<endl;
        }

        cout<<"Hello "<<arr<<endl;

        cout<<"Team : "<<endl;
        for(auto &data: team){
            cout<<"\t"<<data<<endl;
        }

    }


};

int main(){

    StaticArray st1 = StaticArray();
    return 0;

}