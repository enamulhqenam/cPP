#include<iostream>
using namespace std;
class ODD{

    public:
    int num = 10 ;

    void show(){

        if(num %2==0){
            cout << "this Even number is : " << num <<endl;
        }
    }
};

int main(){

    ODD obj;
    obj.show();
    return 0;
}