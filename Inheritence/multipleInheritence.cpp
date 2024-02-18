// this program is multiple inharitance . 
#include<iostream>
using namespace std;

class Student{

    protected:
    int roll ;
    string name;
    string className;

    public:
    void input(){
        cout << "Enter your Roll : ";
        cin>>roll;

        cout << "Enter your Name : ";
        cin>>name;

        cout << "Whats your class Name ";
        cin>>className ;
    }
      void show(){
        cout << "Student Roll is : " << roll << endl;
        cout << "Student name is : " << name << endl;
        cout << "Student Class is : " << className << endl;

    }

};

class Info{
    protected:
    int age;
    string fatherName;
    
    public:
    void getDate(){
        cout<<"Enter age of student : ";
        cin>>age;
        cout << "Enter father name of student : ";
        cin>>fatherName;
    }
    
};

class Boyes : public Student , public Info{
    public:
    void show(){
        cout << "Student Roll is : " << roll << endl;
        cout << "Student name is : " << name << endl;
        cout << "Student Class is : " << className << endl;
        cout << "Student age is : " << age << endl;
        cout << "Student fatherName is : " << fatherName << endl;

    }
};

int main(){
    Boyes st;
    st.input();
    st.getDate();
    st.show();
    return 0;
}