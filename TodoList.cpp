#include "TodoList.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>

void TodoList::add(string _duedate, string _task){
	ofstream fout;

	string dateToAdd = _duedate;
	string TaskToAdd = _task;

	fout.open("todolist.txt", ios::app); // append to file
	fout << dateToAdd << endl;
	fout << TaskToAdd << endl;
	fout.close();
	return;

}

int TodoList::remove(string _task) {
	vector<string> dates;
	vector<string> tasks;
	TodoList TodoList;
	//vector<int> tasksToIgnore;
	ofstream fout;
	
	//find tasks to delete
	TodoList.Copyifyer(dates, tasks);
	fout.open("todolist.txt");// NOT appending to file
	for (int i = 0; i < tasks.size(); i++) {
		if (_task == tasks.at(i)) {
			//tasksToIgnore.push_back(i);		
		}
		else {
			fout << dates.at(i) << endl;
			fout << tasks.at(i) << endl;
		}
	}
	fout.close();
	return 0;
}

void TodoList::printTodoList() {
	ifstream fin;
	string text;

	cout << endl << "To do List: " << endl << endl;

	fin.open("todoList.txt");

	while (fin) {

		getline(fin, text);
		if (text != "")
		cout << text << endl;
		getline(fin, text);
		if (text != "")
		cout << text << endl << endl;
	}
	fin.close();
}

void TodoList::printDaysTasks(string _date) {
	vector<string> dates;
	vector<string> tasks;
	
	Copyifyer(dates, tasks);

	for (int i = 0; i < dates.size(); i++) {
		if (dates.at(i) == _date) {
			cout << dates.at(i) << endl;
			cout << tasks.at(i) << endl << endl;
		}
	}
}

int TodoList::Findifyer(vector<string> days, string toFind) {
	for (int i = 0; i < days.size(); i++) {
		if (static_cast<string>(toFind) == days.at(i)) {
			return i;
		}
		else {
			//do nothing else, have a nice day :)
		}
	}
	return -1;
}

void TodoList::Copyifyer(vector<string> &dates, vector<string> &tasks) {
	ifstream fileIn;
	fileIn.open("todolist.txt");
	string input;
	while (fileIn.eof() == false) {
		getline(fileIn, input);
		dates.push_back(input);
		getline(fileIn, input);
		tasks.push_back(input);
	}
	fileIn.close(); //there once was a man from france, he really really liked to dance. his name was joe, and he was an eskimo. he had a pet seal, who really liked to squeal. he was really fat, and it always wore a hat.
}