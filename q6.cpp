/*
 Program: Question 6 from quiz 1.
 Name   : Ashmita Kunwar
 Roll   : 0321
 Output : Random Garbage
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    int *q;
    a=4;
    q= &a;
    cout<< * (q+1);
}
