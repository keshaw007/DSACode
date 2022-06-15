#include <bits/stdc++.h>
using namespace std;

template<class T>
class Array
{
    T *A;
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        A = new T[10];
        length = 0;
    }
    Array(T sz)
    {
        size = sz;
        length = 0;
        A = new T[size];
    }
    ~Array()
    {
        delete[] A;
    }
    void Display();
    void Insert(T x, int index);
    T Delete(int index);
};
template<class T>
void Array<T>::Display()
{
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << "\n";
    }
}
template<class T>
void Array<T>::Insert(T x, int index)
{
    if(index>=0 && index<=length)
    {
        for(int i=length-1;i>=index;i--)
        {
            A[i+1]=A[i];
        }
        A[index]=x;
        length++;
    }
}
template<class T>
T Array<T>::Delete(int index)
{
    T x=A[index];
    if (index >= 0 && index < length)
    {
        for (int i = index; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
    return x;
}
int main()
{
    Array<int> arr(10);
    arr.Insert(10, 0);
    arr.Display();
    arr.Insert(15, 1);
    arr.Insert(25, 2);
    arr.Insert(35, 3);
    arr.Display();
    cout<<arr.Delete(1)<<"\n";
    arr.Display();
    arr.~Array();
    arr.Display();
    return 0;
}