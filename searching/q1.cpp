#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int even[12] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5};

    cout << "First occurence of 3 is at index " << firstOccurence(even, 12, 3) << endl;
    cout << "Last occurence of 3 is at index " << lastOccurence(even, 12, 3) << endl;

    //To find total no of occurence 
    int totalOcc = lastOccurence(even, 12, 3) - firstOccurence(even, 12, 3) + 1;
    cout << "Total no of occurence of 3 is " << totalOcc << endl;

    return 0;
}
