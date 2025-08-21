#include <iostream>
using namespace std;
int main ()
{
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    if(marks>=88)
    {
        cout << "grade = A \n";
    }
    else if(marks>=80)
    {
        cout << "grade = B \n";
    }
    else if(marks>=65)
    {
        cout << "grade = C \n";
    }
    else if(marks>=40)
    {
        cout << "grade = D \n";
    }
    else
    cout << "grade = F";
return 0;
}
