//A program to accept five integer values from keyword.
#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
     int arr[5],i;int *c=arr;

     cout<<"Enter five numbers:";
     cin>>*c>>*(c+1)>>*(c+2)>>*(c+3)>>*(c+4);

     cout<<"Your numbers are:\n";

     for(i=0;i<5;i

        cout<<arr[i]<<endl;

     getch();

    return 0;
}
