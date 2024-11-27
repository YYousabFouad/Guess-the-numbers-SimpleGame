//Guessing Game or binary search training
#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;
int main()
{
cout<<"Welcome To Guessing game ";
cout<<"Show us what U can do \n";
srand(time(NULL));
int ComputerGuessing=(rand()%100)+1;
string Nickname;
cout<<"Your Nickname : ";
cin>>Nickname;
int Age;
cout<<"Your Age : ";
cin>>Age;
int UserGuessing;
cout<<"Let's Play , Guess A Number between 1 & 100 : ";
for(int i=0;i<=7;i++){
cin>>UserGuessing;
if(UserGuessing<1 || UserGuessing >100){
    cout<<"Invalid input "<<Nickname <<" Try again : ";
    i--;
}
else if(UserGuessing==ComputerGuessing){
    cout<<"Congratulation "<<Nickname<<" I know U can do it";
    break;
}
else{
if(UserGuessing>ComputerGuessing){
    cout<<"Try again "<<Nickname<<" but lower : ";
}
else{
    cout<<"Try again "<<Nickname<<" but higher : ";
}

}

}

return 0;
}
