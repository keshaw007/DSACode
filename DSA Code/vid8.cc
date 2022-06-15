#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*int a=10;
    int *p;
    p=&a;
    cout<<a<<endl<<p<<endl<<*p<<endl<<int(p);*/

    /*int arr[5]={0,1,2,3,4};
    int *p;
    p=arr;
    for(int i=0;i<5;i++)
    {
        cout<<"address of " <<arr[i]<<" is "<<p[i]<<endl;
    }*/

    // we can use new in place of malloc in c++
    /*int *p;
    p= new int [5];
    p[0]=1;p[1]=1;p[2]=12,p[3]=13;p[4]=15;
    for(int i=0;i<5;i++)
    {
        cout<<"value  is "<<p[i]<<endl;
    }
    delete[]p;
    cout<<p[0];*/

struct rectangle
{
    /* data */
    int length;
    int breadth;
};


    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout<<"size of pointer is "<<sizeof(p1)<<endl;
    cout<<"size of pointer is "<<sizeof(p2)<<endl;
    cout<<"size of pointer is "<<sizeof(p3)<<endl;
    cout<<"size of pointer is "<<sizeof(p4)<<endl;
    cout<<"size of pointer is "<<sizeof(p5)<<endl;
    return 0;
}