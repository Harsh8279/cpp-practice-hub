/*

Problem Statement: Currency Note Calculation
Write a program that calculates the minimum number of currency notes required to 
represent a given amount in Indian Rupees. The program should use predefined denominations of currency 
notes and return the number of each type of note used.

*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

constexpr int note_list[] = {500, 100, 50, 20, 1};

class NoteCalculator{

private:

    int amount;

public:

    NoteCalculator(int amt): amount(amt){};

    int get_amt_and_sum(int value){

        int sum;

        switch (value)
        {
            case note_list[0]:
                sum =  amount/note_list[0];
                amount =  amount%note_list[0];
                return sum;

            case note_list[1]:
                sum =  amount/note_list[1];
                amount =  amount%note_list[1];
                return sum;

            case note_list[2]:
                sum =  amount/note_list[2];
                amount =  amount%note_list[2];
                return sum;
            
            case note_list[3]:
                sum =  amount/note_list[3];
                amount =  amount%note_list[3];
                return sum;
            
            case note_list[4]:
                sum =  amount/note_list[4];
                amount =  amount%note_list[4];
                return sum;

            default:
                return 0;
        }

    }

    unordered_map<int, int> get_currency_note(){
        unordered_map<int, int> hash_map;

        while(amount!=0){
            if(amount>=note_list[0]){
                hash_map[note_list[0]] = get_amt_and_sum(note_list[0]);
            }
            else if(amount>=note_list[1]){
                hash_map[note_list[1]] = get_amt_and_sum(note_list[1]);
            }
            else if(amount>=note_list[2]){
                hash_map[note_list[2]] = get_amt_and_sum(note_list[2]);
            }
            else if(amount>=note_list[3]){
                hash_map[note_list[3]] = get_amt_and_sum(note_list[3]);
            }
            else if(amount>=note_list[4]){
                hash_map[note_list[4]] = get_amt_and_sum(note_list[4]);
            }
        }

        for (const auto& pair : hash_map) {
            std::cout <<pair.first << " X " << pair.second << '\n';
        }

        return hash_map;
    }

};

int main(){
    int amt;
    cout<<"Enter the Rupees : ";
    cin>>amt;

    NoteCalculator n1 = NoteCalculator(amt);

    n1.get_currency_note();

    return 0;
}