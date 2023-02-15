#include <iostream>
using namespace std;
int main(){
    //variable number of rows.
    // * * * * *
    // *       *
    // *       *
    // *       *
    // *       *
    // *       *
    // *       *
    // *       *
    // * * * * *
    int rows;
    cout<<"enter number of rows";
    cin>>rows;
    cout<<endl;
    for (int row = 0; row< rows; row++)
    {
        if(row == 0 || row == rows-1){
            for (int col = 0; col < 5; col++)
            {
                cout<<"*";
            }
            cout<<endl;    
        }else{
            cout<<"*";
            for (int col = 0; col < 4; col++)
            {
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
    }
    
    
    return 0;
}