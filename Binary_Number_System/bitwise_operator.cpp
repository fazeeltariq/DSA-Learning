#include <iostream>
using namespace std;
int main()
{
    int a=3,b=4;
    cout<<"\n"<<a<<" "<<b<<" AND (&) Operator: "<<(a&b);
    cout<<"\n"<<a<<" "<<b<<" OR (|) Operator: "<<(a|b);
    cout<<"\n"<<a<<" "<<b<<" XOR (^) Operator: "<<(a^b);

    cout<<"\n"<<a<<" "<<b<<" Left Shift (<<) Operator: "<<(a<<b);  // multiply by 2
    cout<<"\n"<<a<<" "<<b<<" Right SHift (>>) Operator: "<<(a>>b);  // divide by 2


    int c=6;

    cout<<"\n\nLeft Shift of 4: "<<(c<<1);    // a<<b a*2^b
    cout<<"\nRight Shift of 4: "<<(c>>1);     // a>>b a/2^b


    return 0;
}