#include <iostream>
#include <ctime>
#include <string>
#include<vector>
using namespace std;
class Cake
{
private:
	int ves;
	string nachinka;
	bool gotov;
public:
	Cake()  
	{
		nachinka = "";
		gotov= 0;
		ves = 0;
	}
	Cake(string n, int v)
	{
		nachinka = n;
		ves = v;
		gotov = 0;
	}
	int GetVes()
	{
		return ves;
	}
	string GetNachinka()
	{
		return nachinka;
	}
	bool GetGotov()
	{
		return gotov;
	}
	void SetNachinka(string n)
	{
		if (gotov == 0)
		{
			nachinka = n;
		}
	}
	void SetVes(int v)
	{
		if (gotov == 0)
		{
			ves = v;
		}
	}
	void SetGotov(bool g)
	{
		if (gotov == 0)
		{
			gotov = g;
		}
	}
	void Cook(int v, bool g, string n)
	{
		if (g == 0)
		{
			ves = v;
			nachinka = n;
			gotov = 1;
		}
		else
		{
			cout << "���� �����" << endl;
		}
	}
	void Kus(int v, int k, bool g)
	{
			v -= 150 * k;       //�� � ������� ���������, ��� � ��� ���������� 150 ��. ���� ����� � ������ �������
			if (v > 0)
			{
				ves = v;
			}
			if (v <= 0)
			{
				ves = 0;
				cout << "�� ������ ���" << endl;
			}
	}
	void Eat(int v, bool g)
	{
		if (g == 1)
		{
			if (v > 0)
			{
				v = 0;
			}
			if (v <= 0)
			{
				cout << "���, ������� �� ��������� �������� ���� ����" << endl;
			}
		}
		else
		{
			cout << "�� ����� - �����" << endl;
		}
	}
};
int main()
{

	setlocale(LC_ALL, "Rus");
	Cake A;
	vector<Cake>ETOONUKRALHLEB;
	bool a;
	int ch, kek;
	int sch = 1;
	cout << "�������� ������� � ��� 3 ������ �������" << endl;
	for (int i = 0; i < 1; i++)

	{
		string n;
		cout << "�������" << endl;
		cin >> n;
	
		int ves;
		cout << "��� � �������" << endl;
		cin >> ves;

		A=Cake(n, ves);
		ETOONUKRALHLEB.push_back(A);
	}
	int answer = -1;
	while (answer != 0)
	{
		cout << "1.�����������" << endl;
		cout << "2.������� ����" << endl;
		cout << "3.������ �����" << endl;
		cout << "0.��������� ������" << endl;
		cin >> answer;
		switch (answer)
		{
		case 1:
		{
			cout << "����������� ������������ �����(0) ��� ������� �����(1)?" << endl;
			cin >> a;
			if (a == 0)
			{
				for (int i = 0; i < ETOONUKRALHLEB.size(); i++)
				{ 
					if (ETOONUKRALHLEB[i].GetGotov() == 0 && ETOONUKRALHLEB[i].GetVes() > 0)
					{
						cout << sch << ".  ����������:" << ETOONUKRALHLEB[i].GetGotov() << "   �������:" << ETOONUKRALHLEB[i].GetNachinka() << "   ���:" << ETOONUKRALHLEB[i].GetVes() << endl;
						sch++;
					}
				}
				cout << "������� ����� ������ ��� �������������(����������� �����)" << endl;
				cin >> ch;
				if (ch <= 0)
				{
					cout << "�����:\"����� ����� ���������� ������������\"" << endl;
					break;
				}
				else
				{
					ETOONUKRALHLEB[ch - 1].Cook(ETOONUKRALHLEB[ch-1].GetVes(), ETOONUKRALHLEB[ch-1].GetGotov(), ETOONUKRALHLEB[ch-1].GetNachinka());
				}
			}
			if (a == 1)
			{
				string n;
				cout << "�������� �������" << endl;
				cin >> n;

				int ves;
				cout << "��� � �������" << endl;
				cin >> ves;
				A = Cake(n, ves);
				ETOONUKRALHLEB.push_back(A);
				ETOONUKRALHLEB[ETOONUKRALHLEB.size()-1].Cook(ETOONUKRALHLEB[ETOONUKRALHLEB.size() - 1].GetVes(), ETOONUKRALHLEB[ETOONUKRALHLEB.size() - 1].GetGotov(), ETOONUKRALHLEB[ETOONUKRALHLEB.size() - 1].GetNachinka());
			}
			break;
		}
		case 2:
		{
			cout << "������ ������ ������ ������� ����" << endl;
			
			for (int i = 0; i < ETOONUKRALHLEB.size(); i++)
			{
				if (ETOONUKRALHLEB[i].GetVes() > 0)
				{
					cout << i + 1 << ".  ����������:" << ETOONUKRALHLEB[i].GetGotov() << "   �������:" << ETOONUKRALHLEB[i].GetNachinka() << "   ���:" << ETOONUKRALHLEB[i].GetVes() << endl;
				}
			}
			cin>>ch;
			if (ETOONUKRALHLEB[ch-1].GetGotov() == 0)
			{
				cout << "����� ��� �����" << endl;
			}
			else
			{
				cout << "������� ��� ������ ������� ����?" << endl;
				cin >> kek;
				ETOONUKRALHLEB[ch-1].Kus(ETOONUKRALHLEB[ch-1].GetVes(), kek, ETOONUKRALHLEB[ch - 1].GetGotov());

			}
			break;
		}
		case 3:
		{
			cout << "����� ����� ������ ������" << endl;
			for (int i = 0; i < ETOONUKRALHLEB.size(); i++)
			{
				if (ETOONUKRALHLEB[i].GetVes() > 0)
				{
					cout << i + 1 << ".  ����������:" << ETOONUKRALHLEB[i].GetGotov() << "   �������:" << ETOONUKRALHLEB[i].GetNachinka() << "   ���:" << ETOONUKRALHLEB[i].GetVes() << endl;
				}
			}
			cin >> ch;
			if (ETOONUKRALHLEB[ch - 1].GetGotov() == 0)
			{
				cout << "����� ��� �����" << endl;
			}
			else
			{
				ETOONUKRALHLEB[ch - 1].Eat(ETOONUKRALHLEB[ch - 1].GetVes(), ETOONUKRALHLEB[ch - 1].GetGotov());
			}
			break;
		}
		case 0:
		{
			break;
		}
		default:
			break;
		}
	}
	system("pause");
	return 0;
}

