#include<iostream>
using namespace std;
struct rect
{
    int length;
    int breadth;
    char x;
   
} r2;
struct rect r3;
int main()
{
    /*struct rect r1;
    r1.length=15;
    r1.breadth=25;
    cout<<r1.length<<" "<<r1.breadth<<"\n";
    r2.length=25;
    r2.breadth=235;
    cout<<r2.length<<" "<<r2.breadth<<"\n";
    r3.length=525;
    r3.breadth=265;
    cout<<r3.length<<" "<<r3.breadth<<"\n";*/


    /*struct rect r1={50,55};
    cout<<sizeof(r1);*/

    struct rect c1={'a'};
    cout<<sizeof(c1);
    return 0;
}