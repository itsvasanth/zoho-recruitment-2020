// Compiler used DEV-C++ Version 5.11
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void PrintPattern(int n)
{
    int i = 0, j = 0;
    for(i =n; i>0; i--)
    {
        for(j =n; j>i; j--)
            cout<<j;
        for(j = i; j>0; j--)
            cout<<i;
        cout<<endl;
    }
}
int main()
{
    int n = 5;
    PrintPattern(n);
    return 0;
}
