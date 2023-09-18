#include <iostream>

using namespace std;

double zakat_mechanism(double saving, double gold, double silver) {
    const float gold_price = 212090.77;
    const float silver_price = 7349.25;
    const float percentage_of_savings = 0.025;
    const float gold_required = 7.5;
    double silver_price_value = silver * silver_price;
    double total_gold_calc = (saving / gold_price) + (silver_price_value / gold_price) + gold;
    if (total_gold_calc >= gold_required) {
        double liquidified_expected_price = total_gold_calc * gold_price;
        return (liquidified_expected_price*percentage_of_savings);
    } else if (total_gold_calc < gold_required)
        cout << "You dont have to pay zakat";
    else 
        cout << "Something Went Wrong";
}

int main() {
    float saving;
    float gold;
    float silver;
    int selection_gold;
    int selection_silver;
    cout << "Select Gold Unit: \n1) Tola\n2) Gram\n3) No Gold" << endl;
    cout << "Enter Option (1,2 or 3): ";
    cin >> selection_gold;
    if (selection_gold == 1) {
        cout << "Enter gold in selected unit: ";
        cin >> gold;
        }
    else if (selection_gold == 2) {
        cout << "Enter gold in selected unit: ";
        cin >> gold; 
        gold = gold * 11.6638038;
        }
    else if (selection_gold == 3)
        gold = 0;
    else 
        cout << "Invalid Selection";
    cout << "Select Silver unit \n1) Ounce\n2) Kilo Gram\n3) No Silver" << endl;
    cout << "Enter Option (1,2 or 3): ";
    cin >>  selection_silver;
    if (selection_silver == 1) {
        cout << "Enter silver in selected unit: ";
        cin >> silver;
        silver = silver;
    } else if (selection_silver == 2) {
        cout << "Enter silver in selected unit: ";
        cin >> silver;
        silver = silver * 35.2739619;
    } else if (selection_silver == 3) 
        silver = 0;
    else 
        cout << "Invalid selection";
    cout << "Enter Savings(in PKR): ";
    cin >> saving;
    cout << zakat_mechanism(saving, gold, silver);
}