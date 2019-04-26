#include <iostream>//��� �����-������
#include <fstream>//��� ������ �����
#include <vector>//��� ������������� ������� 

using namespace std;//���� ������ ��� �� ������ std::

//����� �����
int main(void) {
    double max, n; //���������� ��� ����.��. � �����
    ifstream your_file("file.txt");//������� ������ ������ ifstream

    if (!your_file.is_open())
        //���� ���� �� ������, �� ��������� �� ������
        cout << "Error opening file!";


    else {
        //���� ���� ������, �� �����������:
        vector<double> v;
        //����� �� ����� � �����.������
        while (your_file >> n)
            v.push_back(n);

        //���� ��������
        for (int i = 0; i < v.size(); i++)
            if (v[i] > max)
                max = v[i];

        your_file.close();//��������� ����
        cout << "Max: " << max;//������� ����.����.
    }
    return 0;
}
