#include <iostream>
using namespace std;
int main()
{

    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search_element = 3;
    for (int i; i < 10; i++)
    {
        if (data[i] == search_element)
        {
            cout<<search_element<<"Found";
            break;
        }
    }
    return 0;
}