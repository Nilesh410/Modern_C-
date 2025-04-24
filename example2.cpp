#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char data[]={'a','b','c','d','e'};
    char key='d';
    
    // if(binary_search(&data[0],&data[4],key))
    cout<<data<<data+5;
    if(binary_search(data,data+5,key))
        cout<<"element found";
    else
        cout<<"element not found";
    return 0;
}