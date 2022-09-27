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
        mid = (start + end) / 2; // �߾� ��

        if (arr[mid] == key)
        { // key ���� ã���� ��
            return true;
        }
        else if (arr[mid] != key)
        { // key ���� �� ã���� ��
            return false;
        }
        else if (arr[mid] > key)
        { // key ���� mid�� ������ ������ (��������)
            end = mid - 1;
        }
        else
        { // key ���� mid�� ������ Ŭ ��(����������)
            start = mid + 1;
        }
    }
}

int main()
{
    int array[NUMBER], count = 0, num, result;

    cout << "�迭�� ���� ��������: ";

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

    cout << "ã���� �ϴ� ���� �Է�: ";
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