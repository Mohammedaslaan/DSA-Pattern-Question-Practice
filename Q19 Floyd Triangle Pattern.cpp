#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    for (int row = 0; row < n; row++)
    {
       for (int col = 0; col <= row; col++)
       {
        cout<<i++<<" ";
       }
       cout<<endl;
    }
    
    return 0;
}