// This programm Calculate Marking parsentis .
#include<iostream>
#include<iomanip>

using namespace std ;
/* variable name . obtained means tumi koto mark peayaco ekta 
subject a total mark theke*/
double calculatePercentage(double marks_Obtained , double totalMarks)
{
 return (marks_Obtained / totalMarks) * 100.0 ;
}

char calculateGrade(double percentage)
{
    if(percentage >= 90)
    {
        return 'A';
    }
    else if(percentage >= 80){
        return 'B';
    }
    else if(percentage >=70){
        return 'C' ;
    }
    else if(percentage >= 60){
        return 'D';
    }
    else
    return 'F';
}

int main()
{
    double marks_Obtained , totalMarks;
    
    //input 
    cout << "Enter marks your Subject : ";
    cin >> marks_Obtained ;

    cout << "Enter totla mark this subject : ";
    cin >> totalMarks ;

    //claculate percentage .
    double percentage = calculatePercentage(marks_Obtained , totalMarks);

    char grade = calculateGrade(percentage);

    //output 
    cout << "Percentage : " << fixed << setprecision(2) << percentage << "%" << endl;
    cout << "Grade : " << grade << endl ;

    return 0; 
}