#include<iostream>
using namespace std;

void hey(string name, int amount)
{
    cout << "Hey " << name << ". You have " << amount << " Taka." << endl;
}
int main()
{
    hey("Meena", "10"); // here 10 have input as a integer .
    hey("Raju", 20);
    return 0;
}
