#include<iostream>
#include<string>
using namespace std;

class SwitchEx{

private:
    int num;

public:
    SwitchEx(int n): num(n){};

    void get_month(){

        switch (num)
        {
        case 1:
            cout<<"This Is January :)\n";
            break;

        case 2:
            cout<<"This Is February :)\n";
            break;

        case 3:
            cout<<"This Is March :)\n";
            break;

        case 4:
            cout<<"This Is April :)\n";
            break;

        case 5:
            cout<<"This Is May :)\n";
            break;

        case 6:
            cout<<"This Is June :)\n";
            break;

        case 7:
            cout<<"This Is July :)\n";
            break;

        case 8:
            cout<<"This Is August :)\n";
            break;
        
        case 9:
            cout<<"This Is September :)\n";
            break;
        
        case 10:
            cout<<"This Is October :)\n";
            break;
        
        case 11:
            cout<<"This Is November :)\n";
            break;

        case 12:
            cout<<"This Is December :)\n";
            break;
        
        default:
            cout<<"This Is Wrong Choice!!! :)\n";
            break;
        }

    }

};


int main(){

    SwitchEx s1 = SwitchEx(1);
    SwitchEx s2 = SwitchEx(5);
    SwitchEx s3 = SwitchEx(12);
    SwitchEx s4 = SwitchEx(15);

    s1.get_month();
    s2.get_month();
    s3.get_month();
    s4.get_month();

    return 0;
}