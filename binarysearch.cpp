#include <iostream>
using namespace std;

int arr[20]; // array akan mencari
int n;       // angka dari elemen di array
int i;       // index dari array

void Input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\n Array should have minimum 1 and maximum 20 elements. \n\n";
    }
    // accept array elements
    cout << "\n-----------------------\n";
    cout << "Enter array elements \n";
    cout << "\n-----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >>arr[i];
    }
}
void BinarySearch()
{
    char ch;
    do
    {
        // Accept the number to be searched
        cout << "\nEnter element want you to search: ";
        int item;
        cin >> item;

        // apply binary Search
        int lowerbound = 0;
        int upperbound = n - 1;
        int mid = (lowerbound + upperbound) / 2; // index of middle element
        int ctr = 1;                             // number of comparisons

        while ((item != arr[mid]) && (lowerbound <= upperbound))
        {
            if (item < arr[mid])
                lowerbound = mid + 1;
            else
                upperbound = mid - 1;

            mid = (lowerbound + upperbound) / 2; // index of middle element
            ctr++;
        }

        if (item == arr[mid])
            cout << "\n"
                 << item << " found at position " << (mid + 1) <<endl;
        else
            cout << "\n"
                 << item << " not found in the array\n";
        cout << "\nNumber of comparisons: " << ctr << endl;

        cout << "\nContinue search (y/n): ";
        cin >> ch;

    } while ((ch == 'Y') || (ch== 'Y'));
}

void bubbleSort()
 {
    int pass =  1;
    do
    {
        for (int j =0; j <= n-1-pass; j++)
        {
            if(arr[j] > arr[j + 1 ]) 
            {
                // tukar elemen
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
          }
            pass ++;
    } while (pass <= n-1);
  
  }

  int main()
  {
    Input();
    bubbleSort();
    BinarySearch();

  }