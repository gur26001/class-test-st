#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}
void printRepeated(int arr[], int n)
{
    map<int, int> freq; // MAKES A MAP DS, FOR STORING CORRESPONDING FREQUENCIES OF EACH ARRAY ELEMENT
    for (int i = 0; i < n; i++)
    {

        freq[arr[i]] += 1;
    }

    vector<pair<int,int>> v; // MAKES A VECTOR DS, FOR STORING REPEATED NUMBERS
    for (auto i : freq)
    {
        if (i.second >1)
        { // CHECKS IF FREQS OF EACH ELEMENT IS MORE THAN ONE, IF YES THEN STORE IT IN VECTOR ELSE IGNORE
            v.push_back(make_pair(i.first,i.second));
        }
    }

    sort(begin(v),end(v),cmp);
    
    for(auto i :v){
        cout<<i.first<<" "<<i.second;
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