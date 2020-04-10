#include"Human.h"

int main()
{
	Human* human = new Human();
	int select;

	while (1)
	{
		system("cls");
		cout << "\t <<<< 훈련하는 검사 >>>>" << endl;
		cout << "\t검사가 취할 행동을 정해주세요." << endl;
		cout << "\t 현재상태 : " << human->GetCondition() << endl;
		cout << "\t 1.검 휘두르기" << endl;
		cout << "\t 2.먹기" << endl;
		cout << "\t 3.휴식" << endl;
		cout << "\t 선택 : ";
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
			cout << "1 ~ 4의 숫자를 선택해주세요." << endl;
		}
		system("pause");
	}
}