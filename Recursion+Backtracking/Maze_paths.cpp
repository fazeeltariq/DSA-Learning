#include <iostream>
using namespace std;

int noofways(int rows,int col){
    if(rows==1) return 1;
    if(col==1) return 1;

    return noofways(rows,col-1)+noofways(rows-1,col);
}
int main()
{
    int n,m;
    cout<<"\nEnter no of rows: ";
    cin>>n;
    cout<<"\nEnter no of columns: ";
    cin>>m;
    int ways=noofways(n,m);
    cout<<"\nThe total number of ways are: "<<ways;
    return 0;
}