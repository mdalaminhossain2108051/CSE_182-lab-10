#include<iostream>
using namespace std;
int main() {
int i, x[6], sum = 0;
printf("Enter 6 numbers: ");
for(i = 0; i < 6; ++i) {
cin>> *(x+i);
sum += *(x+i);
}
cout<<"Sum = "<< sum<<endl;
return 0;
}
