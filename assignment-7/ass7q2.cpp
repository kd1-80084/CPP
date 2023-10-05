#include <iostream>
using namespace std;

class Product
{
private:
    string id;
    string title;
    int price;
    char type;

public:
    Product()
    {
        this->id = " ";
        this->title = " ";
        this->price = 0;
        this->type = 'Z';
    }
    Product(string id, string title, int price, char type)
    {
        this->id = id;
        this->title = title;
        this->price = price;
        this->type = type;
    }
    string getid()
    {
        return this->id;
    }
    void setid(string id)
    {
        this->id = id;
    }
    string gettitle()
    {
        return this->title;
    }
    void settitle(string title)
    {
        this->title = title;
    }
    int getprice()
    {
        return this->price;
    }
    void setprice(int price)
    {
        this->price = price;
    }
    void settype(int type)
    {
        this->type = type;
    }
    char gettype()
    {
        return this->type;
    }
    virtual void add_product()
    {
        cout << "id=";
        cin >> id;
        cout << "title=";
        cin >> title;
        cout << "price=";
        cin >> price;
        cout << "type=";
        cin >> type;
    }
    void display()
    {
        cout << "id=" << id << endl;
        cout << "title=" << title << endl;
        cout << "price=" << price << endl;
        cout << "type=" << type << endl;
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book()
    {
        this->author = " ";
        Product::settype('b');
    }
    Book(string id, string title, int price, char type, string author)
    {
        Product::setid(id);
        Product::settitle(title);
        Product::setprice(price);
        Product::settype(type);
        this->author = author;
    }
    void add_product()
    {
        cout << "enter book detail:" << endl;
        Product::add_product();
        cout << "author=";
        cin >> this->author;
    }
    void display()
    {
        cout << "book details" << endl;
        Product::display();
        cout << "author=" << this->author;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape()
    {
        this->artist = " ";
        Product::settype('t');
    }
    Tape(string id, string title, int price, char type, string artist)
    {
        Product::setid(id);
        Product::settitle(title);
        Product::setprice(price);
        Product::settype(type);
        this->artist = artist;
    }
    void add_product()
    {
        cout << "enter Tape detail:" << endl;
        Product::add_product();
        cout << "artist=";
        cin >> this->artist;
    }
    void display()
    {
        cout << "Tape details:" << endl;
        Product::display();
        cout << "artist=" << this->artist;
    }
};

int billmenu()
{
    int choice;
    cout << "--------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. total bill for book" << endl;
    cout << "2. total bill for tape" << endl;
    cout << "3. total bill" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "--------------------" << endl;
    return choice;
}

int menu()
{
    int choice;
    cout << "--------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Add Tape" << endl;
    cout << "3. calculate total" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "--------------------" << endl;
    return choice;
}

void calculatebill(int index, Product **arr)
{
    float book_total = 0.0;
    float tape_total = 0.0;
    float all_total = 0.0;
    int choice;
    while ((choice = billmenu()) = !0)
    {
        switch (choice)
        {
        case 1:
            for (int i = 0; i < index; i++)
            {
                if (arr[i]->gettype() == 'b')
                {
                    book_total = book_total + arr[i]->getprice() * 0.90;
                }
            }
            cout << "book bill=" << book_total << endl;
            break;

        case 2:
            for (int i = 0; i < index; i++)
            {
                if (arr[i]->gettype() == 't')
                {
                    tape_total = tape_total + arr[i]->getprice() * 0.95;
                }
            }
            cout << "tape bill=" << tape_total << endl;
            break;

        case 3:
            for (int i = 0; i < index; i++)
            {
                all_total = all_total + arr[i]->getprice() * 0.90;
    
            }
            cout << "book bill=" << all_total << endl;

            break;

        default:
            break;
        }
    }
}

int main()
{
    int choice;
    Product *arr[3];
    int index = 0;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                arr[index] = new Book();
                arr[index]->add_product();
                index++;
            }
            else
                cout << "Array is Full, Cannot add the book....." << endl;
            break;

        case 2:
            if (index < 3)
            {
                arr[index] = new Tape();
                arr[index]->add_product();
                index++;
            }
            else
                cout << "Array is Full, Cannot add the Tape....." << endl;
            break;

        case 3:
            calculatebill(index, arr);
            break;

        default:
            cout << "enter valid choice" << endl;
            break;
        }
    }
}
