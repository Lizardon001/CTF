#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
        string flag;
        cout <<"Enter Any string to Make it string: ";
        cin >> flag;
        int flag_rand =5;
        cout << "Your string Numbers are: ";
        for(int i = 0; i < flag.length(); i++)
        {
                int flag_num = flag[i];
                flag_num = flag_num ^ flag_rand;
                if(i % 2 == 0)
                {
                        flag_num = flag_num + 24;
                }
                else
                {
                        flag_num = flag_num - 24;
                }
                cout <<flag_num <<" ";
        }
}
