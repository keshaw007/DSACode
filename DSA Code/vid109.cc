#include <bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;
};
void Display(class Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}
int Get(class Array arr, int x)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (x>=0 && x<arr.length)
        {
            return arr.A[x];
        }
    }
    return -1;
}
void Set(class Array *arr, int index, int number)
{
    if (index < arr->length && index >= 0)
    {
        arr->A[index] = number;
    }
    else
    {
        cout << "Given index is out of limit";
    }
}

int Max(class Array arr)
{
    int max = 0;
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}


int Min(class Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(class Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    return sum;
}
float Avg(int sum, class Array arr)
{
    return (float)sum/ arr.length;
}
int main()
{
    Array arr{{2, 3, 4, 5, 6}, 10, 5};
    Display(arr);
    cout << "\n";

    int index_number;
    cout << "Enter Index which number to be displayed :- ";
    cin >> index_number;
    cout << Get(arr, index_number);
    cout << "\n";

    int index_update, number_update;
    cout << "Enter index and number to be updated :- ";
    cin >> index_update >> number_update;
    Set(&arr, index_update, number_update);
    Display(arr);
    cout << "\n";

    cout << Max(arr);
    cout << "\n";

    cout << Min(arr);
    cout << "\n";
    cout << Sum(arr);
    cout << "\n";

    cout << Avg(Sum(arr), arr);
    cout << "\n";
    return 0;
}