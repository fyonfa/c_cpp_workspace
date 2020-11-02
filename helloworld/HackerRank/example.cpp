#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double result_tip = 0;
    double result_tax = 0;
    double result_total = 0;
    double meal_cost = 12.00;
    int tip_percent = 20;
    int tax_percent = 8;

    result_tip = meal_cost * ((double)tip_percent / 100);
    result_tax = meal_cost * ((double)tax_percent / 100);
    result_total = result_tip + result_tax + meal_cost;
    cout << nearbyint(result_total);

    //system("pause");
    return 0;
}
