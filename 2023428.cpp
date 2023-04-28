#include <iostream>
#include <string>

int main()
{
	using namespace std;
	const int month_number = 12;
	const int year_number = 3;
	string month[month_number]
	{
				"Jan",	"Feb",	"Mar",	"Apr",	"May",	"Jun",	"Jul",	"Aug",	"Sept",	"Oct",	"Nov",	"Dec",
	};
	string year[year_number]
	{
		"first ","second ","third "
	};
	int sell[month_number*year_number]{ 0 }, sum = 0;
	int sell_every_year[year_number]{ 0 }, sell_all_year = 0;
	for (int y=0;y<year_number;y++)
	{
		for (int i = 0; i < month_number; i++)
		{
			cout << "in " <<year[y] << month[i] << " this book sold:";
			cin >> sell[i];
			sum = sum + sell[i];
		}
		cout << "in this year, this book sold " << sum << endl << "and ";
		sell_every_year[y] = sum;
		for (int i = 0; i < month_number; i++)
		{
			cout << month[i] << " sold " << sell[i] << endl;
		}
		sell_all_year = sum+sell_all_year;
		sum = 0;
	}
	for (int y = 0; y < year_number; y++)
	{
		cout << "in " << year[y] << " year, this book have sold " << sell_every_year[y] << endl;
	}
	cout << "in these year, this book have sold " << sell_all_year << endl;
	return 0;
}