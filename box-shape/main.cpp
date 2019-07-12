/* 
 * 
 * Author: tevin
 *
 */

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter the width of the Rectangle"<<endl;
    cin>>x;
     cout<<"Enter the height of the Rectangle"<<endl;
    cin>>y;
  for( int i=0; i<=x; i++){
            for( int j=0; j<=y; j++)  
            if( i==0 || j==0 || i==x || j==y)
            cout<<"# ";
            else
            cout<<"  ";
            cout<<endl;
  }
  return 0;
}