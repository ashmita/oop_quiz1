/*
 Program: Question 2 from quiz 1.
 Name   : Ashmita Kunwar
 Roll   : 0321
 Output : Fred Jones
*/
#include<iostream>
using namespace std;

int main()
{
    string s;
    string *p;
    s= "Fred Jones";
    p= &s;
    cout<< *p;
}
