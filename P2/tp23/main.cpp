// A C++ program (using function) to sort 10 integer values
#include <cstdlib>
#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

void mysort(int numberlist[]){

    int i,j;
    int value;

      for(i=0;i<10;i++)
     for(j=0;j<10;j++)

      if(numberlist[j]>numberlist[j+1]){

         value=numberlist[j];

         numberlist[j]=numberlist[j+1];

         numberlist[j+1]=value;
       }

       for(i=0;i<10;i++)cout<<numberlist[i]<<"\n";

}

void mysort(float numberlist[]){

    int i,j;
    float value;
      for(i=0;i<10;i++)
     for(j=0;j<10;j++)
      if(numberlist[j]>numberlist[j+1]){

         value=numberlist[j];

         numberlist[j]=numberlist[j+1];

         numberlist[j+1]=value;
       }

       for(i=0;i<10;i++)cout<<numberlist[i]<<"\n";

}
void mysort(double numberlist[]){

    int i,j;
    double value;;
      for(i=0;i<10;i++)
     for(j=0;j<10;j++)

      if(numberlist[j]>numberlist[j+1]){

         value=numberlist[j];

         numberlist[j]=numberlist[j+1];

         numberlist[j+1]=value;
       }

       for(i=0;i<10;i++)cout<<numberlist[i]<<"\n";

}

int main(int argc, char *argv[])
{
     int numberlist[]={13,7,66,32,75,98,5,67,44,23};

  mysort(numberlist);

  system("PAUSE");

  return EXIT_SUCCESS;
}
