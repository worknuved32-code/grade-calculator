#include <iostream>
using namespace std;
int main ()
{
    int n1,n2,total,choice;
    do
    {
    cout <<"Enter the first number :";
    cin >>n1;
    cout <<"Enter the second number :";
    cin >>n2;
     cout <<"Enter the choice\n 1.Add\n 2.subtract\n 3.multiply\n 4.divide\n 5.exit\n :";
    cin >>choice;
    switch (choice)
    {
    case 1   :total=n1+n2;
             cout <<"sum= "<<total<<"\n";
             break;
    case 2   :total=n1-n2;
             cout <<"difference= "<<total<<"\n";
             break;
    case 3  :total=n1*n2;
             cout <<"product= \n"<<total<<"\n";
             break;
     case 4 :total=n1/n2;
             cout <<"qoutient= \n"<<total<<"\n";
             break;
    default:cout <<"invalid \n";
            break;
            exit(0);
    }

    } while(choice!=5);
    return 0;
}
