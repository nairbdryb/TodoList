#include <iostream>
#include <string>
#include <fstream>
#include "TodoList.h"
#include "TodoListInterface.h"
#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]) {
	TodoList listThing;
	
	// Test Case
	//listThing.remove("thingy");

	if (static_cast<string>(argv[1]) == "add") {
		//cout << "add function ran!" << endl;
		listThing.add(static_cast<string>(argv[2]), static_cast<string>(argv[3]));
	}
	else if (static_cast<string>(argv[1]) == "remove") {
		//cout << "remove function ran!" << endl;
		listThing.remove(static_cast<string>(argv[2]));
	}
	else if (static_cast<string>(argv[1]) == "printList") {
		//cout << "print function ran!" << endl;
		listThing.printTodoList();
	}
	else if (static_cast<string>(argv[1]) == "printDay") {
		//cout << "printDay function ran!" << endl;
		listThing.printDaysTasks(argv[2]);
	}
	/*else if (argv[0] != "yeet yeet yeet mah bones!") {
		cout << "argv[1] did not trigger anything" << endl;
	}*/
	else {
		cout << "ya done broked it!" << endl;
	}

	return 0;
}
