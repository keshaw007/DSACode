#include <bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[10], size, length;
};
void unsorted_union(Array unarr1, Array unarr2)
{
    int Final_array[12];
    for (int i = 0; i < unarr1.length; i++)
    {
        Final_array[i] = unarr1.A[i];
    }
    int k = unarr1.length;
    int i = 0;
    while (i < unarr2.length)
    {
        int key = unarr2.A[i];
        bool value;
        for (int j = 0; j < unarr1.length; j++)
        {
            if (key == unarr1.A[j])
            {
                value = false;
                break;
            }
            else
            {
                value = true;
                continue;
            }
        }
        if (value == true)
        {
            Final_array[k] = unarr2.A[i];
            k++;
        }
        i++;
    }
    for (int i = 0; i < k; i++)
    {
        cout << Final_array[i] << " ";
    }
}
void sorted_union(Array soarr1, Array soarr2)
{
    int Final_Array[soarr1.length + soarr2.length];
    int i = 0, j = 0, k = 0;
    while (i < soarr1.length && j < soarr2.length)
    {
        if (soarr1.A[i] < soarr2.A[j])
        {
            Final_Array[k] = soarr1.A[i];
            i++;
            k++;
        }
        else if (soarr1.A[i] > soarr2.A[j])
        {
            Final_Array[k] = soarr2.A[j];
            j++;
            k++;
        }
        else
        {
            Final_Array[k] = soarr1.A[i];
            i++;
            j++;
            k++;
        }
    }
    for (; i < soarr1.length; i++)
    {
        Final_Array[k] = soarr1.A[i];
        k++;
    }
    for (; j < soarr1.length; j++)
    {
        Final_Array[k] = soarr2.A[j];
        k++;
    }
    for (int p = 0; p < k; p++)
    {
        cout << Final_Array[p] << " ";
    }
}
void unsorted_intersection(Array unarr1, Array unarr2)
{
    int final_array[unarr1.length + unarr2.length];
    int i = 0, k = 0;
    while (i < unarr1.length && i < unarr2.length)
    {
        int key = unarr1.A[i];
        bool value = false;
        for (int j = 0; j < unarr2.length; j++)
        {
            if (key == unarr2.A[j])
            {
                value = true;
                break;
            }
        }
        if (value == true)
        {
            final_array[k] = unarr1.A[i];
            k++;
        }
        i++;
    }
    for (int i = 0; i < k; i++)
    {
        cout << final_array[i] << " ";
    }
}
void sorted_intersection(Array soarr1, Array soarr2)
{
    int Final_Array[soarr1.length + soarr2.length];
    int i = 0, j = 0, k = 0;
    while (i < soarr1.length && j < soarr2.length)
    {
        if (soarr1.A[i] == soarr2.A[j])
        {
            Final_Array[k] = soarr1.A[i];
            i++;
            j++;
            k++;
        }
        else
        {
            if (soarr1.A[i] < soarr2.A[j])
            {
                i++;
            }
            else if (soarr1.A[i] > soarr2.A[j])
            {
                j++;
            }
        }
    }
    for (int p = 0; p < k; p++)
    {
        cout << Final_Array[p] << " ";
    }
}
void unsorted_difference(Array unarr1, Array unarr2)
{
    int final_array[unarr1.length + unarr2.length];
    int i = 0, k = 0;
    while (i < unarr1.length && i < unarr2.length)
    {
        int key = unarr1.A[i];
        bool value = false;
        for (int j = 0; j < unarr2.length; j++)
        {
            if (key == unarr2.A[j])
            {
                value = true;
                break;
            }
        }
        if (value == false)
        {
            final_array[k] = unarr1.A[i];
            k++;
        }
        i++;
    }
    for (int i = 0; i < k; i++)
    {
        cout << final_array[i] << " ";
    }
}
void sorted_difference(Array soarr1, Array soarr2)
{
    int Final_array[soarr1.length + soarr2.length];
    int i = 0, j = 0, k = 0;
    while (i < soarr1.length && j < soarr2.length)
    {
        if (soarr1.A[i] < soarr2.A[j])
        {
            Final_array[k] = soarr1.A[i];
            i++;
            k++;
        }
        else if (soarr1.A[i] > soarr2.A[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    for (; i < soarr1.length; i++)
    {
        Final_array[k] = soarr1.A[i];
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        cout << Final_array[i] << " ";
    }
}
int main()
{
    Array unarr1 = {{20, 6, 29, 55, 10, 8}, 10, 6};
    Array unarr2 = {{26, 36, 2, 5, 10, 8}, 10, 6};
    Array soarr1 = {{2, 12, 22, 32, 34, 37}, 10, 6};
    Array soarr2 = {{2, 22, 27, 33, 49, 62}, 10, 6};
    cout << "\n Union Of Two Unsorted Array are as follows :- \n";
    unsorted_union(unarr1, unarr2);
    cout << "\n Intersection Of Two Unsorted Array are as follows :- \n";
    unsorted_intersection(unarr1, unarr2);
    cout << "\n A-B Of Two Unsorted Array are as follows :- \n";
    unsorted_difference(unarr1, unarr2);
    cout << "\n Union Of Two sorted Array are as follows :- \n";
    sorted_union(soarr1, soarr2);
    cout << "\n Intersection Of Two sorted Array are as follows :- \n";
    sorted_intersection(soarr1, soarr2);
    cout << "\n A-B Of Two sorted Array are as follows :- \n";
    sorted_difference(soarr1, soarr2);
    return 0;
}