#include <iostream>
using namespace std;
int main()
{
    int arr[30];
    int max = 0, temp = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter value for " << i << " th index" << endl;
        cin >> arr[i];
    }
    for (int j = 0; j < 10; j++)
    {
        cout << j << " th value :" << arr[j] << endl;
    }

    for (int k = 0; k < 10; k++)
    {
        if (arr[k] > max)
        {
            max = arr[k];
        }
    }

    cout << "max element : " << max;

    for (int l = 0; l < 10; l++)
    {
        if (arr[l] > arr[l + 1])
        {
            temp = arr[l];
            arr[l] = arr[l + 1];
            arr[l + 1] = temp;
        }
    }

    for (int j = 0; j < 23; j++)
    {
        cout << j << " th value :" << arr[j] << endl;
    }
}