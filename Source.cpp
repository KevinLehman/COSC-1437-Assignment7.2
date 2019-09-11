/*
Kevin Lehman  - 1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment 2 - Week 7
*/

#include <iostream>
#include <string>
using namespace std;

struct DateS
{
	int year;
	int month;
	int day;
};

struct Time
{
	int hour;
	int minute;
};

struct Appoint
{
	DateS appDate;
	Time appTime;
};

DateS loadDate();
Time loadTime();
Appoint loadApp();

int main()
{
	DateS birthDay;
	Time wakeTime;
	Appoint nextApp;

	cout << "Please enter your birthday." << endl;
	birthDay = loadDate();
	cout << "You entered: " << birthDay.month << "/" << birthDay.day << "/" << birthDay.year << "." << endl;
	
	cout << "Please enter the time you typically wake up in the morning." << endl;
	wakeTime = loadTime();
	cout << "You entered: " << wakeTime.hour << ":" << wakeTime.minute << "." << endl;

	cout << "Please enter the date and time for your next dentist appointment." << endl;
	nextApp = loadApp();
	cout << "Your next dentist appointment is on " << nextApp.appDate.month << "/" << nextApp.appDate.day << "/" << nextApp.appDate.year << " at " << nextApp.appTime.hour << ":" << nextApp.appTime.minute << "." << endl;

	system("PAUSE");
	return 0;
}

DateS loadDate()
{
	DateS tempDate;
	
	cout << "Enter the year. (4 digits)" << endl;
	cin >> tempDate.year;
	cout << "Enter the month. (numeral)" << endl;
	cin >> tempDate.month;
	cout << "Enter the day. (numeral)" << endl;
	cin >> tempDate.day;
	
	return tempDate;
}

Time loadTime()
{
	Time tempTime;
	
	cout << "Enter the hour." << endl;
	cin >> tempTime.hour;
	cout << "Enter the minutes. (2 digits)" << endl;
	cin >> tempTime.minute;
	
	return tempTime;
}

Appoint loadApp()
{
	Appoint tempApp;

	tempApp.appDate = loadDate();
	tempApp.appTime = loadTime();

	return tempApp;
}