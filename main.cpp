//Author:Yaneth Reyes Hinojosa
#include<iostream>

using namespace std;

int main()
{
  
  char letters;
  
  cout<<"What character do you want to know about?\n";
  cin>>letters;
  
  if(letters >= 'A' && letters <= 'Z') 

  //when user's entry is between A-Z...
  {
  cout<< letters<<" is an upper case letter!\n";
  }

  else if(letters >='a' && letters <= 'z')
  //when user's entry is between a-z...
  {
  cout<< letters <<" is a lower case letter!\n";
  }
  else
  //in all other cases...
  {
  cout<< letters <<"?! Pssh. What are you talking about?\n";
  }
  //no matter what they enter...
  cout<<"The ASCII value is: ";
  cout<< (int) letters<< "\n";
  return 0;
}
