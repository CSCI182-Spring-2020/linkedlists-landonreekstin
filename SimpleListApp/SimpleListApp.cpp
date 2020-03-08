#include <iostream>
#include "SimpleList.h"

using namespace std;

int main()
{
    SimpleList s1;
    s1.QueueItem(100);
    s1.QueueItem(200);
    s1.Push(300);

    s1.DisplayList();

    cout << s1.DequeueItem() << endl;
    cout << s1.Pop() << endl;

    s1.DisplayList();
}
