// PAPRI SEN
// 24070123070
// A3
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any integer ";
    cin>>a;
    cout<<"Integer " <<a<< " and size is " <<sizeof(a)<< " bytes" << endl;

    float b;
    cout<<"Enter any number with decimal ";
    cin>>b;
    cout<<"Float " <<b<< " and size is " <<sizeof(b)<< " bytes"<< endl;

    string c;
    cout<<"Enter any word ";
    cin>>c;
    cout<<"String " <<c<< " and size is " <<sizeof(c)<< " bytes" << endl;

    double d;
    cout<<"Enter any number with bigger decimal ";
    cin>>d;
    cout<<"Double " <<c<< " and size is " <<sizeof(d)<< " bytes" << endl;

    char e;
    cout<<"Enter any letter ";
    cin>>e;
    cout<<"Charerecter " <<e<< " and size is " <<sizeof(e)<< " bytes" << endl;

    return 0;
}
