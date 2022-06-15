#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*struct rectangle r1={10,5};
    rectangle r2={100,51};
    rectangle *p1=&r1;
    rectangle *p2=&r2;
    cout<<p1->length<<endl;
    cout<<p1->breadth<<endl;
    cout<<p2->length<<endl;
    cout<<p2->breadth<<endl;*/

    rectangle *p;
    // p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p=new rectangle;
    p->length=20;
    p->breadth=29;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}