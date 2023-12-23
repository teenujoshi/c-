#include <iostream>
using namespace std;
class Relation
{
    public:
        int arrmatr[4][4];
        bool checkrefl = true;
        bool checksymm = true;
        bool checktrans = true;
        bool checkantisymm = true;
        bool checkequiv = false;
        bool checkpart = false;
void get_input()
		{
			cout<<"Enter values of matrix relation\n";
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				cin>>arrmatr[i][j];
			}
			cout<<endl;
		}
void displayrel()
		{
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout<<arrmatr[i][j]<<" ";
				}
				cout<<endl;
			}
		}
void check_reflexive()
{
	for (int i = 0; i < 4; i++)
	{
		if (arrmatr[i][i] != 1)
		{
			checkrefl = false;
		}
	}

	if(checkrefl)
		cout<<"reflexive";
	else
		cout<<"not reflexive";
}

void check_symmetric()
{
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if(arrmatr[i][j] == 1 && arrmatr[j][i] != 1 && i != j)
			{
				checksymm = false;
				checkantisymm = false;
			}

			if(arrmatr[i][j] == 1 && arrmatr[j][i] == 1 && i != j)
				checkantisymm = false;
		}
	}
	if(checksymm)
	{
		cout<<"\nsymmetric\n";
	}
	if (checkantisymm)
	{
		cout<<"\n antisymmetric \n";
	}
	if (!checksymm && !checkantisymm)
	{
		cout<<"\n neither symmetric nor antisymmetric \n";
	}
}

void check_transitive()
{
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			for(int k = 0; k < 4; k++)
			{
				if(arrmatr[i][j] == 1 && arrmatr[j][k] == 1 && arrmatr[i][k] != 1)
				{
					checktrans = false;
				}
			}
		}
	}
	if(checktrans)
	{
		cout<<"\ntransitive\n";
	}
	else
	{
		cout<<"\n not transitive\n";
	}
}
void check_antisymmetric();
void check_equivalence()
{
	check_symmetric();
	check_reflexive();
	check_transitive();
	if (checktrans && checkrefl && checksymm)
	{
		checkequiv = true;
	}
}
void check_partialorder()
{
	check_symmetric();
	check_reflexive();
	check_transitive();
	if (checkantisymm && checkrefl && checktrans)
	{
		checkpart = true;
	}
}
};

int main()
{
	Relation s;
	s.get_input();
	char check;
	do
	{
		int answer;
		cout<<"1. Display relation\n";
		cout<<"2. Check reflexive relation\n";
		cout<<"3. Check symmetric and antisymmetric relation\n";
		cout<<"4. Check transitive relation\n";
		cout<<"5. Check relation is equivalence or not\n";
        cout<<"6. Check relation is partial order or not\n";
		cout<<"7. Check relation is neither partial order nor equivalence\n";
		cout<<" Enter your choice\n";
		cin>>answer;
		switch (answer)
		{
		case 1:
			s.displayrel();
			break;
		case 2:
			s.check_reflexive();
			break;
		case 3:
			s.check_symmetric();
			break;
		case 4:
			s.check_transitive();
			break;
        case 5:
			s.check_equivalence();
			if (s.checktrans && s.checkrefl && s.checksymm)
			{
				cout<<"Relation is equivalence\n";
			}
			else
			{
				cout<<"Relation is not equivalence";
			}
			break;
		case 6:
			s.check_partialorder();
			if (s.checkantisymm && s.checkrefl && s.checktrans)
			{
				cout<<"Relation is partial order \n";
			}
			else
			{
				cout<<"Relation is not partial order\n";
			}
			break;
		case 7:
			s.check_equivalence();
			s.check_partialorder();
			if (!s.checkpart && !s.checkequiv)
			{
				cout<<"Relation is neither partial order nor equivalence.";
			}
			else
			{
				cout<<"Relation is can be partial order or  equivalence";
			}
			break;
		default:
			cout<<" Wrong input please enter valid choice";
		}
		cout<<"\n Enter y/Y to repeat or any other character to stop. \n";
		cin>>check;
	} while (check == 'y' || check == 'Y');
	return 0;
}
