//Pointer : max value
#include <iostream>
#include<conio.h>

using namespace std;

int *findMax(int arr[],int a);

int main(){

   int a,j,*k;

  cout<<"Enter number of data values";
  cin>>a;

  int arr[a];
  for(j=0;j<a;j++)     {

    cout<<"Enter value:" ;

   cin>>arr[j];
}
  k=findMax(arr,a);

  cout<<"The max value is:"<<*k;

  getch();
  return 0;
}


int *findMax(int data[],int a){

  int *max=data;
  int j;

 for(j=1;j<a;j++){

   if(*max<*(max+j)) *max=*(max+j);

  }
  return max;
}

