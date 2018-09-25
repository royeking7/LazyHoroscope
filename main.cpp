//Authors: Roy King
#include<iostream>
#include<string>

using namespace std;

int main()

{
  int index;
  int index2;
  
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
  
  //getting vowels
  index=first[0];
  index2=last.length()-1;
  
  if(index=='a'||index=='A'||index=='e'||index=='E'||index=='i'||index=='I'||index=='o'||index=='O'||index=='u'||index=='U') 
  {  
  cout<<"You are destined to be famous"<<endl;
  }
  else
  {
  cout<<"You should keep a low profile"<<endl;
  }
  
  if(index2=='a'||index2=='A'||index2=='e'||index2=='E'||index2=='i'||index2=='I'||index2=='o'||index2=='O'||index2=='u'||index2=='U')
  {
  cout<<"You have already met your true love"<<endl;
  }
  
  
  cout<<"Have a good day!"<<endl;
  
  return 0;
}  
