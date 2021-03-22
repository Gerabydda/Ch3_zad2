#include <iostream>
int main()
{
	using namespace std;
	float rost_v_futah, rost_v_duimah, obshii_rost, ves;
	const int fut = 12;
	const float metr = 0.0254;
	const float kg = 2.2;
	cout << "Enter vashi futi: _______\b\b\b\b\b\b\b";
	cin >> rost_v_futah;
	cout << "\nEnter vashi duimi: _______\b\b\b\b\b\b\b";
	cin >> rost_v_duimah;
	cout << "\nEnter vash ves: _______\b\b\b\b\b\b\b";
	cin >> ves;
	obshii_rost= rost_v_duimah + rost_v_futah * fut;
	obshii_rost = obshii_rost * metr;
	ves = ves / kg;
	cout << "\nVash BMI raven: " << ves/(obshii_rost * obshii_rost) << " ...Vam bi sportom zanuatsa!" <<endl;
	return 0;

}