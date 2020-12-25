#include <iostream>


using namespace std; 

void reverse(int n, int a[]){
    for (int i = 0; i <= n - 1; i++){
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i--){
        cout << a[i] << " ";
    }

}

int main(){
    int n;
    cin >> n;
    int a[n];
    reverse(n, a);

    return 0;
}
