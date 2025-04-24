#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[10]="COMPUTER";
    char str2[10];
    cout<<"string value:"<<str1<<"\n";
    cout<<"string length:"<<strlen(str1)<<"\n";
    cout<<"string copy:";
    strcpy(str2,str1);
    cout<<"2nd string value:"<<str2;

    char str3[10]="C++";
    strcat(str1,str3);
    cout<<"1st string:"<<str1;
    return 0;
}