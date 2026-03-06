#include <iostream>
#include <string>
using namespace std;

int main() {
    string tasks[100];  
    int taskCount = 0;
    int choice;

    while (true) {
        cout << "\n=== Todo List ===\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();  

        if (choice == 1) {
            if (taskCount < 100) {
                cout << "Enter task: ";
                getline(cin, tasks[taskCount]);
                taskCount++;
                cout << "Task added!\n";
            } else {
                cout << "List full!\n";
            }
        } else if (choice == 2) {
            if (taskCount == 0) {
                cout << "No tasks!\n";
            } else {
                cout << "\nYour Tasks:\n";
                for (int i = 0; i < taskCount; i++) {
                    cout << (i+1) << ". " << tasks[i] << endl;
                }
            }
        } else if (choice == 3) {
            if (taskCount > 0) {
                cout << "Enter task number to delete: ";
                int index;
                cin >> index;
                if (index > 0 && index <= taskCount) {
                    for (int i = index - 1; i < taskCount - 1; i++) {
                        tasks[i] = tasks[i + 1];
                    }
                    taskCount--;
                    cout << "Task deleted!\n";
                } else {
                    cout << "Invalid!\n";
                }
            } else {
                cout << "No tasks!\n";
            }
            cin.ignore();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Wrong choice!\n";
        }
    }
    return 0;
}
