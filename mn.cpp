#include <iostream>
using namespace std;
int main()
{
    bool a,b,c,d,res;
    cout<<"enter a,b,c,d"<<endl;
    cin>>a>>b>>c>>d>>res;
    res=((a&&b)||c)&&!d;
    cout<<"res="<<endl;
}
