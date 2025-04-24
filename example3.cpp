#include<iostream>
using namespace std;
#include<algorithm>
void modify(int *arr)
{
    rotate(arr,arr+3,arr+5);
     rotate(arr,arr+2,arr+4);
}
int main()
{
    int iarr[5];

    for(int i=0;i<5;i++)
    {  
        //iarr[i]=i+1;
         *(iarr+i)=i+1;
       
    }
    cout<<"size:"<<sizeof(iarr)/sizeof(iarr[0])<<"\n";
    modify(iarr);
    for(int j=0;j<sizeof(iarr)/sizeof(iarr[0]);j++)
    {
        //cout<<iarr[j]<<"\n";
       
        cout<<*(iarr+j)<<" ";
    }
    return 0;
}