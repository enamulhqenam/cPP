#include <iostream>
using namespace std;

class Hello
{
public:
    string word;
    void input()
    {
        cout << "Enter any word : ";
        cin >> word;
    }
    void show(){
        cout << "Your are write this word : " << word << endl;
    }
};

int main(){
    Hello obj;
    obj.input();
    obj.show();

    return 0;

}