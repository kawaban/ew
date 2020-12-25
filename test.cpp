#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 2 ; i*i <= m; i++)
    {
        if (i*i <= m && n <= i*i)
        {
            cout << i*i << " ";
        }
        
    }
    
    return 0;
}