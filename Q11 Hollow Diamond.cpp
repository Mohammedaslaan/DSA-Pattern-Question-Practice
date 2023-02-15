#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int j = 0; j < n-row-1; j++)
        {
            cout<<" ";
        }
        for (int i = 0; i < 2*row+1; i++)
        {
            if(i==0 || i== 2*row){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }  
        cout<<endl;        
    }
    for (int row = 0; row < n; row++)
    {
        for (int j = 0; j <2*n-row-1; j++)
        {
            if(j==row || j==2*n-row-1-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
    
   
    
    return 0;
}