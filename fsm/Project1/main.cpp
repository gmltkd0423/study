#include"Human.h"

int main()
{
	Human* human = new Human();
	int select;

	while (1)
	{
		system("cls");
		cout << "\t <<<< �Ʒ��ϴ� �˻� >>>>" << endl;
		cout << "\t�˻簡 ���� �ൿ�� �����ּ���." << endl;
		cout << "\t ������� : " << human->GetCondition() << endl;
		cout << "\t 1.�� �ֵθ���" << endl;
		cout << "\t 2.�Ա�" << endl;
		cout << "\t 3.�޽�" << endl;
		cout << "\t ���� : ";
		cin >> select;
		switch (select)
		{
		case 1:
			human->Swing();
			break;
		case 2:
			human->Eat();
			break;
		case 3:
			human->Relax();
			break;
		default:
			cout << "1 ~ 4�� ���ڸ� �������ּ���." << endl;
		}
		system("pause");
	}
}