#include <iostream>
#include <cstring>
#include <windows.h> //���� �� ���� ����������


using namespace std;//����� ������ ��� �� ������� std::

//������� ��� ������� ������
char *rev_str(char *s1) {
    int l = strlen(s1); //������� ��������
    char *res = new char[l]; //��������� ������
    //����, ������� ����������� ������
    for (int a = l - 1, b = 0; a >= 0; a--, b++) {
        res[b] = s1[a];
    }
    return res;
}

int main() {
    SetConsoleCP(1251); //���� �� ���� ����������
    SetConsoleOutputCP(1251); //���� �� ���� ����������

    char s1_pr[100];
    cout << "�������� ����� ������: ";
    cin.getline(s1_pr, 100);
    cout << "������ ��������: " << rev_str(s1_pr);

    cin >> s1_pr;
    return 0;
}
