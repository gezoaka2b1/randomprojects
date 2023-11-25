#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    string type;

    cout << "what type ----> -,+,* or /?" << endl;
    cin>>type;
    cout << "what is the first number?" << endl;
    cin>>a;
    cout << "what is the second one" << endl;
    cin>>b;
    if (type=="-")
    {
        c=a-b;
        cout<<c;
    }
    else if (type=="+")
    {
        c=a+b;
        cout<<c;
    }
    else if (type=="*")
    {
        c=a*b;
        cout<<c;
    }
    else if (type=="/")
    {
        c=a/b;
        cout<<c;
    }
    else
        cout<<"that is not a good value";
    return 0;
}
