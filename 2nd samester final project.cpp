#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string intToString(int num)
{
    stringstream ss;
    ss << num;
    return ss.str();
}

string centerText(string text, int width)
{
    int leftPadding = (width - text.length()) / 2;
    return string(leftPadding, ' ') + text;
}

class Item
{
protected:
    string name;
    int quantity;
    float price;

public:
    Item(string n = "", int q = 0, float p = 0.0f)
        : name(n), quantity(q), price(p) {}

    virtual float getTotalPrice() const 
	{
        return quantity * price;
    }

    virtual void display() const 
	{
        cout << left << setw(20) << name << setw(10) << quantity << setw(10) << fixed << setprecision(2) << price << setw(10) << fixed << setprecision(2) << getTotalPrice() << endl;
    }

    string getName() const { return name; }
    int getQuantity() const { return quantity; }
    float getPrice() const { return price; }

    void setQuantity(int q) { quantity = q; }
    void setPrice(float p) { price = p; }
};

class Food : public Item 
{
public:
    Food(string n, int q, float p) : Item(n, q, p) {}
};

class Accessory : public Item 
{
public:
    Accessory(string n, int q, float p) : Item(n, q, p) {}
};

class Kitchenware : public Item 
{
public:
    Kitchenware(string n, int q, float p) : Item(n, q, p) {}
};

class Electronics : public Item 
{
public:
    Electronics(string n, int q, float p) : Item(n, q, p) {}
};

class Stationery : public Item 
{
public:
    Stationery(string n, int q, float p) : Item(n, q, p) {}
};

class Cart 
{
private:
    vector<Item*> items;
    static int receiptNo;

public:
    ~Cart() 
	{
        for (int i = 0; i < items.size(); i++)
            delete items[i];
    }

    void addItem(Item* item) 
	{
        items.push_back(item);
    }

    void cancelItem(string itemName) 
	{
        for (int i = 0; i < itemName.length(); i++) 
		{
            itemName[i] = tolower(itemName[i]);
        }

        for (int i = 0; i < items.size(); i++) 
		{
            string cartName = items[i]->getName();
            for (int j = 0; j < cartName.length(); j++) 
			{
                cartName[j] = tolower(cartName[j]);
            }

            if (cartName == itemName) 
			{
                delete items[i];
                items.erase(items.begin() + i);
                cout << ".......................Item \"" << itemName << "\" removed from cart...........................\n";
                return;
            }
        }

        cout << "...................Item not found in cart..................\n";
}



    void updateItem(string itemName) 
	{

        for (int i = 0; i < itemName.length(); i++) 
		{
            itemName[i] = tolower(itemName[i]);
        }

        for (int i = 0; i < items.size(); i++) 
		{
            string cartName = items[i]->getName();
            for (int j = 0; j < cartName.length(); j++) 
			{
                cartName[j] = tolower(cartName[j]);
            }

            if (cartName == itemName) 
			{
                int newQty;
                float newPrice;
                while (true) 
				{
                    cout << "Enter new quantity: ";
                    cin >> newQty;
                    if (cin.fail() || newQty <= 0) 
					{
                        cin.clear(); // clear fail bit
                        cin.ignore(10000, '\n'); // flush buffer
                        cout << "? Invalid input! Enter a valid quantity.\n";
                    } 
					else 
					{
                        cin.ignore(10000, '\n'); // clean up after number
                        break;
                    }
                }

                while (true) 
			    {
                    cout << "Enter new price: ";
                    cin >> newPrice;
                     if (cin.fail() || newPrice < 0) 
			    	{
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << " Invalid input! Enter a valid price.\n";
                    } 
			    	else 
			    	{
                        cin.ignore(10000, '\n');
                        break;
                    }
                }

                items[i]->setQuantity(newQty);
                items[i]->setPrice(newPrice);
                cout << "............... Item \"" << items[i]->getName() << "\" updated successfully................\n";
                return;
            }
        }

        cout << " ...................Item not found in cart........................\n";
    }




    void printBill() 
	{
        float total = 0;
        int width = 50;
        string border = "+" + string(width - 2, '-') + "+";

        cout << "\n\n" << border << endl;
        cout << "|" << centerText("SUPERMARKET RECEIPT #" + intToString(receiptNo), width - 2) << "\t\t |\n";
        cout << border << endl;

        cout << left << setw(20) << "Item"
             << setw(10) << "Qty"
             << setw(10) << "Price"
             << setw(10) << "Total" << endl;
        cout << string(width, '-') << endl;

        for (int i = 0; i < items.size(); i++) 
		{
            items[i]->display();
            total += items[i]->getTotalPrice();
        }

        cout << string(width, '-') << endl;

        float discount = 0;
        if (total >= 7000 && total <= 20000)
            discount = total * 0.15f;
        else if (total > 20000)
            discount = total * 0.20f;

        float grandTotal = total - discount;

        cout << right << setw(width - 20) << "Subtotal: Rs. " << fixed << setprecision(2) << total << endl;
        if (discount > 0)
            cout << right << setw(width - 20) << "Discount: Rs. " << fixed << setprecision(2) << discount << endl;
        cout << right << setw(width - 20) << "Grand Total: Rs. " << fixed << setprecision(2) << grandTotal << endl;

        cout << border << "\n\n";
        receiptNo++;
    }
};

int Cart::receiptNo = 1;

class SuperMarket 
{
private:
    Cart* cart;

public:
    SuperMarket() 
	{
        cart = new Cart();
    }

    ~SuperMarket() 
	{
        delete cart;
    }


    void showSections() 
	{
        cout << "\nSelect a Section to Add Item:\n";
        cout << "1. Food\n";
        cout << "2. Accessories\n";
        cout << "3. Kitchenware\n";
        cout << "4. Electronics\n";
        cout << "5. Stationery\n";
    }

    void addItemToCart() 
	{
        int choice;
        do 
		{
            showSections();
            cout << "Enter section number: ";
            cin >> choice;

            string itemName;
            int quantity;
            float price;

            cout << "Enter item name: ";
            cin.ignore();
            getline(cin, itemName);
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter price per item: ";
            cin >> price;

            Item* item = NULL;

            switch (choice) 
			{
                case 1: item = new Food(itemName, quantity, price); break;
                case 2: item = new Accessory(itemName, quantity, price); break;
                case 3: item = new Kitchenware(itemName, quantity, price); break;
                case 4: item = new Electronics(itemName, quantity, price); break;
                case 5: item = new Stationery(itemName, quantity, price); break;
                default:
                    cout << "Invalid section!\n";
                    continue;
            }

            cart->addItem(item);

            char more;
            cout << "Add another item? (y/n): ";
            cin >> more;
            if (more == 'n' || more == 'N') break;
        } while (true);
    }

    void cancelItemFromCart() 
	{
        string itemName;
        cout << "Enter item name to cancel: ";
        cin.ignore(); 
        getline(cin, itemName);
        cart->cancelItem(itemName);
    }


    void updateItemInCart() 
	{
        string itemName;
        cout << "Enter item name to update: ";
        cin.ignore(); // << DON'T MISS THIS!
        getline(cin, itemName);
        cart->updateItem(itemName);
    }


    void menu() 
	{
        int choice;
        cout << "\n\n===== Welcome to Super Market Billing System =====\n";
        do 
		{
            cout << "\n1. Add Item";
            cout << "\n2. Cancel Item";
            cout << "\n3. Update Item";
            cout << "\n4. Print Receipt";
            cout << "\n5. Exit";
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) 
			{
                case 1: addItemToCart(); break;
                case 2: cancelItemFromCart(); break;
                case 3: updateItemInCart(); break;
                case 4: cart->printBill(); break;
                case 5: cout << "\nThank you for shopping! Visit again!\n"; break;
                default: cout << "\nInvalid choice! Try again.\n"; break;
            }
        } while (choice != 5);
    }
};

int main() 
{
    SuperMarket sm;
    sm.menu();
    return 0;
}

