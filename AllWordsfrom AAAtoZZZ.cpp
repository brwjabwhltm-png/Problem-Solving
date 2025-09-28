#include <iostream>   
using namespace std;

void PrintInverted_letter()
{
    string m="";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                m = m+char(i);
                m = m+char(j);
                m = m+char(k);
                cout << m << endl;
                m = "";
            }
        }
    }
}
int main()
{
    PrintInverted_letter();
    return 0;
}