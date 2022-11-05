#include <iostream>

using namespace std;

class Publication
{
    string Title;
    float Price;

public:
    void Get_Data(void)
    {
        string Title;
        float Price;

        cout << "Enter the title of publication = ";
        getline(cin,Title);
        cout << "Enter the price of publication = ";
        cin >> Price;

        this->Title = Title;
        this->Price = Price;
    }

    void Put_Data(void)
    {
        cout << "Title of the publication = " << Title << endl;
        cout << "Price of the pulbication = " << Price << endl;
    }
};

class Book : public Publication
{
    int Page;

public:
    void Get_Data(void)
    {
        int Page;

        cout << "Enter the number of pages = ";
        cin >> Page;

        this->Page = Page;
    }

    void Put_Data(void)
    {
        cout << "Number of the pages in the book is " << Page << endl;
    }
};

class Tape : public Publication
{
    float Minutes;
    
public:
    void Get_Data(void)
    {
        float Minutes;

        cout << "Enter the time of Tape = ";
        cin >> Minutes;

        this->Minutes = Minutes;
    }

    void Put_Data(void)
    {
        cout << "Tape is of " << Minutes << " min" << endl;
    }
};

int main()
{
    Publication Temp1;
    Book Temp2;
    Tape Temp3;

    Temp1.Get_Data();
    Temp2.Get_Data();
    Temp3.Get_Data();

    cout<<endl;

    Temp1.Put_Data();
    Temp2.Put_Data();
    Temp3.Put_Data();

    return 0;
}