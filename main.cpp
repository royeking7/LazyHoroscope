//Authors: Roy King
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first;
  string last;
  
  //get user input
  cout<<"Hello, whats your first name? " <<first<< endl;
  cin>>first;
  
  cout<<"What is your last name? " <<last<< endl;
  cin>>last;

  //tell fortune
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"."<<endl; 
  cout<<"Your lucky number is "<<first.length()<<endl;

  return 0;
}
