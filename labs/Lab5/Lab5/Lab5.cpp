#include<iostream>
#include <limits>

struct Node {
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

struct LinkedList {
    Node* head;

    LinkedList() : head(nullptr) {}

    void addValue(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void displayList() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->value << " ";
            temp = temp->next;
        }
        std::cout << "\n";
    }

    void removeValue(int val) {
        if (head == nullptr) return;

        Node* temp = head;
        Node* prev = nullptr;

        if (temp != nullptr && temp->value == val) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) return;

        prev->next = temp->next;
        delete temp;
    }

    void clearList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head = nullptr;
    }
};

void displayMenu() {
    std::cout << "\nMain Menu:\n";
    std::cout << "1. Add Value\n";
    std::cout << "2. Display List\n";
    std::cout << "3. Remove Value\n";
    std::cout << "4. Clear List\n";
    std::cout << "5. Quit\n";
    std::cout << "Enter your choice (1-5): ";
}

int getValidatedChoice() {
    int choice;
    while (true) {
        std::cin >> choice;
        if (std::cin.fail() || choice < 1 || choice > 5) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Please enter a number between 1 and 5: ";
        } else {
            break;
        }
    }
    return choice;
}

int main() {
    LinkedList list;
    int choice;
    int value;

    while (true) {
        displayMenu();
        choice = getValidatedChoice();

        switch (choice) {
            case 1:
                std::cout << "Enter the integer to add: ";
                std::cin >> value;
                list.addValue(value);
                break;

            case 2:
                std::cout << "List contents: ";
                list.displayList();
                break;

            case 3:
                std::cout << "Enter the integer value to remove: ";
                std::cin >> value;
                list.removeValue(value);
                break;

            case 4:
                char confirm;
                std::cout << "Are you sure you want to clear the list? (y/n): ";
                std::cin >> confirm;
                if (confirm == 'y' || confirm == 'Y') {
                    list.clearList();
                    std::cout << "List cleared.\n";
                }
                break;

            case 5:
                std::cout << "Exiting the program.\n";
                return 0;

            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}