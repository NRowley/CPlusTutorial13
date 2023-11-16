#include <iostream>
#include <string>
using namespace std;

class Character {
public:
	Character() {
		cout << "new char created \n";
		CharacterAge = new int(32);
		CharacterHealth = new float(100.f);
	}
	//Destructor
	~Character() {
		cout << "char destroyed \n";
		delete CharacterAge;
		delete CharacterHealth;
	}

	int* CharacterAge;
	float* CharacterHealth;
};

void AddToCount() {
	static int count = 0;
	count++;
	cout << count << endl;
}

class Item {
public:
	Item() {
		cout << "Item created \n";
	}
	~Item() {
		cout << "Item destroyed \n";
	}
};

class Critter {
public:
	Critter() {
		cout << "Critter is born \n";
		CritterCount++;
	}

	static void showCritterCount() {
		cout << CritterCount << endl;
	}

	static int CritterCount;
};
//can't init static vars in classes
int Critter::CritterCount = 0;

int main() {

	/*Character* Char = new Character;
	delete Char;*/

	/*for (int i = 0; i < 100; i++) {
		AddToCount();
	}*/
	
	//doesn't get deleted when the code is done with the scope
	{
		static Item item;
	}
	//don't need instace to modify static vars
	Critter::CritterCount = 14;

	cout << Critter::CritterCount << endl;
	
	Critter crit;
	cout << Critter::CritterCount << endl;
	Critter::showCritterCount();
	Critter crit2;
	cout << Critter::CritterCount << endl;

	system("pause");
}