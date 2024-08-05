//Gayatri Apotikar
//23070123055
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int myint;
    float myfloat;
    char mystring;
    
    cout<<"Enter an integer "<<endl;
    cin>>myint;
    cout<<"Enter a decimal number "<<endl;
    cin>>myfloat;
    cout<<"Enter a character "<<endl;
    cin>>mystring;
    
    printf("the values are ");
    cout<<"size:"<<sizeof(myint)<<"bytes"<<endl;
    cout<<"size:"<<sizeof(myfloat)<<"byes"<<endl;
    cout<<"size:"<<sizeof(mystring)<<"bytes"<<endl;
}