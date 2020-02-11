#include<iostream>
using namespace std;
//������ �������
//�������� ���������, ������� ���������� ������ �������
//maximum ��� ������ ������������� �� ���� ����� �����, ���� ����� �
//��������� ������� � ���� ��������.
template<class T>
T maximum(T n, T n1, T n2) {
	if (n > n1&&n > n2) {
		return n;
	}
	else if (n1 > n&&n1 > n2) {
		return n1;
	}
	else if (n2 > n&&n2 > n1) {
		return n2;
	}
	else {
		return 0;
	}
}

//������ �������
//�������� ���������, ������� ���������� ������ ������� ��
//����� min ��� ����������� ����������� �� ���� ����������.���������
//���������, ��������� ���� ����� �����, �������� � ����� � ���������
//�������.
template<class T>
T min(T n, T n1, T n2) {
	if (n < n1&&n < n2) {
		return n;
	}
	else if (n1 < n&&n1 < n2) {
		return n1;
	}
	else if (n2 < n&&n2 < n1) {
		return n2;
	}
	else {
		return 0;
	}
}

//������ �������
//����������, �������� �� ��������� ��������� ���������
//������.��� ������ ������ �������, ��� ��� ����� ���� ����������.
//���������: � ��������� ���������� ������ ����� �������������.
//	a)  template < class A >
//	int sum(int numl, int num2, int num3)
//	{
//	return numl + num2 + num3; )		<--- ����������� ���������� ������ ����� ������ ����� ')' ����� ������ '}'

//	b) void printResults(int x, int y)
//	{
//		cout � "����� ����� " � x + � � ' \n';
//		return x + y;					<--- ������� �� ������ ���������� ��������
//	}

//	c) template < class A>
//	A product(A numl, A num2, A num3)
//	{
//		return  numl * num2 * num3;
//	}
//double cube(int);				 
//int cube(int);						<--- ����������� �������������� �������

//������� ������
//4. ��� ��������� ������� �� �����, ������ �� ������� ��������
//������ ���� ����������(1, 1, 2, 3, 5, 8, 13, �).����� n - ��� ������� ����,
//��������� ��������.
int fibonachi(int n) {
	if (n < 2) {
		return n;
	}
	else {
		return fibonachi(n-2) + fibonachi(n-1);
	}
}


//������� ����
//5. ���������� ����� ��������(���) ���� ����� ����� � � � � ���
//���������� �����, �� ������� ��� ������� ������� ������ �� ���� �����.
//�������� ����������� ������� nod, ������� ���������� ����������
//����� �������� ����� � � �.��� ��� � � � ������������ ����������
//��������� ������� : ���� � ����� 0, �� nod(x, �)  ���������� �; � ���������
//������ nod(x, �) ��������� nod(y, � % �), ��� %  � ��� �������� ����������
//�������.
int NOD(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		NOD(y, x%y);
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	//������ �������
	//cout << maximum(5, 4, 7) << endl;

	//������ �������
	//cout << min(5, 1, 2) << endl;

	//������� ������
	/*int k=0;
	cout << "������� ����� n: " << endl; cin >> k;
	cout << fibonachi(k) << endl;*/

	//������� ����
	/*int a, b;
	cout << "������� ��� �����: " << endl;
	cin >> a >> b;
	cout <<"���: "<< NOD(a, b) << endl;*/

	system("pause");
	return 0;
}