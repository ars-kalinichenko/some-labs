#include <iostream>
#include <string>
#include <windows.h> //���� �� ���� ����������


using namespace std; //����� ������ ��� �� ������� std::

//��������� ��� ��������� ������
void func(string s1, string s2) {
    for (int i = 0; i < s2.size(); i++) //����������� �� 2 ������
    {
        while (s1.find(s2[i]) != -1)
            s1.erase(s1.find(s2[i]), 1); //�������� �������� �� 1, ������� ���������� �� 2
    }
    cout << "�������� ������: " << s1 << endl;

}

//����� �����
int main() {
    SetConsoleCP(1251); //���� �� ���� ����������
    SetConsoleOutputCP(1251); //���� �� ���� ����������

    string s1, s2; //�������������� s1,s2
    cout << "������ 1 = ";
    getline(cin, s1); //��������� ������ 1
    cout << "������ 2 = ";
    getline(cin, s2); //��������� ������ 2
    func(s1, s2); //�������� ��������� ��� ��������� ������
    return 0;
}
