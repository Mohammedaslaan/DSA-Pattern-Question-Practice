#include <iostream>
using namespace std;
int main(){
    // variable number of rows 
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    //Time Complexity will be n^2;
    int row = 0;
    cin>>row;
    cout<<endl;
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j <= i; j++)
       {
            cout<<"* ";
       }
       cout<<endl;
    }
    
    return 0;
}