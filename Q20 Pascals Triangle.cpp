#include <iostream>
using namespace std;
int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main(){
    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            // cout<<"("<<row<<","<<col<<")"<<"_";
            cout<<nCr(row,col)<<" ";
        }cout<<endl;
        
    }
    
    return 0;
}