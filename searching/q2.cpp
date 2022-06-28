//largest element in mountain function
#include <bits/stdc++.h>
using namespace std;

int peakSearch(int arr[], int size)
{

    int start = 0, end = (size - 1);

    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }

        // go to right wala part
        if (arr[mid+1] > arr[mid] && arr[mid] > arr[mid-1])
        {
            start = mid + 1;
        }
        else
        { //go left wala part
            end = mid - 1;
        }

        mid = (start + (end - start) / 2);
    }

    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[8] = {3, 8, 11, 12, 5, 3, 2,1};

    int peak = peakSearch(odd, 8);

    cout << "Peak value of the given mountain array is " << peak << endl;

    return 0;
}