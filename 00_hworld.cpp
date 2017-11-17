/*
simple program for Hello World
*/

#include <iostream>
#include<string>

using namespace std;
 
int pr_mes(string message, int array [5])
{
    //prints out the message
     cout << message << " array: "<<array[2] <<" \n";
     return 0;
}
 
int main()
{
    string message;
    int bar [] = { 16, 2, 77, 40, 12071 };
    cout << bar[0];
 
  // like dynamic list in python
    vector<int> myvector;
    // fill vector
    for (int i=1; i<=5; i++) myvector.push_back(i);

    cout << "myvector contains:";
    for (vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    cout << ' ' << *it;
    cout << '\n';
     
     
     message = "cheers!!!";
     //call function
     pr_mes(message, bar);
     //print other
     string hello;
     hello = "Hey, writing is pain, ";
     cout << hello ;
     cout << "change the program so I don't have to write it.";
     return 0;
}
