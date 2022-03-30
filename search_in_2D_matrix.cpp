// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &a, int t)
    {
        int n = a.size();
        int m = a[0].size();

        int l = 0, r = m * n - 1;

        while (l != r)
        {
            // int mid = (l + r - 1) >> 1;
            int mid = (l + r - 1) / 2;
            if (a[mid / m][mid % m] == t)
            {
                return true;
            }
            if (a[mid / m][mid % m] < t)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        return (a[r / m][r % m] == t);
    }
};

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &mat, int t)
    {
        int n = mat.size();
        int m = mat[0].size();

        if (n == 0)
        {
            return false;
        }

        int l = 0, r = n * m - 1;

        while (l != r)
        {
            int mid = (l + r - 1) / 2;
            if (mat[mid / m][mid % m] == t)
            {
                return true;
            }

            if (mat[mid / m][mid % m] > t)
            {
                r = mid;
            }

            else
            {
                l = mid + 1;
            }
        }

        return (mat[r / m][r % m] == t);
    }
};