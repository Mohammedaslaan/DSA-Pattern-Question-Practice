#include <iostream>
using namespace std;
int main(){
    //Printing half pyramid
    int row;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        //printing spaces
        for (int j = 0; j < row-i; j++)
        {
            cout<<"-";
        }
        int var = i;
        for (int j = i; j > 0; j--)
        {
            cout<<var++;
        }
        int newi = i-1;
        for(int i = 2*newi; i > newi; i--)
        {
            cout<<i;
        }
        
       for (int j = 0; j < row-i; j++)
        {
            cout<<"-";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}