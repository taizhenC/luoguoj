#include <iostream>
#include <format>
#include <string>
using namespace std;

int main(){
    string a;
    cin>>a;
    
    cout<<"  "<<a<<endl;
    cout<<" "<<a<<a<<a<<endl;
    cout<<a<<a<<a<<a<<a;
    
    /*
    cout<<format("  {}\n",a);
    cout<<format(" {0}{0}{0}\n",a);
    cout<<format("{0}{0}{0}{0}{0}\n",a);
    */
    return 0;
}