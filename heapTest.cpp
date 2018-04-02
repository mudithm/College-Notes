#include <iostream>

using namespace std;

bool isHeap(int a[], int n, int i)
{
    if (i >=n)
        return true;
    bool left = true, right = true;
    if (2*i+1<n)
    {
        if (a[2*i+1] > a[i])
            return false;
        else
            left = isHeap(a,n,2*i+1);
    }
     if (2*i+2 < n)
    {
        if (a[2*i+2] > a[i])
            return false;
        else
            right = isHeap(a,n,2*i+2);
    }
    return (left && right);
}

int main()
{
    int heap[8] = {100, 50, 50, 25, 25, 25, 25, 10};
    if (isHeap(heap, 8, 0))
    {
        cout << "This is a heap!" << endl;
    }else
    {
        cout << "This is not a heap!" << endl;
    }


}
