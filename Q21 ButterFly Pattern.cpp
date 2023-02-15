#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {   int col = 0;
       for (; col <= row; col++)
       {
            cout<<"*";
       }
       int val = col;
       for (; col < 2*n-val; col++)
       {
        cout<<" ";
       }
       for (int col = 0; col < val; col++)
       {
            cout<<"*";
       }
       cout<<endl;       
    }
    for (int row = 0; row < n; row++)
    {   int col = 0;
        for (; col < n-row; col++)
        {
            cout<<"*";
        }
        int spaces = n-col;
        for (int col = 0; col < spaces; col++)
        {
            cout<<"  ";
        }
        int stars = col;
        for (int col= 0; col< stars; col++)
        {
            cout<<"*";
        }
        

        cout<<endl;
        
    }
    
    
    return 0;
}