#include <iostream>

using namespace std;

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}


int main()
{
    while(1)
    {
        cout<<"To quit press 1 otherwise 0"<<endl;
        int c;
        cin>>c;
        if(c==0)
        {
            int a;
            cout<<"Enter the number"<<endl;
            cin>>a;
            int b = fact(a);
            cout<<"The Result is: "<<b<<endl;

        }
        else
        {
            break;
        }


    }
}
