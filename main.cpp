#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>

using namespace std;

// Structure to store data
struct Order {
    string name;
    int order_number;
    int number_of_food;
    int cost;
};

Order p[10000];
int order_count = 0, served_count = 0;

int order();
int receive();
int display();
void items();

int main() {
    cout << "\t\t     Welcome To Brothers' Cafe \n";
    while (true) {
        cout << "1. Order\n2. Serve\n3. Display\n4. Exit the program\n";
        cout << "Enter your choice: \n";
        int in;
        int f;
        cin >> in;
        cin.ignore();
        switch (in) {
            case 1: {
                order();
                break;
            }
            case 2: {
                receive();
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                cout << "We are closed come by again\n\n";
                cout << "How much you will rate us for services? :) (1-10)\n";
                cin >> f;
                for (int i = 1; i <= f; i++) {
                    cout << "* ";
                }
                cout << "    :) \n\nThanks for your valuable feedback :)\n\n";
                system("Color 02");
                cout << "Project submitted by Team ERROR NOT FOUND\n\n";
                cout << "Our hearty gratitude to honorable professor\n\n";
                cout << "           Ms. Neeshu Chaudhary       \n\n";
                cout << "DEVELOPED BY Niranjan Rathod\n\n";
                getch();
                return 0;
            }
        }
    }
}

int order() {
    int n, in, qu;
    cout << "Please enter your name: ";
    getline(cin, p[order_count].name);
    p[order_count].order_number = 10000 + order_count;

    cout << endl;
    items();

    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    level: // for goto function

    cout << "How many items do you want to order? : ";
    cin >> n;
    cin.ignore();
    while (n--) {
        cout << "\nEnter chosen item code: ";
        cin >> in;
        cin.ignore();
        switch (in) {
            case 11: {
                cout << "Enter the size of burger: 1. 200gm  2. 300gm\n";
                int i;
                cin >> i;
                cin.ignore();
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                if (i == 1)
                    p[order_count].cost += (130 * qu);
                else
                    p[order_count].cost += (180 * qu);
                break;
            }
            case 12: {
                cout << "Enter the size of Veg. Pizza: 1. 12inch  2. 14inch  3. 16inch\n";
                int i;
                cin >> i;
                cin.ignore();
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                if (i == 1)
                    p[order_count].cost += (150 * qu);
                else if (i == 2)
                    p[order_count].cost += (210 * qu);
                else
                    p[order_count].cost += (280 * qu);
                break;
            }
            case 13: {
                cout << "Enter the type of Momos: 1. Steamed  2. Fried\n";
                int i;
                cin >> i;
                cin.ignore();
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                if (i == 1)
                    p[order_count].cost += (140 * qu);
                else
                    p[order_count].cost += (160 * qu);
                break;
            }
            case 14: {
                cout << "Enter the size of grilled sandwich : 1. Veg.  2. Cheese  3. Toast\n";
                int i;
                cin >> i;
                cin.ignore();
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                if (i == 1)
                    p[order_count].cost += (70 * qu);
                else if (i == 2)
                    p[order_count].cost += (140 * qu);
                else
                    p[order_count].cost += (250 * qu);
                break;
            }
            case 15: {
                cout << "Enter the size of Noodles: 1. half  2. full\n";
                int i;
                cin >> i;
                cin.ignore();
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                if (i == 1)
                    p[order_count].cost += (130 * qu);
                else
                    p[order_count].cost += (250 * qu);
                break;
            }
            case 16: {
                cout << "Enter the size of pasta: 1. half  2. full\n";
                int i;
                cin >> i;
                cin.ignore();
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                if (i == 1)
                    p[order_count].cost += (120 * qu);
                else
                    p[order_count].cost += (240 * qu);
                break;
            }
            case 17: {
                cout << "250 mg of OREO SHAKE\n";
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                p[order_count].cost += (180 * qu);
                break;
            }
            case 18: {
                cout << "250 mg of Cold Coffee\n";
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                p[order_count].cost += (65 * qu);
                break;
            }
            case 19: {
                cout << "250 mg of Cappuccino\n";
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                p[order_count].cost += (70 * qu);
                break;
            }
            case 20: {
                cout << "250 mg of Indian Masala Tea\n";
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                p[order_count].cost += (60 * qu);
                break;
            }
            case 21: {
                cout << "Enter the size of Coke: 1. 250mg  2. 500mg\n";
                int i;
                cin >> i;
                cin.ignore();
                cout << "Please enter the quantity: ";
                cin >> qu;
                cin.ignore();
                p[order_count].number_of_food += qu;
                if (i == 1)
                    p[order_count].cost += (20 * qu);
                else
                    p[order_count].cost += (30 * qu);
                break;
            }
            default: {
                cout << "Invalid selection, try again\n";
                n++;
            }
        }
    }
    char temp;
    cout << "Do you want to order anything else? (y/n)\n ";
    cin >> temp;
    cin.ignore();
    if (temp == 'y' || temp == 'Y')
        goto level;
    cout << "\nNumber of food ordered: " << p[order_count].number_of_food << endl;
    cout << "\nThank you " << p[order_count].name << " for your order. Your bill is " << p[order_count].cost << " Rs.\nPlease wait while we prepare the food.\n\n";
    order_count++;
}

int receive() {
    if (order_count == 0) {
        cout << "Please order first\n";
        return 0;
    } else if (served_count == order_count) {
        cout << "All orders served\n";
        return 0;
    }
    cout << "Order no. " << p[served_count].order_number << " by " << p[served_count].name << " is ready\n";
    cout << "Enjoy your meal\n\n";
    served_count++;
}

int display() {
    cout << "Total orders taken: " << order_count << endl;
    cout << "Total number of orders served: " << served_count << endl;
    cout << "Number of orders currently waiting to be served: " << order_count - served_count << endl;
    cout << "Currently preparing food for order no. " << p[served_count].order_number << "\n\n";
}

void items() {
    cout << "................................*{MENU}*..................................\n";

    cout << "Item Code#   Description-------------------Size--------------------Price(Rs.)\n";

    cout << "[11]---------Burger---------------------200/300gm------------------130/180\n";
    cout << "[12]---------Veg. Pizza-----------------12/14/16inch---------------150/210/280\n";
    cout << "[13]---------Momos----------------------Steamed/Fried--------------140/160\n";
    cout << "[14]---------Grilled Sandwich-----------Veg./Cheese/Toast----------70/140/250\n";
    cout << "[15]---------Noodles--------------------Half/Full------------------130/250\n";
    cout << "[16]---------Pasta----------------------Half/Full------------------120/240\n";
    cout << "[17]---------Oreo Shake-----------------250mg----------------------180\n";
    cout << "[18]---------Cold Coffee----------------250mg----------------------65\n";
    cout << "[19]---------Cappuccino-----------------250mg----------------------70\n";
    cout << "[20]---------Indian Masala Tea----------250mg----------------------60\n";
    cout << "[21]---------Coke-----------------------250/500mg------------------20/30\n\n";
}
