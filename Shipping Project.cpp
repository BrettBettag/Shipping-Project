#include <iostream>
#include <iomanip>
using namespace std;

void shipping_charge_standard(double &total);
void shipping_charge_premium(double &total);

int main()
{

char memberType = ' ';
double Purchase = 0.0;


cout << "Standard = 'S'" << endl << "Premium= 'P'" << endl << "Enter Member Type: " << endl;
cin >> memberType;

while (toupper(memberType) != 'S' && toupper(memberType) != 'P' )
{
cout << " Please insert valid choice from above:" << endl;
cin >> memberType;
}

cout << "Please enter your purchase: " << endl;
cin >> Purchase;


if (toupper(memberType) == 'S')
{
shipping_charge_standard(Purchase);

}
if (toupper(memberType) == 'P')
{
shipping_charge_premium(Purchase);

}

return 0;
}

void shipping_charge_standard(double &Purchase)
{
double shipping_charge = 0.0;
if (Purchase <= 100 && Purchase >= 0)
{
shipping_charge = 12.99;
}
else if(Purchase>100)
{
shipping_charge = 4.99;
}
else
{
cout<<"incorrect purchase value entered";
return;
}

cout << " purchase $ " << Purchase << " Shipping charge " << shipping_charge << endl;
cout << " Total Amount $" << Purchase+shipping_charge << endl;
}

void shipping_charge_premium(double &Purchase)
{
double shipping_charge = 0.0;
if (Purchase <= 49.99 && Purchase >= 0)
{
shipping_charge = 4.99;
}
else if(Purchase>49.99)
{
shipping_charge = 0.0;
}
else
{
cout<<"incorrect purchase amount input";
return;
}

cout << " purchase $ " << Purchase << " Shipping charge " << shipping_charge << endl;
cout << " Total Amount $" << Purchase+shipping_charge << endl;
}
