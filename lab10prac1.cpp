#include <iostream>
using namespace std;
int main()

{

    int a=20;

    int *p;

    p=&a;



    cout<<"Before changing - value of a: ";
    cin>>a;

    *p=20;



    cout<<"\nAfter  changing - value of a: ";
    cin>>a;

    cout<<"\nValue has changed.";



    return 0;

}
