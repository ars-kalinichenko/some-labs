//���� ������ ���-�� ����� ����������
#include <iostream>
#include <windows.h> //���� �� ���� ����������

using namespace std; //����� ������ ��� �� ������� std::

//����� �����
int main()
{
  SetConsoleCP(1251); //���� �� ���� ����������
  SetConsoleOutputCP(1251); //���� �� ���� ����������
  
  int N = 0; //����������� ��� ���������� �����
  int count = 0; //���������� ��� ���������� �������� �����
  int k = 0; //�������������� ������� �����

  cout << "������� ���-�� ����� (N): ";
  cin >> N;

  cout << "������� �����: ";

  while(k<N) //���� � ������������
  {
    int q = 0; //���������� ��� ������ �����

    cin>>q;
    if(q%2 != 0){count++;} //��������� �� ����������, ���� �������, �� +1 � ���-�� ���.�����
    k++; //�������������� ������� �����
  }

  cout << "�� ���� �������� �����: " << count;
  return 0;

}