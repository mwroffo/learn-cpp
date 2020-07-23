#include <iostream>
#include <vector>
using namespace std;

/* solve the leetcode exercise:
https://leetcode.com/explore/interview/card/top-interview-questions-easy/96/sorting-and-searching/587/
*/

void mymerge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    if (sizeof(nums1) == 0 || sizeof(nums2) == 0)
    {
        cout << "Bad args. Exiting." << endl;
    }
    if (m == 0) {
        nums1 = nums2;
    } else {
        int i = 0;
        int j = 0;
        while (j < n) {
            cout << "j=" << j << ", i=" << i << endl;
            if (nums2.at(j) < nums1.at(i)
                // TODO refine this condition... 
                // true: i > m-1 implies nums1.at(i) < nums1.at(i-1)
                // Q: when does nums1.at(i) == 0 imply shouldInsert? 
                || (nums1.at(i) == 0 && i > m-1)) {
                    nums1.insert(nums1.begin() + i, nums2.at(j));
                    nums1.pop_back();
                    j++;
            }
            else i++;
            cout << "nums1 contains: ";
            for (auto i = nums1.begin(); i < nums1.end(); i++)
            {
                cout << *i << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    // int myints[] = {1,2,3,0,0,0};
    // int moreints[] = {2,5,6};

    int myints[] = {-1,-1,0,0,0,0};
    int moreints[] = {-1,0};

    // int myints[] = {0,0,0};
    // int moreints[] = {1,2,3};

    // division gives # of elems in array:
    // so this constructor two ptrs delimiting the range to be built into a vector.
    vector<int> nums1 (myints, myints + sizeof(myints) / sizeof(int));
    vector<int> nums2 (moreints, moreints + sizeof(moreints) / sizeof(int));

    cout << "nums1 contains: ";
    for (auto i=nums1.begin(); i < nums1.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    mymerge(nums1, 4, nums2, 2);
    
    cout << "after sorting nums1 contains: ";
    for (auto i = nums1.begin(); i < nums1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}