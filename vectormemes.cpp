#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> memes = {1, 2, 3, 4, 5, 6};

    for (vector<int>::reverse_iterator rIt = memes.rbegin(); rIt != memes.rend(); rIt++)
        cout << *rIt << " ";
    cout << endl;

}

