#include <iostream>
#include <string>
#include <vector>

/* learn how to use vectors */

int main() {
    std::vector<int> myvector (3,100);
    std::vector<int>::iterator it;

    it = myvector.begin();
    it = myvector.insert(myvector.begin()+10, 200);

    std::cout << myvector.at(2);
    // myvector.insert(it, 2, 300);

    // need a new iterator
    it = myvector.begin();

    std::vector<int> anothervector (2,400);
    // myvector.insert(it+2,anothervector.begin(),anothervector.end());

    int myarray [] = { 501, 502, 503 };

    // myvector.insert (myvector.begin(), myarray, myarray+3);
    
    std::cout << "myvector contains:";

    

    for (it=myvector.begin(); it < myvector.end(); it++)
      std::cout << ' ' << *it;
    std::cout << std::endl;
    
    return 0;
}