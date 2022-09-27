#include <iostream>
#include <algorithm>
#define NUMBER   20

using namespace std;

bool binarySearch(int* arr, int len, int key)
{
    int start = 0;
    int end = len - 1;
    int mid;

    while (end - start >= 0)
    {
        mid = (start + end) / 2; // 중앙 값

        if (arr[mid] == key)
        { // key 값을 찾았을 때
            return true;
        }
        else if (arr[mid] != key)
        { // key 값을 못 찾았을 때
            return false;
        }
        else if (arr[mid] > key)
        { // key 값이 mid의 값보다 작을때 (왼쪽으로)
            end = mid - 1;
        }
        else
        { // key 값이 mid의 값보다 클 때(오른쪽으로)
            start = mid + 1;
        }
    }
}

int main()
{
    int array[NUMBER], count = 0, num, result;

    cout << "배열에 값을 넣으세요: ";

    while (1)
    {
        cin >> array[count];

        if (array[count] == -1)
        {
            break;
        }
        else {
            count++;
        }
    }

    sort(array, array + count);

    cout << "찾고자 하는 숫자 입력: ";
    cin >> num;

    result = binarySearch(array, count, num);

    if (result)
    {
        cout << "TRUE\n";
    }
    else if (!result)
    {
        cout << "FALSE\n";
    }

    return 0;
}