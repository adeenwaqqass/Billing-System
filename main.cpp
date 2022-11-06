// Supermarket Billing System

#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void admin();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping ::menu()
{
m:
    int choice;
    string email;
    string passcode;

    cout << "\t\t\t\t________________________________\n";
    cout << "\t\t\t\t                                \n";
    cout << "\t\t\t\t                                \n";
    cout << "\t\t\t\t     Supermarket Main Menu      \n";
    cout << "\t\t\t\t                                \n";
    cout << "\t\t\t\t________________________________\n";
    cout << "\t\t\t\t                                \n";
    cout << "\t\t\t\t|   1) Admin   |\n";
    cout << "\t\t\t\t|              |\n";
    cout << "\t\t\t\t|   2) Buyer   |\n";
    cout << "\t\t\t\t|              |\n";
    cout << "\t\t\t\t|   3) Exit    |\n";
    cout << "\t\t\t\t|              |\n";
    cout << "\t\t\t\t  Please Select! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\t\t\t\t Please Login  \n";
        cout << "\t\t\t\t Enter Email  \n";
        cin >> email;
        cout << "\t\t\t\t Passwords \n";
        cin >> passcode;

        if (email == "ronny@gmail.com" && passcode == "rony@123")
        {
            admin();
        }
        else
        {
            cout << "Invalid Login details";
        }
        break;
    }
case 2:
{
    buyer();
}
case 3:
{
    exit(0);
}
default:
{
    cout << "Please select from the options below.";
}
}
goto m;

void shopping ::admin()
{
    int choice;
    cout << "\n\n\n\t\t\t Admin Menu";
    cout << "\n\n\n\t\t\t|____1) Add the product______|";
    cout << "\n\n\n\t\t\t|                            |";
    cout << "\n\n\n\t\t\t|____2) Modify the product___|";
    cout << "\n\n\n\t\t\t|                            |";
    cout << "\n\n\n\t\t\t|____3) Delete the product___|";
    cout << "\n\n\n\t\t\t|                            |";
    cout << "\n\n\n\t\t\t|__4) Back to the main Menu___|";

    cout << "\n\n\t Please enter your choices ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        add();
        break;

    case 2:
        edit();
        break;

    case 3:
        menu();
        break;

    default:
        cout << "Invalid choice!";
    }
    goto m;

    void shopping ::buyer ()
    {
        int choice;
        cout << "\t\t\t        Buyer       \n";
        cout << "\t\t\t____________________\n";
        cout << "                          \n";
        cout << "\t\t\t  1)Buy Products    \n";
        cout << "                          \n";
        cout << "\t\t\t  2) Go Back        \n";
        cout << "\t\t\t Enter your choice: \n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            receipt();
            break;

        case 2:
            menu();

        default:
            cout << "Invalid choice";
        }
        goto m;
    }
    void shopping ::add();
    {
        fstream data;
        int c;
        int token = ();
        float p;
        float d;
        string n;

        cout << "\n\n\t\t\t Add new product";
        cout << " \n\n\t Product code of the product";
        cin >> pcode;
        cout << " \n\n\t  Name of the product";
        cin >> pname
                       cout
                   << " \n\n\t Price og the product";
        cin >> price;
        cout << " \n\n\t  Discount on the product";
        cin >> dis;

        data.open("database.txt", ios::in);

        if (!data)
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " << pcode << " " << pname " " << price << " " << dis << "\n";
            data.close();
        }
        else
        {
            data >> c >> n >> p >> d;

            while (!data.eof())
            {
                if (c == pcode)
                {
                    token++;
                }
                data >> c >> n >> p >> d;
            }
            data.close();
        }
        if (token == 1)
            goto m;
        else
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " pcode << " " << pname << " " << price << " " << dis "\n";
        }
    }
    cout << "\n\n\t\t Record inserted successfully";
}

void shopping ::edit()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;
    cout << "\n\t\t\t Modify the record";
    cout << "\n\t\t\t Product code";
    cin >> pkey;

    data.open("database.txt", ios::in) if (!data)
    {
        cout << "\n\n File does not exist";
    }
    else
    {
        data, open("database.txt", ios::app | ios::out)

                      data >>
                  pcode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pkey++ pcode)
            {
                cout << "\n\t\t Product new code";
                cin >> c;
                cout << "\n\t\t Name of the product";
                cin >> n;
                cout << "\n\t\t Price";
                cin >> p;
                cout << "\n\t\t Discount";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << "\n";
                cout << "\n\n\t\t Record edited";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data.close();

        remove("database.txt");
        rename("database.txt","database.txt");

        if(token==0)
        {
            cout<<"\n\n Sorry! Record not found";
        }
    }
}
 
void shopping :: rem()
{
    fstream data,data1;
    int pkey;
    int token = 0;
    cout<<"\n\n\t Delete product";
    cout<<"\n\n\t Product code";
    cin>>pkey;
    data.open("database.txt", ios::in);
    if(!data)
    {
        cout<<"file does not exist";

    }
    else{
        data1.open("database1.txt", ios::app |ios::out);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof())
        {
            if(pcode==pkey)
            {
                cout<<"\n\n\t Product deleted successfully";
                token++;
            }
            else
            {
                data<<""<<pcode<<""<<pname<<""<<price<<""<<dis<<"\n";
            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt","database.txt");

        if(token==0)
        {
            cout<<"\n\n Record not found";
        }
    }
}

void shopping :: list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout<<"\n\n_________________________________________________________________\n";
    cout<<"proNo\t\tName\tPrice\n";
    cout<<"\n\n_________________________________________________________________\n";
    data>>pcode>>pname>>price>>dis;
    while(!data.eof())
    {
        cout<<pcode<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>price>>dis;
    }
    data.close();
}

void shopping :: receipt()
{
    fstream data;
    int arrc[100];
    int arrq[100];
    int c=0;
    float amount=0;
    float dis=0;
    float total=0;

    cout<<"\n\n\t\t\t\t RECEIPT";
    data.open("database.txt",ios::in);
    if(!data)
    {
        cout<<"\n\n Empty database";
    }
    else{
        data.close();

        list();
        cout<<"\n_________________________________________________\n";
        cout<<"\n                                                 \n";
        cout<<"\n             Please Place the order              \n";
        cout<<"\n                                                 \n";
        cout<<"\n_________________________________________________\n";
        do
        {
            m:
            cout<<"\n\n Enter the product code:";
            cin>>arrc[c];
            cout<<"\n\n Enter the product quantity:";
            cin>>arrq[c];
            for(int i=0;i<c;i++)
            {
                if(arrc[c]==arrc[i])
                {
                    cout<<"\n\n Duplicate product code. Please try again!";
                    goto m;
                }
            }
            c++;
            cout<<"\n\n Do you  want to but another product if yes then press Y else N";
            cin>>choice;
        }

        while(choice=="y");

        cout<<"\n\n\t\t\t___________RECEIPT__________\n";
        cout<<"\nProduct No\t Product Name\t product quantity\tprice\tAmount\tAmount with discount\n";

        for(int i=0;i<c;i++)
        {
            data.open("database.txt",ios::in);
            data>>pcode>pname>>price>>dis;
            while(!data.eof())
            {
                if(pcode==arrc[i])
                {
                    amount=price*arrq[i];
                    dis=amount-(amount*dis/100);
                    total=total+dis;
                    cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t\t"<<amount<<"\t\t"<<dis;
                }
                data>>pcode>>pname>>price>>dis;
            }
        }
        data.close();
    }    
    cout<<"\n\n_________________________________________________";
    cout<<"\n Total Amount:"<<total;
}
int main()
{
    shopping s;
    s.menu();
}