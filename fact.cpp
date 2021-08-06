#include<iostream>
using namespace std;
int main()
{
    int fact(int );
    int n,f;
    cout<<"enter a number:";
    cin>>n;
    f=fact(n);
    cout<<"factorial of "<<n<<" is :"<<f;
    return 0;
}
int fact(int x)
{
    if(x<0)
    {
        return (-1); //negative number
    }
    else if(x==0)
    {
        return (1);
    }
    else
    {
        return (x*fact(x-1));
    }

}