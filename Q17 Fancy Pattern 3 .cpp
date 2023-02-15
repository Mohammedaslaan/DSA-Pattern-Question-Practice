#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {   cout<<"*";
        int col = 0;
        for (; col < row; col++)
        {
            cout<<col+1;
        }
        col = col-1;
        for ( ;col >= 1; col--)
        {
            cout<<col;
        }
        if(col==-1){
            cout<<endl;
            continue;;
        }else{
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int row = 0; row < n-1; row++)
    {   int col = 0;
    cout<<"*";
        for (; col <n-row-2 ; col++)
        {
            cout<<col+1;
        }
        col = col-1;
        for ( ;col >= 1; col--)
        {
            cout<<col;
        }
        if(col==-1){
            cout<<endl;
            continue;;
        }else{
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}