#include <iostream>
#include <string>
#include <fstream>
#include "TodoList.h"
#include "TodoListInterface.h"
#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]) {
	TodoList list;

	if (argc == 1) {
		cout << "Please enter one of the following options: \"add\" \"remove\" \"printList\" \"printDay\"." << endl;
		return 0;
	}

	if (static_cast<string>(argv[1]) == "add") {
		//cout << "add function ran!" << endl;
		list.add(static_cast<string>(argv[2]), static_cast<string>(argv[3]));
	}
	else if (static_cast<string>(argv[1]) == "remove") {
		//cout << "remove function ran!" << endl;
		list.remove(static_cast<string>(argv[2]));
	}
	else if (static_cast<string>(argv[1]) == "printList") {
		//cout << "print function ran!" << endl;
		list.printTodoList();
	}
	else if (static_cast<string>(argv[1]) == "printDay") {
		//cout << "printDay function ran!" << endl;
		list.printDaysTasks(argv[2]);
	}
	else {
		cout << "Please enter one of the following options: \"add\" \"remove\" \"printList\" \"printDay\"." << endl;
	}

	return 0;
}