#include<iostream>

#include<math.h>

using namespace std;

int main()
{

    int i, j, k;
    cin >> i >> j >> k;
    int reverse = 0, rem, remainder = 0, count = 0;
    for (int a = i; a <= j; a++)
    {    
        while (a != 0) 
        {
            rem = a % 10;
            reverse = reverse * 10 + rem;
            a /= 10;
        }
        remainder = abs(a - reverse)%k ;

        if(remainder == 0)
            count ++;

    }

    cout<<count;
}