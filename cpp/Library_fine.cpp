#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int return_date[3], due_date[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> return_date[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> due_date[i];
    }

    if(due_date[2]!=return_date[2])
    {
         if(due_date[2]>return_date[2])
         cout<<0;
         else
         cout<<10000;

    }
    else if(due_date[1]!=return_date[1])
    {
          if(due_date[1]>return_date[1])
         cout<<0;
         else
         cout<<500*(abs(due_date[1]-return_date[1]));
    }

     else
     {
          if(due_date[0]>return_date[0])
         cout<<0;
         else
          cout<<15*(abs(due_date[0]-return_date[0]));
     }
    return 0;
}