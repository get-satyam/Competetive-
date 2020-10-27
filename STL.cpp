#include<iostream>
#include<vector>

using namespace std;

int main()
{
        vector<int> vec;
        vec.reserve(50);

        for(int i = 0; i<49; i++)
        {
                vec.push_back(i);
                cout<<"Size: "<<vec.size()<<"       Capacity: "<<vec.capacity()<<endl;

        }
        return 0;
}
