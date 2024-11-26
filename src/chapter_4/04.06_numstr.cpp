//#include "chapter_4_head.h"

int numstr()
{
    cout << "�㷿��������ģ�\n";
    int year;
    cin >> year;
    cin.get();
    cout << "�㷿���������֣�\n";
    char address[80];
    cin.getline(address, 80);
    //cin >> address;
    cout << "������ݣ�" << year << endl;
    cout << "��ַ��" << address << endl;
    cout << "��ϣ�\n";
    return 0;
}