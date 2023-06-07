#include <iostream>
#include <windows.h>
using namespace std;
void GoodBy();

struct test
{
    int rollNo;
    long long ph_no;
    string fname, lname, clas;
    string address;

} a[20];
void Welcome()
{
    // Sleep("color 0E");
    system("cls");

    system("pause");
    system("cls");

    char x = 219;

    system("cls");
    for (int i = 1; i <= 3; i++)
    {
        cout << "\n\n\n";
        cout << "Loading ";
        for (int i = 1; i <= 20; i++)
        {

            Sleep(100);
            cout << x;
        }

        system("cls");
    }

    cout << "     ########################################################\n";
    cout << "                  Welcome To Qadri Creation's\n";
    cout << "     ########################################################\n";
    cout << "\n\n\n\n\n\n";
    cout << "     ########################################################\n";
    cout << "                  School Management System\n";
    cout << "     ########################################################\n";

    cout << "\n\n\n\n\n\n                      ";
    cout << "M";
    Sleep(400);
    cout << "U";
    Sleep(400);
    cout << "H";
    Sleep(400);
    cout << "A";
    Sleep(400);
    cout << "M";
    Sleep(400);
    cout << "M";
    Sleep(400);
    cout << "A";
    Sleep(400);
    cout << "D";
    Sleep(400);
    cout << " ";
    Sleep(400);
    cout << "B";
    Sleep(400);
    cout << "I";
    Sleep(400);
    cout << "L";
    Sleep(400);
    cout << "A";
    Sleep(400);
    cout << "L";
    Sleep(400);
    cout << " ";
    Sleep(400);
    cout << "Q";
    Sleep(400);
    cout << "A";
    Sleep(400);
    cout << "D";
    Sleep(400);
    cout << "R";
    Sleep(400);
    cout << "I";
    Sleep(400);
    cout << "\n\n\n                      ";
    cout << "(";
    Sleep(400);
    cout << "U";
    Sleep(400);
    cout << "N";
    Sleep(400);
    cout << "I";
    Sleep(400);
    cout << "V";
    Sleep(400);
    cout << "E";
    Sleep(400);
    cout << "R";
    Sleep(400);
    cout << "S";
    Sleep(400);
    cout << "I";
    Sleep(400);
    cout << "T";
    Sleep(400);
    cout << "Y";
    Sleep(400);
    cout << " ";
    Sleep(400);
    cout << "O";
    Sleep(400);
    cout << "F";
    Sleep(400);
    cout << " ";
    Sleep(400);
    cout << "O";
    Sleep(400);
    cout << "K";
    Sleep(400);
    cout << "A";
    Sleep(400);
    cout << "R";
    Sleep(400);
    cout << "A";
    Sleep(400);
    cout << ")";
    Sleep(3000);

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    system("pause");
    system("cls");
}

void GoodBy()
{
    system("color 03");
    cout << "Special Thanks to:  \n\n";
    // system("color 0D");
    cout << "\t\t  ";
    cout << " ____________________\n";
    cout << "\t\t  ";
    cout << "|-->| ";
    cout << "M";
    Sleep(400);
    cout << "a";
    Sleep(400);
    cout << "m";
    Sleep(400);
    cout << " ";
    Sleep(400);
    cout << "S";
    Sleep(400);
    cout << "a";
    Sleep(400);
    cout << "n";
    Sleep(400);
    cout << "a";
    Sleep(400);
    cout << " ";
    Sleep(400);
    cout << "Y";
    Sleep(400);
    cout << "a";
    Sleep(400);
    cout << "s";
    Sleep(400);
    cout << "i";
    Sleep(400);
    cout << "n";
    Sleep(400);
    cout << "\n";

    cout << "\t\t  ";
    cout << " ____________________\n";
    cout << "\t\t  ";
    cout << "|-->| ";

    cout << "S";
    Sleep(400);
    cout << "i";
    Sleep(400);
    cout << "r";
    Sleep(400);
    cout << " ";
    Sleep(400);
    cout << "S";
    Sleep(400);
    cout << "h";
    Sleep(400);
    cout << "a";
    Sleep(400);
    cout << "y";
    Sleep(400);
    cout << "a";
    Sleep(400);
    cout << "n";
    Sleep(400);
    cout << " ";
    Sleep(400);
    cout << "A";
    Sleep(400);
    cout << "l";
    Sleep(400);
    cout << "i";
}

int main()
{
    Welcome();
    //     Sleep("color 0E");

    int i, choice, n, rno, pos;
    /*  i = loop
        choice = getting choice
        n = no of students for data entry

        rno = reading roll for search by roll no

        b =
        */
    int n_found = 0;
    int k = 1; // q for returning value from exit function..
    int o = 2;
    int q, m = 0;
    string name;
    char x = 219;
up:
    system("cls");
    system("color 0A");
    cout << "  _____________________________\n";
    cout << " |  | 1. Add Student Detail\n";
    cout << " |   __________________________\n";
    cout << " |  | 2. All Student Detail\n";
    cout << " |   __________________________\n";
    cout << " |  | 3. Search Student Detail\n";
    cout << " |   __________________________\n";
    cout << " |  | 4. Add New Student Detail\n";
    cout << " |   __________________________\n";
    cout << " |  | 5. Delete Student Detail\n";
    cout << " |   __________________________\n";
    cout << " |  | 6. Update Student Detail\n";
    cout << " |   __________________________\n";
    cout << " |  | 7. About Us\n";
    cout << " |   __________________________\n";
    cout << " |  | 8. EXIT\n";

    cout << " |   __________________________\n";
    cout << " |  | Enter Your Choice | ";
    cin >> choice;
    system("cls");
    if (choice >= 1 && choice <= 8)
    {

        switch (choice)
        {
        case 1:
            system("color 0C");
            cout << " _______________________________\n";
            cout << "| # | Enter No. of Students | ";
            cin >> n;
            system("cls");

            for (i = 0; i < n; i++)
            {
                cout << " _______________________________\n";
                cout << "| # | Enter detail of Student " << i + 1 << "\n";
                cout << " ____________________________\n";
                cout << "|--> First Name: || ";
                cin >> a[i].fname;
                cout << " ____________________________\n";
                cout << "|--> Last Name: || ";
                cin >> a[i].lname;
                cout << " ____________________________\n";
                cout << "|--> Class: || ";
                cin >> a[i].clas;
                cout << " ____________________________\n";
                cout << "|--> Roll No. || ";
                cin >> a[i].rollNo;
                cout << " ____________________________\n";
                cout << "|--> Address: || ";
                cin >> a[i].address;
                cout << " ____________________________\n";
                cout << "|--> Phone # || ";
                cin >> a[i].ph_no;
                cout << endl;
                system("cls");
            }

            cout << " ____________________________\n";
            cout << "| Data Entered Successfully  |\n\n\n\n";
            Sleep(2000);
            system("pause");
            system("cls");
            goto up;

            break;
        case 2:
            system("color 03");
            cout << " ____________________________\n";
            cout << "| --> Detail of All Student \n";
            for (i = 0; i < n; i++)
            {
                cout << "\n_______________________________\n";
                cout << "|| # | Detail of Student | " << i + 1 << " |\n";
                cout << " _______________________________\n";
                cout << "| Name of Student | " << a[i].fname << " " << a[i].lname << endl;
                cout << " _______________________________\n";
                cout << "| Class. | " << a[i].clas << endl;
                cout << " _______________________________\n";
                cout << "| Roll No. | " << a[i].rollNo << endl;
                cout << " _______________________________\n";
                cout << "| Address | " << a[i].address << endl;
                cout << " _______________________________\n";
                cout << "| Phone # | 0" << a[i].ph_no << endl;
            }
            // Sleep(2000);
            cout << "\n\n\n";
            system("pause");
            system("cls");

            goto up;

        case 3:
        y:
            system("color 06");
            cout << " _______________________________\n";
            cout << "| 1. Search by Student Roll No.\n";
            cout << " _______________________________\n";
            cout << "| 2. Search by Student Name\n\n";
            cout << " ____________________________\n";
            cout << "| Enter your choice || ";
            cin >> choice;
            system("cls");
            if (choice != 1 && choice != 2)
                goto y;
            system("cls");
            switch (choice)
            {
                // Search by Roll No..
            case 1:
                cout << " _____________________________\n";
                cout << "| Enter Student Roll No. || ";
                cin >> rno;
                system("cls");

                n_found = 0;
                for (i = 0; i < n; i++)
                {
                    if (a[i].rollNo == rno)
                    {
                        n_found++;
                        cout << " ____________________________\n";
                        cout << "| Name of Student | " << a[i].fname << " " << a[i].lname << endl;
                        cout << " ____________________________\n";
                        cout << "| Class. | " << a[i].clas << endl;
                        cout << " ____________________________\n";
                        cout << "| Roll No. | " << a[i].rollNo << endl;
                        cout << " ____________________________\n";
                        cout << "| Address | " << a[i].address << endl;
                        cout << " ____________________________\n";
                        cout << "| Phone # | 0" << a[i].ph_no << endl;
                    }
                }

                // cout << n_found << endl;
                if (n_found == 0)
                {
                    cout << " ______________________\n";
                    cout << "| Record Not Found \n";
                }

                break;
            case 2:
            s:
                // Search by  Name...
                cout << " ____________________________\n";
                cout << "| 1. Search by First Name\n";
                cout << " ____________________________\n";
                cout << "| 2. Search by Last Name\n\n";

                cout << " ____________________________\n";
                cout << "| Enter Your choice | ";
                cin >> choice;
                system("cls");
                while (choice != 1 && choice != 2)
                    goto s;
                switch (choice)
                {
                // Search by First Name...
                case 1:
                    cout << " _____________________________________\n";
                    cout << "| Enter Student First Name || ";
                    cin >> name;
                    system("cls");
                    n_found = 0;
                    for (i = 0; i < n; i++)
                    {
                        if (a[i].fname == name)
                        {
                            n_found++;
                            cout << " ____________________________\n";
                            cout << "| Name of Student | " << a[i].fname << " " << a[i].lname << endl;
                            cout << " ____________________________\n";
                            cout << "| Class. | " << a[i].clas << endl;
                            cout << " ____________________________\n";
                            cout << "| Roll No. | " << a[i].rollNo << endl;
                            cout << " ____________________________\n";
                            cout << "| Address | " << a[i].address << endl;
                            cout << " ____________________________\n";
                            cout << "| Phone # | 0" << a[i].ph_no << endl;
                        }
                    }
                    if (n_found == 0)
                    {
                        cout << " ____________________\n";
                        cout << "| Record Not Found \n";
                    }
                    break;
                case 2:
                    // Search by Last Name...
                    cout << " ___________________________________\n";
                    cout << "| Enter Student Last Name || ";
                    cin >> name;
                    system("cls");
                    n_found = 0;
                    for (i = 0; i < n; i++)
                    {
                        if (a[i].lname == name)
                        {
                            n_found++;
                            cout << " ____________________________________\n";
                            cout << "| Name of Student | " << a[i].fname << " " << a[i].lname << endl;
                            cout << " ____________________________________\n";
                            cout << "| Class. | " << a[i].clas << endl;
                            cout << " ____________________________________\n";
                            cout << "| Roll No. | " << a[i].rollNo << endl;
                            cout << " ____________________________________\n";
                            cout << "| Address | " << a[i].address << endl;
                            cout << " ____________________________________\n";
                            cout << "| Phone # | 0" << a[i].ph_no << endl;
                        }
                    }
                    if (n_found == 0)
                    {
                        cout << " ______________________\n";
                        cout << "| Record Not Found \n";
                    }
                }

                break;
            }
            cout << "\n\n";
            system("pause");
            system("cls");
        x:
            cout << " _________________\n";
            cout << "1. Search Again\n";
            cout << " _________________\n";
            cout << "2. Main Menu\n\n";
            cout << " _______________________\n";
            cout << "| Enter your Choice | ";
            cin >> choice;
            system("cls");
            while (choice != 1 && choice != 2)
                goto x;
            if (choice == 1)
                goto y;
            else
                goto up;

            break;

        case 4: // for adding new  student detail...

            system("color 05");
            int v;
            cout << " ______________________________\n";
            cout << "|-->| Enter No of Students: ";
            cin >> v;
            system("cls");
            // k = 0;
            // while (k < v)
            for (int j = 0; j < v; j++)
            {

                cout << " ____________________________________\n";
                cout << "| # | Enter detail of New Student " << j + 1 << "\n\n";
                cout << " ____________________________\n";
                cout << "|--> First Name: || ";
                cin >> a[i].fname;
                cout << " ____________________________\n";
                cout << "|--> Last Name: || ";
                cin >> a[i].lname;
                cout << " ____________________________\n";
                cout << "|--> Class: || ";
                cin >> a[i].clas;
                cout << " ____________________________\n";
                cout << "|--> Roll No. || ";
                cin >> a[i].rollNo;
                cout << " ____________________________\n";
                cout << "|--> Address: || ";
                cin >> a[i].address;
                cout << " ____________________________\n";
                cout << "|--> Phone # || ";
                cin >> a[i].ph_no;

                n++; // increment no. of students..
                i++; // increment in no of array elements

                system("cls");
            }
            for (int l = 1; l <= 3; l++)
            {
                cout << "\n\n\n";
                cout << "Loading ";

                for (int q = 1; q <= 20; q++)
                {

                    Sleep(100);
                    cout << x;
                }
                system("cls");
            }
            cout << " _________________________\n";
            cout << "| Data Added Successfully |\n\n";
            system("pause");
            system("cls");
            goto up;

            break;

        case 5: // for data deleting of student...
            system("color 02");
            cout << "\n________________________________________________\n";
            cout << "| Enter Roll No. Of Student to Delete Data | ";
            cin >> rno;
            system("cls");

            for (i = 0; i < n; i++)
            {

                if (rno == a[i].rollNo)
                {
                l:
                    cout << " ______________________________\n";
                    cout << "| Are you Sure to Delete Data\n";
                    cout << " _________\n";
                    cout << "| 1. YES\n";
                    cout << " _________\n";
                    cout << "| 2. NO\n\n";
                    cout << " _______________________\n";
                    cout << "| Enter your choice | ";
                    cin >> choice;
                    system("cls");

                    if (choice == 1)
                    {
                        pos = i; // i is position of element in array to be deleted..
                        m++;
                        for (i = pos; i < n; i++)
                        {
                            a[i] = a[i + 1];
                        }
                        n--; // decrement in no. of total students bcz when showing...
                             // ...the total record of student then no blank element..
                             // ..shown in the end of array.

                        for (int l = 1; l <= 3; l++)
                        {
                            cout << "\n\n\n";
                            cout << "Loading ";

                            for (int q = 1; q <= 20; q++)
                            {

                                Sleep(100);
                                cout << x;
                            }
                            system("cls");
                        }
                        cout << " _____________________________\n";
                        cout << "| Data Deleted Successfully |\n\n";
                        system("pause");
                        system("cls");
                        goto up;
                    }
                    else if (choice == 2)
                    {
                        goto up;
                    }
                    else
                        goto l;
                }
            }
            if (m == 0)
            {
                cout << " __________________\n";
                cout << "| Record Not found \n\n";
                system("pause");
                system("cls");
                goto up;
            }

            break;

        case 6: // for updatting student detail...
            cout << "| Enter Student Roll No. | ";
            cin >> rno;
            system("cls");
            n_found = 0;
            for (i = 0; i < n; i++)
            {
                if (rno == a[i].rollNo)
                {
                    n_found++;
                    cout << " _______________________________\n";
                    cout << "| # |Old Detail of Student | # |\n\n";

                    cout << " ____________________________________\n";
                    cout << "| Name of Student | " << a[i].fname << " " << a[i].lname << endl;
                    cout << " ____________________________________\n";
                    cout << "| Class. | " << a[i].clas << endl;
                    cout << " ____________________________________\n";
                    cout << "| Roll No. | " << a[i].rollNo << endl;
                    cout << " ____________________________________\n";
                    cout << "| Address | " << a[i].address << endl;
                    cout << " ____________________________________\n";
                    cout << "| Phone # | 0" << a[i].ph_no << endl;
                    cout << "\n";
                    system("pause");
                    cout << "\n";
                    cout << " _____________________________________\n";
                    cout << "| # | Enter New Detail of Student | # |\n\n";

                    cout << " ____________________________\n";
                    cout << "|--> First Name: || ";
                    cin >> a[i].fname;
                    cout << " ____________________________\n";
                    cout << "|--> Last Name: || ";
                    cin >> a[i].lname;
                    cout << " ____________________________\n";
                    cout << "|--> Class: || ";
                    cin >> a[i].clas;
                    cout << " ____________________________\n";
                    cout << "|--> Roll No. || ";
                    cin >> a[i].rollNo;
                    cout << " ____________________________\n";
                    cout << "|--> Address: || ";
                    cin >> a[i].address;
                    cout << " ____________________________\n";
                    cout << "|--> Phone # || ";
                    cin >> a[i].ph_no;
                    cout << "\n\n\n";

                    system("pause");
                    system("cls");

                    for (int l = 1; l <= 3; l++)
                    {
                        cout << "\n\n\n";
                        cout << "Loading ";

                        for (int q = 1; q <= 20; q++)
                        {

                            Sleep(100);
                            cout << x;
                        }
                        system("cls");
                    }
                    cout << " ___________________________________\n";
                    cout << "| # | Data Updated Successfully | # |\n\n\n";
                }
            }

            if (n_found == 0)
            {
                cout << " _____________________\n";
                cout << "| # |Record Not Found |\n\n\n";
            }
            system("pause");
            system("cls");

            goto up;
            break;

        case 7:
            system("color 0D");

            cout << "|-->> A.o.A Everyone...\n";
            cout << "|-->> I am BILAL QADRI....\n";
            cout << "|-->> I done my Inter in DAE Civil Technology from GCT Sahiwal...\n";
            cout << "|-->> I am Student of 2nd Semester...\n";
            cout << "|-->> My Hometown Village is 140/9-L Sahiwal..\n\n\n\n";
            system("pause");
            system("cls");
            goto up;

            break;

        case 8: // for EXIT from program...

            system("color 05");

        v:
            cout << " ____________________________________\n";
            cout << "| Are You Sure to EXIT the Program...\n";
            cout << " ____________________________\n";
            cout << "| 1. YES\n";
            cout << " ____________________________\n";
            cout << "| 2. NO\n";
            cout << " ____________________________\n";
            cout << "| Enter your choice | ";
            cin >> choice;
            system("cls");

            if (choice == 1)
            {
                GoodBy();
                cout << "\n\n\n\n";
                Sleep(1000);

                system("pause");
                system("cls");

                return 0;
            }
            else if (choice == 2)
                goto up;
            else
                goto v;
        }
    }
    else
        goto up;
    return 0;
}
