#include <iostream>
using namespace std;
void swap(int *n1, int *n2);
int main()
{
int num1 = 20, num2 = 40;
swap( &num1, &num2);
cout<<"num1 = "<< num1;
cout<<"num2 = "<< num2;
return 0;
}
void swap(int* n1, int* n2)
{
int temp;
temp = *n1;
*n1 = *n2;
*n2 = temp;
}
