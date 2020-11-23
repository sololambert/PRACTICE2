// A Calculator menu.
#include <cstdlib>
#include <iostream>
#include<iomanip>

using namespace std;


void showmenu(){

cout<<"                    MENU                      "<<"\n";

cout<<"     1.Add"<<"\n";
cout<<"     2.Subtract"<<"\n";
cout<<"     3.Multiply"<<"\n";
cout<<"     4.Divide"<<"\n";
cout<<"     5.Modulus"<<"\n";
     }

 int Add(int s,int o){
    return(s+o);
}

int Substract(int s, int o){
    return(s-o);
}

int Multiply(int s, int o){
    return(s*o);
}
float Divide(int s,int o){
      return(s/o);
}
int Modulus(int s, int o){
    return(s%o);
}
int main(int argc, char *argv[])
{

showmenu();

int choice;
int s;
int o;
char confirm;
do
{
cout<<"Enter your choice(1-5):";
cin>>choice;
cout<<"Enter your two integer numbers:";
cin>>s>>o;
cout<<"\n";
switch(choice){
 case 1:cout<<"Result:"<<Add(s,o);break;
 case 2:cout<<"Result:"<<Substract(s,o);break;
 case 3:cout<<"Result:"<<Multiply(s,o);break;
 case 4:cout<<"Result:"<<Divide(s,o);break;
 case 5:cout<<"Result:"<<Modulus(s,o);break;
 default:cout<<"invalid";
                   }

cout<<"\nPress y to continue:";
       cin>>confirm;

}while(confirm=='y');
  system("PAUSE");

    return EXIT_SUCCESS;
}
