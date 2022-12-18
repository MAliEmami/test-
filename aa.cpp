#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    int A[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> m;
    int j=0;
    for (size_t i = 0; i < n; i++)
    {
        if (A[i]==m)
        {
            cout << i+1 << " ";
            j++;
        }
    }
    if(j==0)
    {
        std::cout << "No human was found!" << std::endl;
    }
    return 0; 
}