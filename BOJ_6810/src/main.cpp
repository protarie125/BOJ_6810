#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    auto isbn = vector<int>{ 9,7,8,0,9,2,1,4,1,8 };
    for (int i = 0; i < 3; ++i)
    {
        int x;
        cin >> x;

        isbn.push_back(x);
    }

    auto sum = int{ 0 };
    auto m = int{ 1 };
    for (const auto& v : isbn)
    {
        sum += v * m;
        m = (1 == m) ? 3 : 1;
    }

    cout << "The 1-3-sum is " << sum;

    return 0;
}