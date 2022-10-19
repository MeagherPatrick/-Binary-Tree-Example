#include <random>
#include <ctime>
#include"biTree.h"

using namespace std;

int main()
{
    default_random_engine* gptr;
    gptr = new default_random_engine(time(NULL));
    uniform_int_distribution<int> Idist(0, 100);
    uniform_int_distribution<int> Cdist(0, 25);

    biTree* root;
    biTree* curr;
    root = new biTree;
    root->setValue(50);
    root->setLetter('M');
    int n, v;
    char c;
    cout << "add how many alphas?" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        curr = new biTree;
        v = Idist(*gptr);
        c = 'A' + Cdist(*gptr);
        cout << "adding alpha : " << v << endl;
        curr->setValue(v);
        curr->setLetter(c);
        root->addTobiTree(curr);
    }

    root->display();

    return 0;

}