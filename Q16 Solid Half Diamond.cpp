#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row ;col++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int row = 0; row < n-1; row++)
    {
        for (int col = n-1-row; col >=1; col--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}