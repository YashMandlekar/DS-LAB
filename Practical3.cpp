// Linear search
#include <iostream>
using namespace std;

int main()
{
    int a[] = {20, 10, 50, 40, 30};
    int key = 30;
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element not found";
}

// Binary search
#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int key = 40;
    int low = 0, high = 4;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
        {
            cout << "found: " << mid;
            return 0;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "not found";
}
