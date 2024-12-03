#include<iostream>
using namespace std;

class NoteCalculator{

private:
    int amt;

public:
    NoteCalculator(int n):amt(n){};

    int calculate_note(){

        switch (amt)
        {
        case 100:
            return amt/100;

        case 50:
            return amt/50;

        case 20:
            return amt/20;

        case 1:
            return amt*1;
        
        default:
            return 0;
        }

    }

};

int main(){

    NoteCalculator n1 = NoteCalculator(500);

    cout<<n1.calculate_note();
    

    return 0;
}