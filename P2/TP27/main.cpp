// A C++ function to sort an array of ten integer values in ascending order.
#include<iostream>
#include<conio.h>

using namespace std;

int *sortAscending(int *x, int size);

   int main()
    {

     int arr[]={99,22,3,6,1,19,15,66,68,10};

     int *x=sortAscending(arr,10);

     //Output the sorted array
     int i;
     for(i=0;i<10;i++)

       cout<<*(x+i)<<endl;

     getch();

     return 0;

    }


int *sortAscending(int *x, int n){
    int i,j;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(*(x+j)<*(x+i))
              {
                int value=*(x+j);
                *(x+j)=*(x+i);
                *(x+i)=value;
                }
   return x;
}
