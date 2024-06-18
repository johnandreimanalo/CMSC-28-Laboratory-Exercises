#include <iostream>

using namespace std;

class Powerbank {
	private:
		string brand_w_model;
		int charging_capacity;
		int batt_capacity;
	
	public:
		Powerbank(string bwm, int cc, int bc) {
			brand_w_model =  bwm;
			charging_capacity = cc;
			batt_capacity = bc;
		}
		
	void display(){
		cout << "POWERBANK SPECIFICATIONS" << endl;
		cout << "================================" << endl;
		cout << "Brand (Model): " << brand_w_model << endl;
		cout << "Charging Capacity: " << charging_capacity << " watts" << endl;
		cout << "Battery Capacity: " << batt_capacity << " mAh" << endl;
	}
};
