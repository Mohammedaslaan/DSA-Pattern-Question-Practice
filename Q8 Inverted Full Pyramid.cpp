#include <iostream>
using namespace std;
int main(){
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    int row;
    cin>>row;
    for (int i = 0; i < row; i++)
    {   
        for (int j = 1; j <= i; j++)
        {
            cout<<"-";
        }
        
        for (int p = 0; p < row-i; p++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    
    return 0;
}