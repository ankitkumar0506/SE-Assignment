#include <iostream>
#include <cmath>
using namespace std;

const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

class Event {
    string name,firstName, lastName; 

    int numGuests, numMinutes, numServers;
  
    double costForOneServer, totalFoodCost, averageCost, totalCost, depositAmount;

public:
    Event() {
        name = "";
        firstName = "";
        lastName = "";
        numGuests = 0;
        numMinutes = 0;
        numServers = 0;
        costForOneServer = 0.0;
        totalFoodCost = 0.0;
        averageCost = 0.0;
        totalCost = 0.0;
        depositAmount = 0.0;
    }

    void setName(string n) 
	{
        name = n;
    }

    void setFirstName(string fn) 
	{
        firstName = fn;
    }

    void setLastName(string ln) 
	{
        lastName = ln;
    }

    void setNumGuests(int ng) 
	{
        numGuests = ng;
    }

    void setNumMinutes(int nm) 
	{
        numMinutes = nm;
    }

    void calculateNumServers() 
	{
        numServers = ceil(numGuests / 20.0);
    }

    void calculateCostForOneServer() 
	{
        double cost1 = (numMinutes / 60.0) * CostPerHour;
        double cost2 = (numMinutes % 60) * CostPerMinute;
        costForOneServer = cost1 + cost2;
    }

    void calculateTotalFoodCost() 
	{
        totalFoodCost = numGuests * CostOfDinner;
    }

    void calculateAverageCost() 
	{
        averageCost = totalFoodCost / numGuests;
    }

    void calculateTotalCost() 
	{
        totalCost = totalFoodCost + (costForOneServer * numServers);
    }

    void calculateDepositAmount() 
	{
        depositAmount = totalCost * 0.25;
    }

    void printEventDetails() 
	{
        cout <<endl << "============== Event Estimate for" << firstName <<" ===============" <<endl <<endl;
       
	    cout << "Organizer Name: " << firstName << " " << lastName <<endl;
        cout <<endl << "Number of Guests: " << numGuests << endl;
        cout << "Number of Minutes: " << numMinutes << endl;
        cout << "Number of Servers: " << numServers << endl;
        cout << "Cost for One Server: " << costForOneServer << endl;
        cout << "Total Food Cost: " << totalFoodCost << endl;
        cout << "Average Cost per Person: " << averageCost << endl;
        cout << "Total Cost: " << totalCost << endl;
        cout << "Deposit Amount: " << depositAmount << endl;
    }
};

int main() {
    Event event;

    string eventName, firstName, lastName;
    int numGuests, numMinutes;

	cout <<endl << "************ Event Management System ************* " <<endl <<endl;
  
    cout << "Enter The Name of the Event...";
    getline(cin, eventName);
    event.setName(eventName);

    cout << "Enter your First Name & Last Name... ";
    getline(cin, firstName);
    event.setFirstName(firstName);

    cout << "Enter the Number of Guests... ";
    cin >> numGuests;
    event.setNumGuests(numGuests);

    cout << "Enter the Number of Minutes.... ";
    cin >> numMinutes;
    event.setNumMinutes(numMinutes);
    

    event.calculateNumServers();
    event.calculateCostForOneServer();
    event.calculateTotalFoodCost();
    event.calculateAverageCost();
    event.calculateTotalCost();
    event.calculateDepositAmount();

    event.printEventDetails();

    return 0;
}

