#include <iostream>
using namespace std;
int main(){
    // * * * * * *
    // * * * * *
    // * * * * 
    // * * *
    // * *
    // * 
    // Time complexity is n^2.
    int row;
    cin>>row;
    for (int i = row; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }cout<<endl;
        
    }
    
    return 0;
}