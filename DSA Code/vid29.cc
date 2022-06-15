template<class T>
class Arithematic
{
    private:
        T a;
        T b;
    public:
        Arithematic(T a, T b);
        T add();
        T sub();
};
template<class T>
Arithematic<T> :: Arithematic(T a, T b)
{
    this ->a=a;
    this ->b=b;
}
template<class T>
T Arithematic <T> :: add()
{
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arithematic <T> :: sub()
{
    T c;
    c=a-b;
    return c;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    Arithematic<int> obj1(3,5);
    Arithematic<float> obj2(55.5, 50);
    cout<<obj1.add()<<endl<<obj1.sub()<<endl;
    cout<<obj2.add()<<endl<<obj2.sub()<<endl;
    return 0;
}