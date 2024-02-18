#include <iostream>
using namespace std;

class Base
{
public:
    int num = 10;
    string name = "enam";

};
class Drive:public Base{
    public:
    int b = 20 ;
    int add = num+b;
    void show(){
        cout << "Addition is : " << add << endl ;
        cout << "Name is : " << name << endl;
    } 
};

int main()
{
    Drive obj;
    obj.show();
}