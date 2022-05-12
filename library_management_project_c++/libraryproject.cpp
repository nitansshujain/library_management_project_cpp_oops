#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <stdio.h>
using namespace std;
static int cnty = 0;

class security
{
public:
  string Book_Store_Name;
  string Gst_Number;
  string DOB;
  string Add;
  string user_name;
  string pass;
  string secure;

  void read_data()
  {
    system("cls");
    fstream fout;

    cout << "Enter Book Store Name::";
    cin >> Book_Store_Name;
    fflush(stdin);

    cout << "Enter GST Number::";
    cin >> Gst_Number;
    fflush(stdin);

    cout << "Enter Date Of Birth::";
    cin >> DOB;
    fflush(stdin);

    cout << "Enter ADDRESS::";
    cin >> Add;
    fflush(stdin);

    cout << "Enter USER NAME::";
    cin >> user_name;
    fflush(stdin);

    cout << "Enter PASSWORD::";
    cin >> pass;

    cout << "Enter Security Key::";
    cin >> secure;

    // fout << "\nPASSWORD::" << pass << "    ";
    fout.open("newpassword.txt", ios::out);
    fout << " " << Book_Store_Name << " " << Gst_Number << " " << DOB << " " << Add << " " << user_name << " " << pass << " " << secure << "\n";
    fout.close();
  }

  void set_data()
  {
    system("cls");
    fstream fout;

    fflush(stdin);

    cout << "Enter new  USER NAME::";
    cin >> user_name;
    fflush(stdin);

    cout << "Enter new PASSWORD::";
    cin >> pass;
    fout << "\nPASSWORD::" << pass << "    ";
    fout.open("newpassword.txt", ios::out);
    fout << " " << Book_Store_Name << " " << Gst_Number << " " << DOB << " " << Add << " " << user_name << " " << pass << " " << secure << "\n";
    fout.close();
  }

  int compare()
  {
    system("cls");
    fstream fout;
    const int N = 70;
    char line[N];
    string user_name, pass;
    string uname;
    string pswd;

    cout << "Enter Login Details" << endl;

    fout.open("newpassword.txt", ios::in);
    if (!fout)
    {
      cout << "Error in opening file!!!!!";
    }
    else
    {
      fflush(stdin);
      cout << "Enter username::";
      cin >> uname;
      fflush(stdin);
      cout << "Enter password::";
      cin >> pswd;
      fout >> Book_Store_Name >> Gst_Number >> DOB >> Add >> user_name >> pass >> secure;
      while (!fout.eof())
      {
        if (uname == user_name)
        {

          getch();
          if (pswd == pass)
          {

            getch();
            return 1;
          }
          else
          {
            return 0;
          }
        }
        else
        {
          return 0;
        }
      }
    }
    fout.close();
  }

  void get_Details()
  {
    system("cls");
    fstream fout;
    const int N = 70;
    char line[N];
    string user_name, pass;
    string uname;
    string pswd;

    cout << "Enter Login Details" << endl;

    fout.open("newpassword.txt", ios::in);
    if (!fout)
    {
      cout << "Error in opening file!!!!!";
    }
    else
    {
      fflush(stdin);
      cout << "Enter username::";
      cin >> uname;
      fflush(stdin);
      cout << "Enter password::";
      cin >> pswd;
      fout >> Book_Store_Name >> Gst_Number >> DOB >> Add >> user_name >> pass >> secure;
      while (!fout.eof())
      {

        cout << "Book Shop Name::" << Book_Store_Name << endl;
        cout << "GST Number::" << Gst_Number << endl;
        cout << "Date Of Birth::" << DOB << endl;
        cout << "User Name::" << user_name << endl;
        cout << "Password::" << pass << endl;
        cout << "Address::" << Add << endl;
        cout << "Security Key::" << secure << endl;

        getch();
        return;
      }
    }
    fout.close();
  }
  int get_user_pass()
  {
    system("cls");
    fstream fout;
    const int N = 70;
    char line[N];
    string secure, sc;
    string user_name, pass;
    string uname;
    string pswd;

    cout << "Enter Login Details" << endl;

    fout.open("newpassword.txt", ios::in);
    if (!fout)
    {
      cout << "Error in opening file!!!!!";
    }
    else
    {
      fflush(stdin);
      cout << "Enter security key::";
      cin >> sc;
      fflush(stdin);

      fout >> Book_Store_Name >> Gst_Number >> DOB >> Add >> user_name >> pass >> secure;
      while (!fout.eof())
      {
        if (secure == sc)
        {

          getch();
          return 1;
        }
        else
        {
          return 0;
        }
      }
    }

    fout.close();
  }
};

class Bookshop
{
public:
  void control_panel();
};
void Bookshop::control_panel()
{
  system("cls");
  cout << "\n\n\t\t\t\t BOOKSHOP MANAGEMENT SYSTEM!!!!!!!!";
  cout << "\n\n 1. Add New Hard Copy Book";
  cout << "\n 2. Add New Soft Copy Book";
  cout << "\n 3.Display Books";
  cout << "\n 4.Check Specific Book also for Buying";
  cout << "\n 5.Update Book";
  cout << "\n 6. Delete Book";
  cout << "\n 7. Books on Rent";
  cout << "\n 8.Exit";
  cout << "\n 9.Modify Username/Password";
  cout << "\n 10.Enter Customer Details::";
  cout << "\n 11. Search Customer Details::";
  cout << "\n 12. Stock of books::";
  cout << "\n 13.Shop Details::";
}
class HAdd_Books
{
public:
  int cost;
  string b_id;
  string b_name;
  string a_name;
  int no_copies;

public:
  void Gadd_book()
  {
    system("cls");
    cout << "\n\n\n\t\t\tAdd New  Book";
  m:

    fflush(stdin);
    cout << "\n Book Name::";
    cin >> b_name;
    fflush(stdin);
    cout << "\n Author Name::";
    cin >> a_name;
    fflush(stdin);
    cout << "\n No. of Copies::";
    cin >> no_copies;
    cout << "\n Enter the cost of Books::";
    cin >> cost;
    b_id = b_name + a_name;
  }
  void G2add_book()
  {

    cout << "\n\n\n\t\t\t New  Books Are";
    cout << "\n Book ID::" << b_id;

    cout << "\n Book Name::" << b_name;

    cout << "\n Author Name::" << a_name;

    cout << "\n No. of Copies::" << no_copies;

    cout << "\n Enter the cost of Books::" << cost;
    cout << "\n---------------------------------------------------------------------\n";
  }
  void G4add_book()
  {
    system("cls");
    b_id = "0";
    b_name = "NULL";
    a_name = "NULL";
    no_copies = INT_MIN;
    cost = INT_MIN;
    cout << "\n\n\n\t\t\t  Your Books is deleted";
    cout << "\n Book ID::" << b_id;

    cout << "\n Book Name::" << b_name;

    cout << "\n Author Name::" << a_name;

    cout << "\n No. of Copies::" << no_copies;

    cout << "\n Enter the cost of Books::" << cost;
  }
  void G3add_book()
  {
    system("cls");
    char change, change_N, change_A, change_NC, change_C;
    cout << "\n\n\n\t\t\t Book Are";
    cout << "\n Book ID::" << b_id;

    cout << "\n Book Name::" << b_name;

    cout << "\n Author Name::" << a_name;

    cout << "\n No. of Copies::" << no_copies;

    cout << "\n Enter the cost of Books::" << cost;

    cout << "\n\n\t\t\tYou want to change Book Name(y/n)::";
    cin >> change_N;
    if (change_N == 'y' || change_N == 'Y')
    {
      fflush(stdin);
      cout << "Enter New Changed Book Name::";
      cin >> b_name;
      fflush(stdin);
    }
    fflush(stdin);
    cout << "\n\n\t\t\tYou want to change Author Name(y/n)::";
    cin >> change_A;
    fflush(stdin);
    if (change_A == 'y' || change_A == 'Y')
    {
      fflush(stdin);
      cout << "Enter New Author name:";
      cin >> a_name;
      fflush(stdin);
    }
    cout << "\n\n\t\t\tYou want to change Number of Copies(y/n)::";
    cin >> change_NC;
    if (change_NC == 'y' || change_NC == 'Y')
    {
      cout << "Enter New Number of copies::";
      cin >> no_copies;
    }
    cout << "\n\n\t\t\tYou want to change Cost(y/n)::";
    cin >> change_C;
    if (change_C == 'y' || change_C == 'Y')
    {
      cout << "Enter New Cost::";
      cin >> cost;
    }
    b_id = b_name + a_name;
  }
  int searchI_D(string a)
  {
    if (a == b_id)
    {
      return 1;
    }
    else
      return 0;
  }
  int searchA_N(string a_n)
  {
    if (a_n == a_name)
    {
      return 1;
    }
    else
      return 0;
  }
  int Rent_Book(string b_n)
  {
    if (b_n == b_name)
    {
      return 1;
    }
    return 0;
  }
  int update(string f)
  {
    if (f == b_id)
    {
      return 1;
    }
    return 0;
  }
  int idelete(string v)
  {
    if (v == b_id)
    {
      return 1;
    }
    return 0;
  }
  void BookPrice(int dy)
  {
    if (dy < 15)
    {
      cout << "\n\n\t\tYou have to pay ="
           << " " << cost * 0.30 << endl;
    }
    else if (dy > 15 && dy < 30)
    {
      cout << "\n\n\t\tYou have to pay ="
           << " " << cost * 0.25 << endl;
    }
    else if (dy > 30 && dy < 45)
    {
      cout << "\n\n\t\tYou have to pay ="
           << " " << cost * 0.20 << endl;
    }
    else if (dy > 45 && dy < 60)
    {
      cout << "\n\n\t\tYou have to pay ="
           << " " << cost * 0.15 << endl;
    }
    else
      cout << "\n\n\n\t\t\tWe can't Give book for that much Days!!!!!";
  }
  void show()
  {
    cout << "Book Name::" << b_name << endl;
    cout << "Number of copies::" << no_copies << endl;
    cout << "------------------------------------------------------------------------";
  }

  int searchB_N(string hj)
  {
    if (b_name == hj)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  void buying_book()
  {

    char copy;
    char input, dis, delievery;
    int copies, percent, amt;
    cout << "\n";
    cout << "\nYou want to buy(y/n)::";
    cin >> input;

    if (input == 'y' || input == 'Y')
    {
      cout << "\n\nNo. of Copies::";
      cin >> copies;
      if (copies <= no_copies)
      {
        no_copies = no_copies - copies;
        amt = cost * copies;
        cout << "\n\nAmount ="
             << " " << amt << endl;
        cout << "Do u wants to give discount(y/n)::";
        cin >> dis;
        if (dis == 'y' || dis == 'Y')
        {
          cout << "How much percent::";
          cin >> percent;
          cout << "\n\n\t\t Amount you have to pay after discount::" << (amt - (amt * percent) / 100) << endl;
          cout << "\n\n\t\tYou want Home delievery(y/n)::";
          cin >> delievery;
          if (delievery == 'y' || delievery == 'Y')
          {
            cout << "\n\n\t\t You have to pay Amount = "
                 << " " << (amt * percent) / 100 << endl
                 << "\n\t\tDelievery Charges ="
                 << "Rs" << 40 << endl
                 << "\n\t\t Total Amount ="
                 << " " << ((amt * percent) / 100) + 40 << endl;
          }
          else
            cout << "\n\n\t\tTotal Amount = "
                 << " " << (amt * percent) / 100 << endl;
        }
        else

          cout << "\n\n\t\tYou want Home delievery(y/n)::";
        cin >> delievery;
        if (delievery == 'y' || delievery == 'Y')
        {
          cout << "\n\n\t\t You have to pay Amount = "
               << " " << (amt) << endl
               << "\n\t\tDelievery Charges ="
               << "Rs" << 40 * (copies) << endl
               << "\n\t\t Total Amount ="
               << " " << (amt) + 40 << endl;
        }
        else
          cout << "\n\n\t\tTotal Amount = "
               << " " << (amt) << endl;
      }
      else
        cout << "\n\n\t\t\t\t Sorry! That amount of stockis not available ::";
    }
    return;
  }
};
class SAdd_Books
{
public:
  int scost;
  string sb_id;
  string sb_name;
  string sa_name;
  int sno_copies;

public:
  void sGadd_book()
  {
    system("cls");
    cout << "\n\n\n\t\t\tAdd New  Book";

    fflush(stdin);
    cout << "\n Book Name::";
    cin >> sb_name;
    fflush(stdin);
    cout << "\n Author Name::";
    cin >> sa_name;
    fflush(stdin);
    cout << "\n No. of Copies::";
    cin >> sno_copies;
    cout << "\n Enter the cost of Books::";
    cin >> scost;
    sb_id = sb_name + sa_name;
  }
  void sG2add_book()
  {

    cout << "\n\n\n\t\t\t New  Books Are";
    cout << "\n Book ID::" << sb_id;

    cout << "\n Book Name::" << sb_name;

    cout << "\n Author Name::" << sa_name;

    cout << "\n No. of Copies::" << sno_copies;

    cout << "\n Enter the cost of Books::" << scost;
  }
  void sG4add_book()
  {
    system("cls");
    sb_id = "0";
    sb_name = "NULL";
    sa_name = "NULL";
    sno_copies = INT_MIN;
    scost = INT_MIN;
    cout << "\n\n\n\t\t\t  Your Books is deleted";
    cout << "\n Book ID::" << sb_id;

    cout << "\n Book Name::" << sb_name;

    cout << "\n Author Name::" << sa_name;

    cout << "\n No. of Copies::" << sno_copies;

    cout << "\n Enter the cost of Books::" << scost;
  }
  void sG3add_book()
  {
    system("cls");
    char schange, schange_N, schange_A, schange_NC, schange_C;
    cout << "\n\n\n\t\t\t Book Are";
    cout << "\n Book ID::" << sb_id;

    cout << "\n Book Name::" << sb_name;

    cout << "\n Author Name::" << sa_name;

    cout << "\n No. of Copies::" << sno_copies;

    cout << "\n Enter the cost of Books::" << scost;

    cout << "\n\t\t\tYou want to change Book Id(y/n)::";
    cin >> schange;
    if (schange == 'y' || schange == 'Y')
    {
      cout << "Enter New Book Id::";
      cin >> sb_id;
    }
    fflush(stdin);
    cout << "\n\n\t\t\tYou want to change Book Name(y/n)::";
    cin >> schange_N;
    fflush(stdin);
    if (schange_N == 'y' || schange_N == 'Y')
    {
      fflush(stdin);
      cout << "Enter New Changed Book Name::";
      cin >> sb_name;
      fflush(stdin);
    }
    fflush(stdin);
    cout << "\n\n\t\t\tYou want to change Author Name(y/n)::";
    cin >> schange_A;
    fflush(stdin);
    if (schange_A == 'y' || schange_A == 'Y')
    {
      fflush(stdin);
      cout << "Enter New Author name:";
      cin >> sa_name;
      fflush(stdin);
    }
    cout << "\n\n\t\t\tYou want to change Number of Copies(y/n)::";
    cin >> schange_NC;
    if (schange_NC == 'y' || schange_NC == 'Y')
    {
      cout << "Enter New Number of copies::";
      cin >> sno_copies;
    }
    cout << "\n\n\t\t\tYou want to change Cost(y/n)::";
    cin >> schange_C;
    if (schange_C == 'y' || schange_C == 'Y')
    {
      cout << "Enter New Cost::";
      cin >> scost;
    }
  }
  int ssearchI_D(string sa)
  {
    if (sa == sb_id)
    {
      return 1;
    }
    return 0;
  }
  int ssearchA_N(string sa_n)
  {
    if (sa_n == sa_name)
    {
      return 1;
    }
    return 0;
  }
  int ssearchB_N(string hj)
  {
    if (sb_name == hj)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  int sRent_Book(string sb_n)
  {
    if (sb_n == sb_name)
    {
      return 1;
    }
    return 0;
  }
  int supdate(string sf)
  {
    if (sf == sb_id)
    {
      return 1;
    }
    return 0;
  }
  int sidelete(string sv)
  {
    if (sv == sb_id)
    {
      return 1;
    }
    return 0;
  }
  void sBookPrice(int sdy)
  {
    if (sdy < 15)
    {
      cout << "\n\n\t\tYou have to pay ="
           << " " << scost * 0.30 << endl;
    }
    else if (sdy > 15 && sdy < 30)
    {
      cout << "\n\n\t\tYou have to pay ="
           << " " << scost * 0.25 << endl;
    }
    else if (sdy > 30 && sdy < 45)
    {
      cout << "\n\n\t\tYou have to pay ="
           << " " << scost * 0.20 << endl;
    }
    else if (sdy > 45 && sdy < 60)
    {
      cout << "\n\n\t\tYou have to pay ="
           << " " << scost * 0.15 << endl;
    }
    else
      cout << "\n\n\n\t\t\tWe can't Give book for that much Days!!!!!";
  }

  void show1()
  {
    cout << "Book Name::" << sb_name << endl;
    cout << "Number of copies::" << sno_copies << endl;
    cout << "---------------------------------------------------------------------------";
  }

  void sbuying_book()
  {

    char scopy;
    char sinput, sdis, sdelievery;
    int scopies, spercent, samt;
    cout << "\n";
    cout << "\nYou want to buy(y/n)::";
    cin >> sinput;

    if (sinput == 'y' || sinput == 'Y')
    {
      cout << "\n\nNo. of Copies::";
      cin >> scopies;
      if (scopies <= sno_copies)
      {
        samt = scost * scopies * 0.7;
        cout << "\n\nAmount ="
             << " " << samt << endl;
        cout << "Do u wants to give discount(y/n)::";
        cin >> sdis;
        if (sdis == 'y' || sdis == 'Y')
        {
          cout << "How much percent::";
          cin >> spercent;
          cout << "\n\n\t\t Amount you have to pay after discount::" << (samt - (samt * spercent) / 100) << endl;
        }

        else if (sdis == 'n' || sdis == 'N')
        {
          cout << "\n\n\t\tTotal Amount = "
               << " " << (samt) << endl;
        }
        else
          cout << "Invalid value Entered!!";
      }
      return;
    }
    else
    {
      cout << "Thank u!!!!!!!";
      return;
    }
  }
};

class customer
{

  string id;
  string name;
  string add;
  string mob;
  string bought;
  int bill;
  string type;
  string dof;

public:
  void set_details()
  {
    system("cls");

    cout << "Enter Customer Name::";
    cin >> name;
    cout << "Enter Customer Address::";
    cin >> add;
    cout << "Enter Mobile Number::";
    cin >> mob;
    cout << "Enter Book Name he/she,bought::";
    cin >> bought;
    cout << "Enter Bill AMount::";
    cin >> bill;
    cout << "Enter Type of book::";
    cin >> type;
    cout << "Enter Date Of Purchase::";
    cin >> dof;
    id = name + dof;
  }
  void get_details()
  {
    system("cls");
    cout << "Customer id::" << id << endl;
    cout << "Customer Name::" << name << endl;
    cout << "Customer Address::" << add << endl;
    cout << "Customer Mobile Number::" << mob << endl;
    cout << "Book bought:" << bought << endl;
    cout << "Bill::" << bill << endl;
    cout << "Type Of Book::" << type << endl;
    cout << "Date of Purchase::" << dof << endl;
  }
  int search_cd(string m)
  {
    if (id == m)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  int search_cdn(string m)
  {
    if (name == m)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
};

int main()
{

  security s;
  int o, lk;

t:
  int d;
  cout << "\n\t\t\t\t--------PRESS 1 FOR REGISTRATION OR 2 FOR LOGIN-------" << endl;
  cin >> d;

  if (d == 1)
  {

    s.read_data();
    goto t;
  }
  if (d == 2)
  {
    int f = s.compare();
    if (f == 1)
    {

      Bookshop b;

      int no_book, sno_book;
      char enter, update, d_book, r_book;
      int days;
      HAdd_Books ad[100];
      SAdd_Books sd[100];
      customer c[100];
      string A_N, Book_N, I_d, id_update, id_delete;
      int choice, b_choice, b1_choice;

    r:
      b.control_panel();
      cout << "\n\n Enter your Choice :";
      cin >> choice;
      switch (choice)
      {

      case 1:
        static int count = 0;
        cout << "How many books you want to enter under 100::";
        cin >> no_book;
        no_book = no_book + count;
        for (int i = count; i < no_book; ++i)
        {
          cout << "-----------------------------------------------------------------------\n";
          ad[i].Gadd_book();
          count++;
          for (int j = 0; j < i; ++j)
          {
            if (ad[j].b_id == ad[i].b_id)
            {
              cout << "Please enter unique Book id";
              ad[i].G4add_book();
              count--;
              ad[i].Gadd_book();
            }
          }
        }
        goto r;

        getch();
        break;
      case 2:
        static int count1 = 0;
        cout << "How many soft copies you want to enter under 100::";
        cin >> sno_book;
        sno_book = count1 + sno_book;
        for (int i = count1; i < sno_book; ++i)
        {
          cout << "-----------------------------------------------------------------------\n";
          sd[i].sGadd_book();
          count1++;
          for (int j = 0; j < i; ++j)
          {
            if (sd[j].sb_id == sd[i].sb_id)
            {
              cout << "Please enter unique Book id";
              sd[i].sG4add_book();
              count1--;
              sd[i].sGadd_book();
            }
          }
        }
        goto r;

        getch();
        break;
      case 3:
        int select;
        cout << "You want to see hard copy(1) or soft copy(2)::";
        cin >> select;
        if (select == 1)
        {
          for (int i = 0; i < no_book; ++i)
          {
            ad[i].G2add_book();
          }
        }
        else if (select == 2)
        {
          for (int i = 0; i < sno_book; ++i)
          {
            sd[i].sG2add_book();
          }
        }
        else
        {
          cout << "wrong option";
          getch();
          goto r;
        }

        getch();

        goto r;

      case 4:
        int kl;
        cout << "Press 1 for hard copy and 2 for soft copy";
        cin >> kl;
        if (kl == 1)
        {
          int sn;
          cout << "Enter 1 to search through Book_Id and 2 for Author Name::";
          cin >> sn;
          if (sn == 1)
          {
            cout << "\n\n\t\tEnter BOOK ID::";
            cin >> I_d;
            for (int i = 0; i < no_book; ++i)
            {
              int u = ad[i].searchI_D(I_d);
              if (u == 1)
              {

                ad[i].G2add_book();
                ad[i].buying_book();
              }
            }
          }
          else if (sn == 2)
          {
            fflush(stdin);
            cout << "\n\n\t\tEnter Author name::";
            cin >> A_N;
            fflush(stdin);
            for (int i = 0; i < no_book; ++i)
            {
              int t = ad[i].searchA_N(A_N);
              if (t == 1)
              {
                ad[i].G2add_book();
                ad[i].buying_book();
              }
            }
          }
          else
            cout << "\n\n\t\tInvalid Value Entered!!";
          getch();

          goto r;
        }
        else if (kl == 2)
        {
          int sn;
          cout << "Enter 1 to search through Book_Id and 2 for Author Name::";
          cin >> sn;
          if (sn == 1)
          {
            cout << "\n\n\t\tEnter BOOK ID::";
            cin >> I_d;
            for (int i = 0; i < sno_book; ++i)
            {
              int h = sd[i].ssearchI_D(I_d);
              if (h == 1)
              {

                sd[i].sG2add_book();
                sd[i].sbuying_book();
              }
            }
          }
          else if (sn == 2)
          {
            fflush(stdin);
            cout << "\n\n\t\tEnter Author name::";
            cin >> A_N;
            fflush(stdin);
            for (int i = 0; i < sno_book; ++i)
            {
              int y = sd[i].ssearchA_N(A_N);
              if (y == 1)
              {
                sd[i].sG2add_book();
                sd[i].sbuying_book();
              }
            }
          }
          else
            cout << "\n\n\t\tInvalid Value Entered!!";
          getch();

          goto r;
        }
        else
        {
          cout << "wrong option";
          goto r;
        }

        break;
      case 5:
        int press;
        cout << "Pres 1 for hard copy and 2 for soft copy::";
        cin >> press;
        if (press == 1)
        {
          cout << "Do you want to update book(y/n)::";
          cin >> update;
          if (update == 'y' || update == 'Y')
          {
            cout << "Enter Book_Id you want to update:: ";
            cin >> id_update;
            for (int i = 0; i < no_book; ++i)
            {
              int g = ad[i].update(id_update);
              if (g == 1)
              {
                ad[i].G3add_book();
                ad[i].G2add_book();
              }
            }
          }
          else if (update == 'n' || update == 'N')
          {
            goto r;
          }
          else
            cout << "\n\n\t\tInvalid value entered!!!!";
          getch();
          goto r;
        }
        else if (press == 2)
        {
          cout << "Do you want to update book(y/n)::";
          cin >> update;
          if (update == 'y' || update == 'Y')
          {
            cout << "Enter Book_Id you want to update:: ";
            cin >> id_update;
            for (int i = 0; i < no_book; ++i)
            {
              int g = sd[i].supdate(id_update);
              if (g == 1)
              {
                sd[i].sG3add_book();
                sd[i].sG2add_book();
              }
            }
          }
          else if (update == 'n' || update == 'N')
          {
            goto r;
          }
          else
            cout << "\n\n\t\tInvalid value entered!!!!";
          getch();
          goto r;
        }
        else
        {
          cout << "wrong option!!";
          goto r;
        }
        break;
      case 6:
        int ent;
        cout << "Press 1 for hard copy and 2 for soft copy::";
        cin >> ent;
        if (ent == 1)
        {
          cout << "Do you want to delete the book(y/n)::";
          cin >> d_book;
          if (d_book == 'y' || d_book == 'Y')
          {
            cout << "Enter Book_Id you want to delete:: ";
            cin >> id_delete;
            for (int i = 0; i < no_book; ++i)
            {
              int u = ad[i].idelete(id_delete);
              if (u == 1)
              {
                ad[i].G4add_book();
              }
            }
          }
          else if (d_book == 'n' || d_book == 'N')
          {
            goto r;
          }
          else
            cout << "\n\n\t\tInvalid value entered!!!!";
          getch();
          goto r;
        }
        else if (ent == 2)
        {
          cout << "Do you want to delete the book(y/n)::";
          cin >> d_book;
          if (d_book == 'y' || d_book == 'Y')
          {
            cout << "Enter Book_Id you want to delete:: ";
            cin >> id_delete;
            for (int i = 0; i < no_book; ++i)
            {
              int u = sd[i].sidelete(id_delete);
              if (u == 1)
              {
                sd[i].sG4add_book();
              }
            }
          }
          else if (d_book == 'n' || d_book == 'N')
          {
            goto r;
          }
          else
            cout << "\n\n\t\tInvalid value entered!!!!";
          getch();
          goto r;
        }
        else
        {
          cout << "Invalid value entered!!";
          goto r;
        }
        break;
      case 7:
        int pr;
        cout << "Press 1 for hard copy and 2 for soft copy::";
        cin >> pr;
        if (pr == 1)
        {
          cout << "You Want Books on Rent(y/n)::";
          cin >> r_book;
          if (r_book == 'y' || r_book == 'Y')
          {
            fflush(stdin);
            cout << "Enter Book Name::";
            cin >> Book_N;
            fflush(stdin);
            for (int i = 0; i < no_book; ++i)
            {
              int rn = ad[i].Rent_Book(Book_N);
              if (rn == 1)
              {
                cout << "\n\n\t\tBook Found!!";
                cout << "For how many days you want::";
                cin >> days;
                ad[i].BookPrice(days);
              }
              else
                cout << "Book Not Found!!";
            }
          }
          else if (r_book == 'n' || r_book == 'N')
          {
            goto r;
          }
          else
            cout << "\n\n\t\tInvalid Option!!!";
          getch();
          goto r;
        }
        else if (pr == 2)
        {
          cout << "You Want Books on Rent(y/n)::";
          cin >> r_book;
          if (r_book == 'y' || r_book == 'Y')
          {
            fflush(stdin);
            cout << "Enter Book Name::";
            cin >> Book_N;
            fflush(stdin);
            for (int i = 0; i < no_book; ++i)
            {
              int rn = sd[i].sRent_Book(Book_N);
              if (rn == 1)
              {
                cout << "\n\n\t\tBook Found!!";
                cout << "For how many days you want::";
                cin >> days;
                sd[i].sBookPrice(days);
              }
              else
                cout << "Book Not Found!!";
            }
          }
          else if (r_book == 'n' || r_book == 'N')
          {
            goto r;
          }
          else
            cout << "\n\n\t\tInvalid Option!!!";
          getch();
          goto r;
        }
        else
        {
          cout << "Wrong option!!!";
          goto r;
        }
        break;
      case 8:
        exit(0);
        break;
      case 9:
        o = s.compare();
        if (o == 1)
        {
          cout << "Valid user!!!" << endl;
          s.set_data();
          getch();
          goto r;
        }
        else
        {
          cout << "Either User Name or Password not matched!!";
          getch();
          goto r;
        }

        getch();
        goto r;
        break;

      case 10:
        cout << "Enter customer details::" << endl;
        static int y = 0;
        char set;
        int h;
        do
        {
          c[y].set_details();
          cout << "Enter (y/n)for further adding or not::";
          cin >> set;
          y++;
          cout << endl;
        } while (set != 'n');
        goto r;
        break;
      case 11:
        cout << "You want to search by id or by name(1/2)::";
        int sr;
        cin >> sr;
        h = 0;
        if (sr == 1)
        {
          string ig;
          cout << "Enter id::";
          cin >> ig;
          while (h < 10)
          {
            int j = c[h].search_cd(ig);
            if (j == 1)
            {
              c[h].get_details();
              getch();
              break;
            }
            h++;
          }
        }
        else if (sr == 2)
        {
          string ig;
          fflush(stdin);
          cout << "Enter name::";
          cin >> ig;
          fflush(stdin);
          while (h < 10)
          {
            int j = c[h].search_cdn(ig);
            if (j == 1)
            {
              c[h].get_details();
              getch();
              break;
            }
            h++;
          }
        }
        goto r;
        break;

      case 12:
        int jk;
        cout << "Press 1 for whole Book shop or 2 for particular book::";
        cin >> jk;
        if (jk == 1)
        {
          system("cls");
          cout << "-------------------Hard Books Stocks ARE::--------------\n";
          for (int i = 0; i < no_book; ++i)
          {

            ad[i].show();
            cout << "-------------------------------------------------------------------------\n";
          }
          cout << "-------------------Soft Books Stocks ARE::--------------\n";
          for (int i = 0; i < sno_book; ++i)
          {
            sd[i].show1();
            cout << "-------------------------------------------------------------------------\n";
          }
          getch();
          goto r;
        }
        else if (jk == 2)
        {
          int u;
          cout << "1 for hard copy and 2 for soft copy::";
          cin >> u;
          if (u == 1)
          {
            string n;
            cout << "enter book name::";
            cin >> n;
            for (int i = 0; i < no_book; ++i)
            {
              int p = ad[i].searchB_N(n);
              if (p == 1)
              {
                system("cls");
                cout << "-------------------------------------------------------------------------\n\n";
                ad[i].show();
                cout << "-------------------------------------------------------------------------";
              }
            }
            cout << "Not found:" << endl;
            getch();
            goto r;
          }
          else if (u == 2)
          {
            string n;
            fflush(stdin);
            cout << "enter book name::";
            cin >> n;
            fflush(stdin);
            for (int i = 0; i < sno_book; ++i)
            {
              int p = sd[i].ssearchB_N(n);
              if (p == 1)
              {
                system("cls");
                cout << "-------------------------------------------------------------------------\n";
                sd[i].show1();
                cout << "-------------------------------------------------------------------------\n";
              }
            }
            cout << "Not found:" << endl;
            getch();
            goto r;
          }
          else
          {
            goto r;
          }
        }
        else
        {
          goto r;
        }
        break;
      case 13:
        s.get_Details();
        getch();
        goto r;
        break;

      default:
        cout << "\n\n Invalid Option Choosen !!!!!!! " << endl;
        goto r;
      }
    }
    else
    {
      char press;
      cout << "Forgot Password(y/n)::";
      cin >> press;
      if (press == 'y' || press == 'Y')
      {
        int y = s.get_user_pass();
        if (y == 1)
        {
          s.get_Details();
          getch();
          goto t;
        }
      }
    }
  }
  else
  {
    exit(0);
  }
  return 0;
}