#include<iostream>
#include<string>

using namespace std;

class cricketer 
{
protected:
    string name;
    int matches_played;

public:
    void input_data() 
	{
        cout << "Enter cricketer name: ";
        getline(cin, name);
        cout << "\nEnter number of matches played: ";
        cin >> matches_played;
        cin.ignore(); // Ignore the newline character left in the buffer after entering the number
    }

    // Other member functions for the base class can be added here if needed.
};

class batsman : public cricketer 
{
private:
    int total_runs;
    double average_runs;
    int best_performance;

public:
    void input_data() 
	{
        cricketer::input_data(); // Call the base class input_data function to get the name and matches_played
        cout << "Enter total runs scored: ";
        cin >> total_runs;
        cout << "Enter best performance (highest runs scored in a single match): ";
        cin >> best_performance;

        // Calculate average runs
        average_runs = static_cast<double>(total_runs) / matches_played;

        cin.ignore(); // Ignore the newline character left in the buffer after entering the number
    }

    void display_data() 
	{
        cout << "\n\nCricketer Name: " << name << endl;
        cout << "\nMatches Played: " << matches_played << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Average Runs: " << average_runs << endl;
        cout << "Best Performance: " << best_performance << endl;
    }
};

int main() 
{
    batsman b;
    b.input_data();
    b.display_data();
}