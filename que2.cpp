#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <pair>

using namespace std;

void printRepeated(int arr[], int n)
{
    map<int, int> freq; // MAKES A MAP DS, FOR STORING CORRESPONDING FREQUENCIES OF EACH ARRAY ELEMENT
    for (int i = 0; i < n; i++)
    {

        freq[arr[i]] += 1;
    }

    vector<pair<int,int> v; // MAKES A VECTOR DS, FOR STORING REPEATED NUMBERS
    for (auto i : freq)
    {
        if (i.second >1)
        { // CHECKS IF FREQS OF EACH ELEMENT IS MORE THAN ONE, IF YES THEN STORE IT IN VECTOR ELSE IGNORE
            v.push_back(i.first,i.se);
        }
    }

    cout << "Non-repeated numbers are: ";
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " "; // PRINTS ELEMENTS IN DESCENDING ORDER, AS PER MENTIONED QUE.
    }
}




int main()
{

    int n;
    int arr[n]; // CREATING EMPTY ARRAY OF 'n' SIZE
    cin >> n;   // TAKING INPUT, SIZE OF ARRAY
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printRepeated(arr, n); // Calls function which prints repeated numbers

    return 0;
}