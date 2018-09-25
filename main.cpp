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
  cout<<"What is your first name?" <<first<< endl;
  cin>>first;
  
  cout<<"What is your last name?" <<last<< endl;
  cin>>last;

  //tell fortune
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl; 
  cout<<"your lucky number is "<<first.length()<<endl;
  
  //getting vowels
  index=first[0];
  
  if(index=='a'||index=='A'||index=='e'||index=='E'||index=='i'||index=='I'||index=='o'||index=='O'||index=='u'||index=='U') 
  {  
  cout<<"you are destined to be famous!"<<endl;
  }
  else
  {
  cout<<"you should keep a low profile."<<endl;
  }
  
  index2=last.length()-1;

  if(index2=='a'||index2=='A'||index2=='e'||index2=='E'||index2=='i'||index2=='I'||index2=='o'||index2=='O'||index2=='u'||index2=='U')
  {
  cout<<"you have already met your true love"<<endl;
  }
  else 
  {
  cout<<"you have already met your true love"<<endl;
  }
  
  cout<<"have a good day!"<<endl;
  
  return 0;
}  
