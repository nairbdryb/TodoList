#include "TodoListInterface.h"
#include <vector>

class TodoList : public TodoListInterface {
public:
	//TodoList();
	//~TodoListInterface();
	void add(string _duedate, string _task);
	int remove(string _task);
	void printTodoList();
	void printDaysTasks(string _date);
	int Findifyer(vector<string> days, string toFind);
	void Copyifyer(vector<string> &dates, vector<string> &tasks);
};

