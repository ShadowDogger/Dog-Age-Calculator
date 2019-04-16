#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
int main()
{
	int dog_age = 0;
	int early_years;
	int later_years;
	int human_years;
	string rerun;
	"yes" == true;
	"Yes" == true;
	"y" == true;
	"Y" == true;
do {


	cout << "This program is designed to tell you how old your dog is in dog years \n";
	cout << "Enter your dog's human age \n";
	cin >> dog_age;
	if (dog_age >= 0) {


	early_years = 21;
	later_years = (dog_age - 2) * 4;
	//Dog to human years past age 2 is for every 1 year is 4 dog years
	human_years = early_years + later_years;
	cout << "Your dog is " << human_years << " dog years old\n";
	}
	else {
		cout << "You did not enter a number, please try again.\n";
	}
	cout << "New Calculation? (yes/no) \n";

	}
	while (rerun);
	system("pause");
	}


