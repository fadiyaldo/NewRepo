// week02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


float Container = 2.76f;
double Cost = 4.12;
double Profit = 1.45;
int Header = 100;
int main() {
	// taking the length of the title to be able to use it later to find out how to display it in the middle.
	string Title = " welcome to my cheese calculator ";
	int TitleLength = static_cast<int>(Title.length());
	// taking half the number of asteriks - the length of charaters to be able to calculate the number of asteriks needed for the middle row
	int Title_Size = Header - TitleLength;
	int Half_TitleSize = Title_Size / 2;
	string Fill(Half_TitleSize, '*');
	// the setfill is what character is used to fill the space 
	cout << setfill('*');
	// fills the top row with *
	cout << setw(Header) << "*" << endl;
	// this is for the second row 
	cout << Fill << right << Title << Fill << endl;
	// this is the bottom row 
	cout << setw(Header) << "*" << endl ;
	
	// we store the number of kilograms of cheese in cheese_Amount
	int cheese_Amount = 0;
	cout << "Please enter the total number of kilograms of cheese produced: ";
	cin >> cheese_Amount;
	cout << endl;
	// using the ceil function to round to the nearest whole number because the container doesnt have to be full
	int Num_Container = static_cast<int>(ceil(cheese_Amount / Container));
	string Output = "The number of containers to hold the cheese is: ";
	cout << Output << to_string(Num_Container) << endl;
	cout << setprecision(2) << std::fixed;
	//cost is number of containers * 4.12 which is stored in cost and converting it to a string to be able to use it in a sentence
	double TotalCost = Num_Container * Cost;
	Output = "The cost of producing " + to_string(Num_Container) + " container(s) of cheese is : $";
		cout << Output  << TotalCost << endl;
	// find the profit is multiplying the number of containers by 1.45
	double TotalProfit = Num_Container * Profit;
	Output = "The profit from producing " + to_string(Num_Container) + " container(s) of cheese is : $";
		cout << Output  <<TotalProfit << endl;
		return 0;
}