#include <iostream>
using namespace std;
void simon(int);

int ourfunc_main()
{
    simon(3);
    cout << "Pick an integer:";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)
{
    cout << "Simon ˵�����ֺ " << n << " �Ρ�" << endl;
    //void ��������Ҫ return
}
