#include <iostream>
using namespace std;

class Grade
{
private:
    int num;

public:
    void grade()
    {

        //int num ;

        cout << "Enter a number to check grade : ";
        cin >> num;

        if (num < 0 || num > 100)
        {
            cout << "Wrong number" << endl;
        }
        else if (num >= 0 && num < 32)
        {
            cout << "You are Faill !" << endl;
        }
        else if (num >= 33 && num < 40)
        {
            cout << "You are Pass and your grade E !" << endl;
        }
        else if (num >= 50 && num < 60)
        {
            cout << "Your Grade is D !" << endl;
        }
        else if (num >= 60 && num < 70)
        {
            cout << "Your Grade is C !" << endl;
        }
        else if (num >= 70 && num < 80)
        {
            cout << "Your Grade is B !" << endl;
        }
        else if (num >= 80 && num < 90)
        {
            cout << "Your Grade is A !" << endl;
        }
        else if (num >= 90 && num < 100)
        {
            cout << "Your Grade is A+ 😊" << endl;
        }
        else
            cout << "Your are Ginious . Behenke takke !" << endl ;
    }
};

int main()
{

    Grade obj;
    obj.grade();

    return 0;
}