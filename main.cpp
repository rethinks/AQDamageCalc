//This is a generic c++ program!
#include <iostream>
#include <string>
using namespace std;

int Attack;
int Power;
int Armor;

int main() {

	cout << "Welcome to the AQ3D Damage Calculator v0.1a" << endl;
	cout << "Created by Rethink" << endl;
	cout << "Please do not set a number beneath 1066 for armor or 1 for atk/power" << endl;
	cout << "Too lazy to do input validation" << endl;
	cout << "Application will close after one calculation" << endl;
	cout << "Disclaimer: this is reverse engineered however is accurate in testing, if you find discrepancies please contact me \n\n" << endl;
	

	cout << "Please enter your Attack" << endl;
		std::cin >> Attack;
	cout << "Please enter the spell's power" << endl;
		std::cin >> Power;
	cout << "Please enter enemy armor" << endl;
		std::cin >> Armor;

		float Atk = Attack;
		float pwr = Power;
		float arm = Armor;

float CritMaxPreArm = (((pwr / 1000) * Atk) * 1.5) * 1.25;
float CritMaxCalcAdj = CritMaxPreArm - (CritMaxPreArm / 100 * ((arm - 1066) * 0.01526));
int CritMaxHit = CritMaxCalcAdj;

float MaxPreArm = ((pwr / 1000) * Atk) * 1.25;
float MaxCalcAdj = MaxPreArm - (MaxPreArm / 100 * ((arm - 1066) * 0.01526));
int MaxHit = MaxCalcAdj;

float ExpectedHit = ((pwr / 1000) * Atk);
float ExpectedHitAdj = ExpectedHit - (ExpectedHit / 100 * ((arm - 1066) * 0.01526));
int AverageHit = ExpectedHitAdj;

float WorstHit = ((pwr / 1000) * Atk) * 0.75;
float WorstHitAdj = WorstHit - (WorstHit / 100 * ((arm - 1066) * 0.01526));
int MinHit = WorstHitAdj;

cout << "Maximum hit possible (CRIT) = " << CritMaxHit<< endl;
cout << "Maximum hit possible (NOCRIT) " << MaxHit << endl;
cout << "Expected hit " << AverageHit << endl;
cout << "Minimum hit " << MinHit << endl;

system("pause");
}
