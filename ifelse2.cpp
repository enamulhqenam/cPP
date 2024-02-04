#include<iostream>
using namespace std;

class Check{
    public:
    int num ;
    void Input(){
        cout<<"Enter a number : ";
        cin>> num ;
    }
    void check(){
        Input();
        if(num %2 == 0){
            cout << "Even number is : "<< num << endl;
        }
        else{
            cout << "Odd number is : "<< num << endl;
        }
    }
};
int main()
{
    Check obj;
    //obj.Input();
    obj.check();
}