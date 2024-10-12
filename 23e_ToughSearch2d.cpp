/*
This question deals with a 2D array that is sorted row-wise
aswell as coloumn wise:
eg.
1   4   7   11  15
2   5   8   12  19
3   6   9   16  22
10  13  14  17  24

*/
#include <iostream>
#include <vector>
using namespace std;

void takeInput(vector<vector<int>> &v, int n, int m)
{
    cout << "Enter the elements: ";
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cin >> v[r][c];
        }
    }
}

// It's almost same as in 1D array
bool binarySearch(vector<vector<int>> &v, int key)
{
    int row = v.size();
    int col = v[0].size();

    // two pointer approach follow honga, one pointer is rowIndex which will be initialised
    // to zero, as hum first row and last coloumn wale element se search start kar rahe,
    // dusri approach bhi ho sakti, other pointer is colIndex=col-1;

    int rowIndex = 0, colIndex = col - 1;

    // running the while loop jabh tak last row ka first coloumn wala element na aa jaye
    //(which means the last element to be traversed);
    while (rowIndex <= row && colIndex >= 0)
    {
        int element = v[rowIndex][colIndex];

        if (element == key)
            return true;

        // agar element mere key se chhota hai, toh uss ke left waale bhi sabh chhote
        // hi honge, (uss se right wale already traverse ho gye honga if we were able
        // to reach this element), matlab iss row mein kuch nhi milne wala, move on to
        // the next row;
        else if (element < key)
        {
            rowIndex++;
        }
        // agar element mere key se bada hai, toh uske neeche wale bhi sabh bade hi honge
        // and uske upar wale traversed hai already, so abh uss se chhota uske left mein hi
        // honga, so move on to the left adjacent coloumn by decrementing colIndex;
        else
        {
            colIndex--;
        }
    }

    return false;
}

int main()
{
    int n, m, key;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of coloumns: ";
    cin >> m;
    vector<vector<int>> v(n, vector<int>(m));
    cout << "Enter the key: ";
    cin >> key;

    takeInput(v, n, m);
    binarySearch(v, key) ? cout << "Present" : cout << "Absent";

    return 0;
}