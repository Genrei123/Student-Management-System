#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <vector>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>

using namespace std;

class Student
{
public:
    float grades;
    string username, password, password1, lname, mname, name, course, snumber, section;
};

int attempt = 5;
int ban = 1;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

//admin voids
void adelete_record();
void history(string s_number, string date);
void aback();
void aview_record();
void aadd_record();
void admin();
void admin_login();
void addGrades();
void viewGrades();
//student voids
void studentDashboard();
void a_edit();
void studentlogin();
void sback();
//Support Voids
void Support();
void ProgramSupport();
void FAQSupport();


//Loading voids
void inloading();
void outloading();
void mback();

//Dashboard Panel for Admin, Student, and Exit 
int main()
{


    // color changer
    system("color a");

    system("cls");
    int choice;

    do
    {

        SetConsoleTextAttribute(h, 9);
        cout << "\n\t      ===";
        SetConsoleTextAttribute(h, 1);
        cout << "========================================================================================";
        SetConsoleTextAttribute(h, 9);
        cout << "===\n";
        SetConsoleTextAttribute(h, 11);
        Sleep(90);
        cout << "\t     ||                                                                                            ||" << endl;
        Sleep(90);
        cout << "\t     ||                                                                                            ||" << endl;
        Sleep(90);
        SetConsoleTextAttribute(h, 10);
        cout << "\t     ||      ______   _____    ____           _____   __                __                __       ||" << endl;
        Sleep(90);
        cout << "\t     ||     / ____/  / ___/   / __ \\         / ___/  / /_  __  __  ____/ / ___    ____   / /_      ||" << endl;
        Sleep(90);
        cout << "\t     ||    / /       \\__ \\   / / / /         \\__ \\  / __/ / / / / / __  / / _ \\  / __ \\ / __/      ||" << endl;
        Sleep(90);
        cout << "\t     ||   / /___    ___/ /  / /_/ /         ___/ / / /_  / /_/ / / /_/ / /  __/ / / / // /_        ||" << endl;
        Sleep(90);
        cout << "\t     ||   \\____/   /____/  /_____/         /____/  \\___/ \\__,_/  \\__,_/  \\___/ /_/ /_/ \\__/        ||" << endl;
        Sleep(90);
        cout << "\t     ||                    / __ \\  ____    _____  / /_  ____ _   / /                               ||" << endl;
        Sleep(90);
        cout << "\t     ||                   / /_/ / / __ \\  / ___/ / __/ / __ `/  / /                                ||" << endl;
        Sleep(90);
        cout << "\t     ||                  / ____/ / /_/ / / /    / /_  / /_/ /  / /                                 ||" << endl;
        Sleep(90);
        cout << "\t     ||                 /_/      \\____/ /_/     \\__/  \\__,_/  /_/                                  ||" << endl;
        Sleep(90);
        SetConsoleTextAttribute(h, 11);
        cout << "\t     ||                                                                                            ||" << endl;
        Sleep(90);
        cout << "\t     ||                                                                                            ||" << endl;
        Sleep(90);
        SetConsoleTextAttribute(h, 9);
        cout << "\t      ===";
        SetConsoleTextAttribute(h, 1);
        cout << "========================================================================================";
        SetConsoleTextAttribute(h, 9);
        cout << "===\n\n";
        Sleep(90);

        SetConsoleTextAttribute(h, 1);
        cout << "[";
        SetConsoleTextAttribute(h, 2);
        cout << "1";
        SetConsoleTextAttribute(h, 1);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Admin" << endl;
        SetConsoleTextAttribute(h, 1);
        cout << "[";
        SetConsoleTextAttribute(h, 2);
        cout << "2";
        SetConsoleTextAttribute(h, 1);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Student" << endl;
        SetConsoleTextAttribute(h, 1);
        cout << "[";
        SetConsoleTextAttribute(h, 2);
        cout << "3";
        SetConsoleTextAttribute(h, 1);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Support" << endl;
        SetConsoleTextAttribute(h, 1);
        cout << "[";
        SetConsoleTextAttribute(h, 2);
        cout << "4";
        SetConsoleTextAttribute(h, 1);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Exit" << endl;
        cout << "\nEnter your choice: ";

        SetConsoleTextAttribute(h, 11);
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(100000, '\n');
            SetConsoleTextAttribute(h, 1);
            cout << "\n\t[ ";
            SetConsoleTextAttribute(h, 2);
            cout << "!!";
            SetConsoleTextAttribute(h, 14);
            cout << "Invalid input";
            SetConsoleTextAttribute(h, 2);
            cout << "!!";
            SetConsoleTextAttribute(h, 1);
            cout << " ]\n" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");

            main();
        }
        cout << endl;
        system("cls");
    } while (choice < 1 || choice > 4);



    switch (choice)
    {
    case 1://Admin
        if (ban != 0)
        {
            SetConsoleTextAttribute(h, 1);
            cout << "        [ ";
            SetConsoleTextAttribute(h, 14);
            cout << "ADMIN ";
            SetConsoleTextAttribute(h, 1);
            cout << "]\n\n";
            mback();
            admin_login();
            break;
        }
        else
        {
            system("cls");
            SetConsoleTextAttribute(h, 4);
            cout << "\n\t\t[ ";
            SetConsoleTextAttribute(h, 12);
            cout << "You are banned out of Admin Access";
            SetConsoleTextAttribute(h, 4);
            cout << " ]\n" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            main();
        }

    case 2://Student
        system("cls"); studentlogin(); break;

    case 3:
        system("cls"); Support(); break;

    case 4:
        char end[1];
        do
        {
            for (int i = 0; i < 1; i++)
            {
                SetConsoleTextAttribute(h, 14);
                cout << "Type ";
                SetConsoleTextAttribute(h, 1);
                cout << "[";
                SetConsoleTextAttribute(h, 2);
                cout << "Y";
                SetConsoleTextAttribute(h, 1);
                cout << "] ";
                SetConsoleTextAttribute(h, 14);
                cout << "to ";
                SetConsoleTextAttribute(h, 12);
                cout << "Exit ";
                SetConsoleTextAttribute(h, 14);
                cout << "or ";
                SetConsoleTextAttribute(h, 1);
                cout << "[";
                SetConsoleTextAttribute(h, 2);
                cout << "N";
                SetConsoleTextAttribute(h, 1);
                cout << "] ";
                SetConsoleTextAttribute(h, 14);
                cout << "to ";
                SetConsoleTextAttribute(h, 6);
                cout << "Return" << endl;
                SetConsoleTextAttribute(h, 14);
                cout << "\nEnter your choice: ";
                SetConsoleTextAttribute(h, 11);
                cin >> end[i];
            }


            if (end[0] == 'Y')
            {
                exit(0);

            }
            if (end[0] == 'N')
            {
                main();
            }
            else
            {
                system("cls");
                SetConsoleTextAttribute(h, 1);
                cout << "\n\t[ ";
                SetConsoleTextAttribute(h, 2);
                cout << "!!";
                SetConsoleTextAttribute(h, 14);
                cout << "Invalid input";
                SetConsoleTextAttribute(h, 2);
                cout << "!!";
                SetConsoleTextAttribute(h, 1);
                cout << " ]\n" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
        } while (end[0] != 'Y' || end[0] != 'N');

    }

}

//Admin Part
void admin_login()
{
    string pass;
    char c;
    string password = "admin123";

    SetConsoleTextAttribute(h, 1);
    cout << "\t" << "[ ";
    SetConsoleTextAttribute(h, 14);
    cout << "ADMIN";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    SetConsoleTextAttribute(h, 14);
    cout << "Password: ";
    SetConsoleTextAttribute(h, 11);
    do {
        c = _getch();
        switch (c) {
        case 0://special keys. like: arrows, f1-12 etc.
            _getch();//just ignore also the next character.
            break;
        case 13://enter
            cout << endl;
            break;
        case 8://backspace
            if (pass.length() > 0) {
                pass.erase(pass.end() - 1); //remove last character from string
                cout << c << ' ' << c;//go back, write space over the character and back again.
            }
            break;
        default://regular ascii
            pass += c;//add to string
            cout << '*';//print `*`
            break;
        }
    } while (c != 13);

    if (pass == password)
    {
        system("cls");
        admin();
    }

    else
    {
        while (attempt >= 1)
        {
            system("cls");
            SetConsoleTextAttribute(h, 1);
            cout << "  ";
            SetConsoleTextAttribute(h, 2);
            cout << "!!";
            SetConsoleTextAttribute(h, 14);
            cout << "Incorrrect Password";
            SetConsoleTextAttribute(h, 2);
            cout << "!!";
            SetConsoleTextAttribute(h, 1);
            cout << " " << endl;
            SetConsoleTextAttribute(h, 11);
            cout << "      Attemps Left:";
            SetConsoleTextAttribute(h, 4);
            cout << attempt << "\n\n" << endl;

            attempt--;
            admin_login();
        }
        attempt = 5;
        ban--;
        main();
    }
}

//Admin Dashboard Panel
void admin()
{
    int choice;
    SetConsoleTextAttribute(h, 9);
    cout << "     [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "ADMIN PANEL";
    SetConsoleTextAttribute(h, 9);
    cout << " ]\n\n";

    //Admin Panel Output
    {
        //[1] Add Student Records
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "1";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Add Student Records\n";

        //[2] Add/Edit Student Grades
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "2";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Add/Edit Student Grades\n";

        //[3] Modify Student Records
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "3";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Modify Student Records\n";

        //[4] Remove Student Records
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "4";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Remove Student Records\n";

        //[5] Masterlist
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "5";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Masterlist\n";

        //[6] Student Grades
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "6";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Student Grades\n";

        //[7] Log-out
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "7";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Log-out\n";
    }
    cout << "\nEnter you choice: ";
    SetConsoleTextAttribute(h, 11);
    cin >> choice;
    cout << endl;



    switch (choice)
    {
    case 1: aadd_record(); system("pause"); break;
    case 2: addGrades(); system("pause"); break;
    case 3: a_edit(); system("pause"); break;
    case 4: adelete_record(); system("pause"); break;
    case 5: aview_record(); system("pause"); break;
    case 6: viewGrades(); system("pause"); break;
    case 7: system("cls"); main(); break;

    default:
        SetConsoleTextAttribute(h, 1);
        cout << "\t[ ";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 14);
        cout << "Invalid input";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 1);
        cout << " ]\n" << endl;
        SetConsoleTextAttribute(h, 14);
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        admin();
        break;
    }
}

//Add Student Records
void aadd_record()
{
    system("cls");
    SetConsoleTextAttribute(h, 1);
    cout << "      [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "ADD STUDENT RECORDS";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    aback();

    //[ ADD STUDENT RECORDS ]
    SetConsoleTextAttribute(h, 1);
    cout << "     [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "ADD STUDENT RECORDS";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    SetConsoleTextAttribute(h, 14);
    Student details;
    string s_number;
    cout << "Student number: ";
    SetConsoleTextAttribute(h, 11);
    cin >> s_number;


    int length = s_number.length();
    for (int i = 0; i < length; i++)
    {
        system("cls");
        if (!isdigit(s_number[i]))
        {
            SetConsoleTextAttribute(h, 12);
            cout << "Error in Student Number. Please double check." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            aadd_record();
        }
    }
    ofstream createAccounts("Accounts/masterlist.txt", ios::app);


    fstream cAccount;
    cAccount.open("Accounts/masterlist.txt");

    string student;
    while (!cAccount.eof())
    {
        cAccount >> student;
        if (student == s_number)
        {
            system("cls");
            SetConsoleTextAttribute(h, 12);
            cout << "Account already exists. Please try again" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            aadd_record();
            cAccount.close();
        }
    }
    cAccount.close();

    SetConsoleTextAttribute(h, 1);
    cout << "     [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "ADD STUDENT RECORDS";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";

    string t_course;
    string t_section;

    SetConsoleTextAttribute(h, 14);
    cout << "Course ";
    SetConsoleTextAttribute(h, 6);
    cout << "[ CS | IT | EMC | IS ]: ";
    SetConsoleTextAttribute(h, 11);
    cin >> t_course;
    SetConsoleTextAttribute(h, 14);
    cout << "Section ";
    SetConsoleTextAttribute(h, 6);
    cout << "(1A or 1B): ";
    SetConsoleTextAttribute(h, 11);
    cin >> t_section;

    for (int i = 0; i < t_course.size(); i++)
    {
        details.course += toupper(t_course[i]);
    }

    for (int i = 0; i < t_section.size(); i++)
    {
        details.section += toupper(t_section[i]);
    }

    SetConsoleTextAttribute(h, 14);
    cout << "First Name: ";
    SetConsoleTextAttribute(h, 11);
    getline(cin >> ws, details.name);
    SetConsoleTextAttribute(h, 14);
    cout << "Last Name: ";
    SetConsoleTextAttribute(h, 11);
    getline(cin >> ws, details.lname);
    SetConsoleTextAttribute(h, 14);
    cout << "Middle Name ";
    SetConsoleTextAttribute(h, 6);
    cout << "(Type '0' if not applicable): ";
    SetConsoleTextAttribute(h, 11);
    getline(cin >> ws, details.mname);

    if (details.mname == "0")
    {
        details.mname = " ";
    }

    if (details.course == "CS" && details.section == "1A") // Masterlist for CS 1A
    {

        fstream accounts;
        accounts.open("Accounts/masterlist.txt", ios::app);
        accounts << s_number << endl;
        accounts.close();

        fstream masterlist;
        masterlist.open("Masterlist/masterlist" + details.course + details.section + ".txt", ios::app);
        masterlist << "  " << left << setw(11) << s_number << "| " << details.lname << ", " << details.name << " " << details.mname << endl;
        masterlist.close();

        fstream show;
        show.open("Student/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        show << "Name: " << details.name << endl
            << "Last Name: " << details.lname << endl
            << "Middle Name: " << details.mname << endl
            << "Course & Section: " << details.course << details.section << endl
            << "Student number: " << s_number << endl;
        show.close();

        fstream templates;
        templates.open("Grades/" + details.course + details.section + ".txt", ios::out);
        templates
            << " Introduction to Computing I        | " << endl
            << " Fundamentals of Programming        | " << endl
            << " Business Application Software      | " << endl
            << " Understanding the Self             | " << endl
            << " Purposive Communication            | " << endl
            << " Mathematics in the Modern World    | " << endl
            << " NSTP CWTS I                        | " << endl
            << " Movement Competency Training       | " << endl
            << " Readings in the Philippine History | ";
        templates.close();

        fstream grades;
        grades.open("Grades/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        grades
            << " Introduction to Computing I        | " << endl
            << " Fundamentals of Programming        | " << endl
            << " Business Application Software      | " << endl
            << " Understanding the Self             | " << endl
            << " Purposive Communication            | " << endl
            << " Mathematics in the Modern World    | " << endl
            << " NSTP CWTS I                        | " << endl
            << " Movement Competency Training       | " << endl
            << " Readings in the Philippine History | ";
        grades.close();

        system("cls");
        SetConsoleTextAttribute(h, 14);
        cout << "Account has been created...." << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Name: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.name << " " << details.mname << " " << details.lname << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Course & Section: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.course << "-" << details.section << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        admin();
    }

    if (details.course == "CS" && details.section == "1B") // Masterlist for CS 1B
    {

        fstream accounts;
        accounts.open("Accounts/masterlist.txt", ios::app);
        accounts << s_number << endl;
        accounts.close();

        fstream masterlist;
        masterlist.open("Masterlist/masterlist" + details.course + details.section + ".txt", ios::app);
        masterlist << "  " << left << setw(11) << s_number << "| " << details.lname << ", " << details.name << " " << details.mname << endl;
        masterlist.close();

        fstream show;
        show.open("Student/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        show << "Name: " << details.name << endl
            << "Last Name: " << details.lname << endl
            << "Middle Name: " << details.mname << endl
            << "Course & Section: " << details.course << details.section << endl
            << "Student number: " << s_number << endl;
        show.close();

        fstream templates;
        templates.open("Grades/" + details.course + details.section + ".txt", ios::out);
        templates
            << " Introduction to Computing I        | " << endl
            << " Fundamentals of Programming        | " << endl
            << " Business Application Software      | " << endl
            << " Understanding the Self             | " << endl
            << " Purposive Communication            | " << endl
            << " Mathematics in the Modern World    | " << endl
            << " NSTP CWTS I                        | " << endl
            << " Movement Competency Training       | " << endl
            << " Readings in the Philippine History | ";
        templates.close();

        fstream grades;
        grades.open("Grades/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        grades
            << " Introduction to Computing I        | " << endl
            << " Fundamentals of Programming        | " << endl
            << " Business Application Software      | " << endl
            << " Understanding the Self             | " << endl
            << " Purposive Communication            | " << endl
            << " Mathematics in the Modern World    | " << endl
            << " NSTP CWTS I                        | " << endl
            << " Movement Competency Training       | " << endl
            << " Readings in the Philippine History | ";
        grades.close();

        system("cls");
        SetConsoleTextAttribute(h, 14);
        cout << "Account has been created...." << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Name: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.name << " " << details.mname << " " << details.lname << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Course & Section: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.course << "-" << details.section << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        admin();
    }

    if (details.course == "IT" && details.section == "1A") // Master for IT 1A
    {
        fstream accounts;
        accounts.open("Accounts/masterlist.txt", ios::app);
        accounts << s_number << endl;
        accounts.close();

        fstream masterlist;
        masterlist.open("Masterlist/masterlist" + details.course + details.section + ".txt", ios::app);
        masterlist << "  " << left << setw(11) << s_number << "| " << details.lname << ", " << details.name << " " << details.mname << endl;
        masterlist.close();

        fstream show;
        show.open("Student/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        show << "Name: " << details.name << endl
            << "Last Name: " << details.lname << endl
            << "Middle Name: " << details.mname << endl
            << "Course & Section: " << details.course << details.section << endl
            << "Student number: " << s_number << endl;
        show.close();

        fstream templates;
        templates.open("Grades/" + details.course + details.section + ".txt", ios::out);
        templates
            << " Introduction to Computing I        | " << endl
            << " Computer Programming I             | " << endl
            << " Business Application Software      | " << endl
            << " Movement Competency Training       | " << endl
            << " NSTP I                             | " << endl
            << " Understanding the Self             | " << endl
            << " Readings in the Philippine History | " << endl
            << " Mathematics in the Modern World    | ";
        templates.close();

        fstream grades;
        grades.open("Grades/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        grades
            << " Introduction to Computing I        | " << endl
            << " Computer Programming I             | " << endl
            << " Business Application Software      | " << endl
            << " Movement Competency Training       | " << endl
            << " NSTP I                             | " << endl
            << " Understanding the Self             | " << endl
            << " Readings in the Philippine History | " << endl
            << " Mathematics in the Modern World    | ";
        grades.close();

        system("cls");
        SetConsoleTextAttribute(h, 14);
        cout << "Account has been created...." << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Name: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.name << " " << details.mname << " " << details.lname << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Course & Section: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.course << "-" << details.section << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        admin();
    }

    if (details.course == "IT" && details.section == "1B") // Master for IT 1B
    {
        fstream accounts;
        accounts.open("Accounts/masterlist.txt", ios::app);
        accounts << s_number << endl;
        accounts.close();

        fstream masterlist;
        masterlist.open("Masterlist/masterlist" + details.course + details.section + ".txt", ios::app);
        masterlist << "  " << left << setw(11) << s_number << "| " << details.lname << ", " << details.name << " " << details.mname << endl;
        masterlist.close();

        fstream show;
        show.open("Student/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        show << "Name: " << details.name << endl
            << "Last Name: " << details.lname << endl
            << "Middle Name: " << details.mname << endl
            << "Course & Section: " << details.course << details.section << endl
            << "Student number: " << s_number << aback << endl;
        show.close();

        fstream templates;
        templates.open("Grades/" + details.course + details.section + ".txt", ios::out);
        templates
            << " Introduction to Computing I        | " << endl
            << " Computer Programming I             | " << endl
            << " Business Application Software      | " << endl
            << " Movement Competency Training       | " << endl
            << " NSTP I                             | " << endl
            << " Understanding the Self             | " << endl
            << " Readings in the Philippine History | " << endl
            << " Mathematics in the Modern World    | ";
        templates.close();


        fstream grades;
        grades.open("Grades/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        grades
            << " Introduction to Computing I        | " << endl
            << " Computer Programming I             | " << endl
            << " Business Application Software      | " << endl
            << " Movement Competency Training       | " << endl
            << " NSTP I                             | " << endl
            << " Understanding the Self             | " << endl
            << " Readings in the Philippine History | " << endl
            << " Mathematics in the Modern World    | ";
        grades.close();

        system("cls");
        SetConsoleTextAttribute(h, 14);
        cout << "Account has been created...." << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Name: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.name << " " << details.mname << " " << details.lname << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Course & Section: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.course << "-" << details.section << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        admin();
    }

    if (details.course == "EMC" && details.section == "1A") // Master for EMC 1A
    {
        fstream accounts;
        accounts.open("Accounts/masterlist.txt", ios::app);
        accounts << s_number << endl;
        accounts.close();

        fstream masterlist;
        masterlist.open("Masterlist/masterlist" + details.course + details.section + ".txt", ios::app);
        masterlist << "  " << left << setw(11) << s_number << "| " << details.lname << ", " << details.name << " " << details.mname << endl;
        masterlist.close();

        fstream show;
        show.open("Student/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        show << "Name: " << details.name << endl
            << "Last Name: " << details.lname << endl
            << "Middle Name: " << details.mname << endl
            << "Course & Section: " << details.course << details.section << endl
            << "Student number: " << s_number << endl;
        show.close();

        fstream templates;
        templates.open("Grades/" + details.course + details.section + ".txt", ios::out);
        templates
            << " Introduction to Computing I        | " << endl
            << " Computer Programming I             | " << endl
            << " Drafting                           | " << endl
            << " Understanding the Self             | " << endl
            << " Mathematics in the Modern World    | " << endl
            << " Movement Competency Training       | " << endl
            << " NSTP (CWTS) I                      | ";
        templates.close();

        fstream grades;
        grades.open("Grades/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        grades
            << " Introduction to Computing I        | " << endl
            << " Computer Programming I             | " << endl
            << " Drafting                           | " << endl
            << " Understanding the Self             | " << endl
            << " Mathematics in the Modern World    | " << endl
            << " Movement Competency Training       | " << endl
            << " NSTP (CWTS) I                      | ";
        grades.close();

        system("cls");
        SetConsoleTextAttribute(h, 14);
        cout << "Account has been created...." << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Name: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.name << " " << details.mname << " " << details.lname << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Course & Section: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.course << "-" << details.section << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        admin();
    }

    if (details.course == "IS" && details.section == "1A") // Master for IS 1A
    {
        fstream accounts;
        accounts.open("Accounts/masterlist.txt", ios::app);
        accounts << s_number << endl;
        accounts.close();

        fstream templates;
        templates.open("Grades/" + details.course + details.section + ".txt", ios::out);
        templates
            << " Introduction to Computing I        | " << endl
            << " Computer Programming I             | " << endl
            << " Business Application Software      | " << endl
            << " Movement Competency Training       | " << endl
            << " NSTP (CWTS) I                      | " << endl
            << " Understanding the Self             | " << endl
            << " Readings in the Philippine History | " << endl
            << " Contemporary World                 | ";
        templates.close();

        fstream masterlist;
        masterlist.open("Masterlist/masterlist" + details.course + details.section + ".txt", ios::app);
        masterlist << "  " << left << setw(11) << s_number << "| " << details.lname << ", " << details.name << " " << details.mname << endl;
        masterlist.close();

        fstream show;
        show.open("Student/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        show << "Name: " << details.name << endl
            << "Last Name: " << details.lname << endl
            << "Middle Name: " << details.mname << endl
            << "Course & Section: " << details.course << details.section << endl
            << "Student number: " << s_number << endl;
        show.close();

        fstream grades;
        grades.open("Grades/" + details.course + details.section + "-" + s_number + ".txt", ios::out);

        grades
            << " Introduction to Computing I        | " << endl
            << " Computer Programming I             | " << endl
            << " Business Application Software      | " << endl
            << " Movement Competency Training       | " << endl
            << " NSTP (CWTS) I                      | " << endl
            << " Understanding the Self             | " << endl
            << " Readings in the Philippine History | " << endl
            << " Contemporary World                 | ";
        grades.close();

        system("cls");
        SetConsoleTextAttribute(h, 14);
        cout << "Account has been created...." << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Name: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.name << " " << details.mname << " " << details.lname << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "Course & Section: ";
        SetConsoleTextAttribute(h, 11);
        cout << details.course << "-" << details.section << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "-----------------------------" << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        admin();
    }

    else
    {
        system("cls");
        SetConsoleTextAttribute(h, 12);
        cout << "Invalid Course/Section. Please try again.\n";
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        aadd_record();
    }
}

//Add/Edit Student Grades
void addGrades()
{
    system("cls");
    SetConsoleTextAttribute(h, 1);
    cout << "      [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "ADD GRADES ";
    SetConsoleTextAttribute(h, 1);
    cout << "]\n\n";
    SetConsoleTextAttribute(h, 14);
    aback();
    Student details;
    string s_number;
    SetConsoleTextAttribute(h, 1);
    cout << "\t\t\t" << "  [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "ADD GRADES ";
    SetConsoleTextAttribute(h, 1);
    cout << "]\n\n";
    SetConsoleTextAttribute(h, 14);
    cout << "\t--- Additional Function: Can also rewrite grades ---\n\n\n";
    cout << "Enter student number: ";
    SetConsoleTextAttribute(h, 11);
    cin >> s_number;

    int length = s_number.length();
    for (int i = 0; i < length; i++)
    {
        system("cls");
        if (!isdigit(s_number[i]))
        {
            SetConsoleTextAttribute(h, 12);
            cout << "Error in Student Number. Please double check." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            addGrades();
        }
    }

    SetConsoleTextAttribute(h, 1);
    cout << "         [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "ADD GRADES ";
    SetConsoleTextAttribute(h, 1);
    cout << "]\n\n";
    SetConsoleTextAttribute(h, 14);
    cout << "Course";
    SetConsoleTextAttribute(h, 6);
    cout << " [ CS | IT | EMC | IS ]: ";
    SetConsoleTextAttribute(h, 11);
    cin >> details.course;
    SetConsoleTextAttribute(h, 14);
    cout << "Section";
    SetConsoleTextAttribute(h, 6);
    cout << " (1A or 1B): ";
    SetConsoleTextAttribute(h, 11);
    cin >> details.section;
    SetConsoleTextAttribute(h, 14);
    system("cls");

    fstream choices;
    choices.open("Grades/" + details.course + details.section + "-" + s_number + ".txt");

    if (choices.fail())
    {
        SetConsoleTextAttribute(h, 12);
        cout << "There is no such record." << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        addGrades();
    }

    else
    {
        SetConsoleTextAttribute(h, 6);
        cout << "________________________________________________" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << " Num ";
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 14);
        cout << "            Subjects                ";
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 14);
        cout << " GWA  " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "================================================" << endl;
        string line;
        int i = 1;
        while (getline(choices, line))
        {
            cout << "  ";
            SetConsoleTextAttribute(h, 9);
            cout << left << setw(3) << i;
            SetConsoleTextAttribute(h, 6);
            cout << "|";
            SetConsoleTextAttribute(h, 6);
            cout << line;
            cout << "" << endl;
            i++;
        }
        cout << "================================================" << endl;
    }
    choices.close();

    int choice;
    string grades;
    SetConsoleTextAttribute(h, 14);
    cout << "Enter Subject Number: ";
    SetConsoleTextAttribute(h, 11);
    cin >> choice;
    SetConsoleTextAttribute(h, 14);
    cout << "Enter GWA: ";
    SetConsoleTextAttribute(h, 11);
    cin >> grades;
    if (grades == "0")
    {
        grades = " ";
    }

    fstream read;
    read.open("Grades/" + details.course + details.section + "-" + s_number + ".txt");

    vector <string> subjects;
    string line;

    while (getline(read, line))
    {
        subjects.push_back(line);
    }
    read.close();

    fstream templates;
    templates.open("Grades/" + details.course + details.section + ".txt");

    vector <string> temp;
    string line1;

    while (getline(templates, line1))
    {
        temp.push_back(line1);
    }
    templates.close();

    if (choice > subjects.size())
    {
        system("cls");
        SetConsoleTextAttribute(h, 12);
        cout << "Invalid choice" << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        addGrades();
    }

    ofstream write_grade;
    write_grade.open("Grades/" + details.course + details.section + "-" + s_number + ".txt");

    choice--;
    for (int i = 0; i < subjects.size(); i++)
    {
        if (i != choice)
        {
            write_grade << subjects[i] << endl;
        }

        else
        {
            string changes;
            changes = temp[choice];
            write_grade << changes << grades << endl;
        }
    }
    SetConsoleTextAttribute(h, 11);
    cout << ("\n");
    system("pause");
    write_grade.close();
    system("cls");
    SetConsoleTextAttribute(h, 14);
    cout << "Changes has been made. Booting you back to main." << endl;
    SetConsoleTextAttribute(h, 11);
    system("pause");
    system("cls");
    admin();
}

//Modify Student Records
void a_edit()
{
    system("cls");
    SetConsoleTextAttribute(h, 1);
    cout << "      [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "MODIFY STUDENT RECORDS";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    aback();

    SetConsoleTextAttribute(h, 1);
    cout << "\t\t\t" << "   [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "MODIFY STUDENT RECORDS";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    SetConsoleTextAttribute(h, 9);
    cout << "===================================";
    SetConsoleTextAttribute(h, 1);
    cout << "[ ";
    SetConsoleTextAttribute(h, 14);
    cout << "Guide ";
    SetConsoleTextAttribute(h, 1);
    cout << "]";
    SetConsoleTextAttribute(h, 9);
    cout << "============================================\n";
    SetConsoleTextAttribute(h, 11);
    cout << "|You will first edit the individual student information then the masterlist after that |\n";
    SetConsoleTextAttribute(h, 9);
    cout << "========================================================================================\n\n";

    Student details;
    string s_number;
    SetConsoleTextAttribute(h, 14);
    cout << "Enter student number: ";
    SetConsoleTextAttribute(h, 11);
    cin >> s_number;

    int length = s_number.length();
    for (int i = 0; i < length; i++)
    {
        system("cls");
        if (!isdigit(s_number[i]))
        {
            SetConsoleTextAttribute(h, 12);
            cout << "Error ";
            SetConsoleTextAttribute(h, 14);
            cout << "in Student Number.";
            SetConsoleTextAttribute(h, 2);
            cout << "Please";
            SetConsoleTextAttribute(h, 14);
            cout << " double check." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            a_edit();
        }
    }
    SetConsoleTextAttribute(h, 1);
    cout << "      [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "MODIFY STUDENT RECORDS";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    SetConsoleTextAttribute(h, 14);
    cout << "Course ";
    SetConsoleTextAttribute(h, 6);
    cout << "(CS, IT, EMC or IS): ";
    SetConsoleTextAttribute(h, 11);
    cin >> details.course;
    SetConsoleTextAttribute(h, 14);
    cout << "Section ";
    SetConsoleTextAttribute(h, 6);
    cout << "(1A or 1B): ";
    SetConsoleTextAttribute(h, 11);
    cin >> details.section;
    cout << endl;
    fstream read;

    read.open("Student/" + details.course + details.section + "-" + s_number + ".txt");

    if (read.fail())
    {
        SetConsoleTextAttribute(h, 12);
        cout << "There is no such record. Please try again." << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        a_edit();
    }

    else
    {
        string line;
        int i = 1;
        SetConsoleTextAttribute(h, 6);
        cout << "__________________________________________" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << " Num ";
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 14);
        cout << "               List      " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "==========================================" << endl;
        while (getline(read, line))
        {
            if (i != 4)
            {
                cout << "  ";
                SetConsoleTextAttribute(h, 9);
                cout << i;
                SetConsoleTextAttribute(h, 6);
                cout << "  | ";
                SetConsoleTextAttribute(h, 11);
                cout << line << "" << endl;
                i++;

            }
        }
        SetConsoleTextAttribute(h, 6);
        cout << "==========================================" << endl;
        read.close();
    }

    string course;
    string store;
    ifstream check("Student/" + details.course + details.section + "-" + s_number + ".txt");
    vector <string> courses;

    while (check >> course)
    {
        courses.push_back(course);
    }

    for (std::string course : courses) // This is ranged base for loop
    {
        if (course == "CS1A")
        {
            store.assign(course);
        }

        if (course == "CS1B")
        {
            store.assign(course);
        }

        if (course == "IT1A")
        {
            store.assign(course);
        }

        if (course == "IT1B")
        {
            store.assign(course);
        }

        if (course == "IS1A")
        {
            store.assign(course);
        }

        if (course == "EMC1A")
        {
            store.assign(course);
        }
    }

    int choice;
    string text;
    do
    {
        int error = 0;

        if (error < 1)
        {
            SetConsoleTextAttribute(h, 2);
            cout << "Please input a valid line." << endl;

        }

        SetConsoleTextAttribute(h, 14);
        cout << "Pick the line that needs to be edited: " << flush;
        SetConsoleTextAttribute(h, 11);
        cin >> choice;


        cin.ignore(); //Kailangan natin to dahil nalilito si Computer pag dating sa getline kasi kinukuha yung ''unang'' value ng cin mo kaya need mo siya iignore

        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            SetConsoleTextAttribute(h, 12);
            cout << "\nPlease enter a valid number." << endl;

        }
        error++;

    } while (choice < 1 || choice > 3);

    if (choice == 1)
    {
        SetConsoleTextAttribute(h, 14);
        cout << "Name: ";
        SetConsoleTextAttribute(h, 11);
        getline(cin, text);
        system("cls");

        SetConsoleTextAttribute(h, 1);
        cout << "\t         [";
        SetConsoleTextAttribute(h, 14);
        cout << " Master List of ";
        SetConsoleTextAttribute(h, 6);
        cout << store;
        SetConsoleTextAttribute(h, 1);
        cout << " ]              " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "_________________________________________________________" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << " Num ";
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 14);
        cout << " Student No. ";
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 14);
        cout << " Name           " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "=========================================================" << endl;

        fstream Mread;
        Mread.open("Masterlist/masterlist" + store + ".txt");

        if (Mread.fail())
        {
            SetConsoleTextAttribute(h, 12);
            cout << "There is no such record.Please try again." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            a_edit();
        }

        else
        {
            string line;
            int i = 1;
            while (getline(Mread, line))
            {
                cout << "  ";
                SetConsoleTextAttribute(h, 9);
                cout << left << setw(3) << i;
                SetConsoleTextAttribute(h, 6);
                cout << "|";
                SetConsoleTextAttribute(h, 6);
                cout << line << "" << endl;
                i++;
            }
            Mread.close();
        }

        fstream editMaster;
        editMaster.open("Masterlist/masterlist" + store + ".txt"); //read natin yung ieedited na file
        vector<string> lines1;
        string line1;

        while (getline(editMaster, line1))
        {
            lines1.push_back(line1);
        }

        Student details;
        int choose1 = 1;

        do
        {
            int error = 0;
            SetConsoleTextAttribute(h, 6);
            cout << "=========================================================" << endl;
            if (error < 1)
            {
                SetConsoleTextAttribute(h, 2);
                cout << "Please input a valid line." << endl;
            }


            SetConsoleTextAttribute(h, 14);
            cout << "Select the student from the masterlist that needs to be edited: ";
            SetConsoleTextAttribute(h, 11);
            cin >> choose1;
            cin.ignore();

            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                SetConsoleTextAttribute(h, 12);
                cout << "Please enter a valid number" << endl;
            }

        } while (choose1 > lines1.size());

        if (choose1 > lines1.size())
        {
            SetConsoleTextAttribute(h, 12);
            cout << "\nLine does not exist, please try again." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            a_edit();
        } //Pag hindi nag eexist yung eedit for exmaple gusto i edit yung 5 e wala namang 5

        SetConsoleTextAttribute(h, 14);
        cout << "\nKindly re-type the details to be edited to revise the masterlist" << endl;

        if (choose1 != 0)
        {
            SetConsoleTextAttribute(h, 14);
            cout << "Last Name: ";
            SetConsoleTextAttribute(h, 11);
            getline(cin, details.lname);
            SetConsoleTextAttribute(h, 14);
            cout << "Middle Name";
            SetConsoleTextAttribute(h, 6);
            cout << " (Type 0 if not applicable): ";
            SetConsoleTextAttribute(h, 11);
            cin >> details.mname;
            if (details.mname == "0")
            {
                details.mname = " ";
            }

            SetConsoleTextAttribute(h, 14);
            cout << "Course ";
            SetConsoleTextAttribute(h, 6);
            cout << "[ CS | IT | EMC | IS ]: ";
            SetConsoleTextAttribute(h, 11);
            cin >> details.course;
            SetConsoleTextAttribute(h, 14);
            cout << "Section ";
            SetConsoleTextAttribute(h, 6);
            cout << "(1A or 1B): ";
            SetConsoleTextAttribute(h, 11);
            cin >> details.section;
        }

        ofstream Medit; //actual edit na natin yung nasa vector
        Medit.open("Masterlist/masterlist" + store + ".txt");

        choose1--; //decrement yung choice habang sinusulat niya lahat ng lines sa isang text file
        for (int i = 0; i < lines1.size(); i++)
        {
            if (i != choose1)
            {
                Medit << lines1[i] << endl;
            }

            else
            {
                Medit << "  " << s_number << "   | " << details.lname << ", " << text << " " << details.mname << endl;
            }
        }

        Medit.close();
        editMaster.close();
        text = "Name: " + text;
    }

    if (choice == 2)
    {
        SetConsoleTextAttribute(h, 14);
        cout << "Last Name: ";
        SetConsoleTextAttribute(h, 11);
        getline(cin, text);
        system("cls");

        SetConsoleTextAttribute(h, 1);
        cout << "\t         [";
        SetConsoleTextAttribute(h, 14);
        cout << " Master List of ";
        SetConsoleTextAttribute(h, 6);
        cout << store;
        SetConsoleTextAttribute(h, 1);
        cout << " ]              " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "_________________________________________________________" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << " Num ";
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 14);
        cout << " Student No. ";
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 14);
        cout << " Name           " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "=========================================================" << endl;



        fstream Mread;
        Mread.open("Masterlist/masterlist" + store + ".txt");

        if (Mread.fail())
        {
            SetConsoleTextAttribute(h, 12);
            cout << "There is no such record. Please try again." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            a_edit();
        }

        else
        {

            string line;
            int i = 1;
            while (getline(Mread, line))
            {
                cout << "  ";
                SetConsoleTextAttribute(h, 9);
                cout << left << setw(3) << i;
                SetConsoleTextAttribute(h, 6);
                cout << "|";
                SetConsoleTextAttribute(h, 6);
                cout << line << "" << endl;
                i++;

            }

            Student details;
            Mread.close();
        }

        fstream editMaster;
        editMaster.open("Masterlist/masterlist" + store + ".txt"); //read natin yung ieedited na file
        vector<string> lines1;
        string line1;

        while (getline(editMaster, line1))
        {
            lines1.push_back(line1);
        }

        int choose1 = 1;

        do
        {
            int error = 0;
            cout << "=========================================================" << endl;
            if (error < 1)
            {
                SetConsoleTextAttribute(h, 2);
                cout << "Please input a valid line." << endl;
            }


            SetConsoleTextAttribute(h, 14);
            cout << "Select the student from the masterlist that needs to be edited: ";
            SetConsoleTextAttribute(h, 11);
            cin >> choose1;
            cin.ignore();

            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                SetConsoleTextAttribute(h, 12);
                cout << "Please enter a valid number" << endl;
            }

        } while (choose1 > lines1.size());

        if (choose1 != 0)
        {
            SetConsoleTextAttribute(h, 14);
            cout << "First Name: ";
            SetConsoleTextAttribute(h, 11);
            getline(cin, details.name);
            SetConsoleTextAttribute(h, 14);
            cout << "Middle Name";
            SetConsoleTextAttribute(h, 6);
            cout << " (Type 0 if not applicable): ";
            SetConsoleTextAttribute(h, 11);
            getline(cin, details.mname);
            if (details.mname == "0")
            {
                details.mname = " ";
            }
            SetConsoleTextAttribute(h, 14);
            cout << "Course ";
            SetConsoleTextAttribute(h, 6);
            cout << "[ CS | IT | EMC | IS ]: ";
            SetConsoleTextAttribute(h, 11);
            cin >> details.course;
            SetConsoleTextAttribute(h, 14);
            cout << "Section ";
            SetConsoleTextAttribute(h, 6);
            cout << "(1A or 1B): ";
            SetConsoleTextAttribute(h, 11);
            cin >> details.section;
        }



        ofstream Medit; //actual edit na natin yung nasa vector
        Medit.open("Masterlist/masterlist" + store + ".txt");

        choose1--; //decrement yung choice habang sinusulat niya lahat ng lines sa isang text file
        for (int i = 0; i < lines1.size(); i++)
        {
            if (i != choose1)
            {
                Medit << lines1[i] << endl;
            }

            else
            {
                Medit << "  " << s_number << "   | " << text << ", " << details.name << " " << details.mname << endl;
            }
        }

        Medit.close();
        editMaster.close();
        text = "Last Name: " + text;
    }

    if (choice == 3)
    {
        SetConsoleTextAttribute(h, 14);
        cout << "Middle Name: ";
        SetConsoleTextAttribute(h, 11);
        getline(cin, text);
        system("cls");

        SetConsoleTextAttribute(h, 1);
        cout << "\t         [";
        SetConsoleTextAttribute(h, 14);
        cout << " Master List of ";
        SetConsoleTextAttribute(h, 6);
        cout << store;
        SetConsoleTextAttribute(h, 1);
        cout << " ]              " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "_________________________________________________________" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << " Num ";
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 14);
        cout << " Student No. ";
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 14);
        cout << " Name           " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "=========================================================" << endl;



        fstream Mread;
        Mread.open("Masterlist/masterlist" + store + ".txt");

        if (Mread.fail())
        {
            SetConsoleTextAttribute(h, 12);
            cout << "There is no such record. Please try again." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            a_edit();
        }

        else
        {
            string line;
            int i = 1;
            while (getline(Mread, line))
            {
                cout << "  ";
                SetConsoleTextAttribute(h, 9);
                cout << left << setw(3) << i;
                SetConsoleTextAttribute(h, 6);
                cout << "|";
                SetConsoleTextAttribute(h, 6);
                cout << line << "" << endl;
                i++;
            }
            Mread.close();
        }

        fstream editMaster2;
        editMaster2.open("Masterlist/masterlist" + store + ".txt"); //read natin yung ieedited na file
        vector<string> lines2;
        string line2;

        while (getline(editMaster2, line2))
        {
            lines2.push_back(line2);
        }

        Student details;
        int choose1 = 1;

        do
        {
            int error = 0;
            SetConsoleTextAttribute(h, 6);
            cout << "=========================================================" << endl; //Header file para sa pag eedit
            if (error < 1)
            {
                SetConsoleTextAttribute(h, 2);
                cout << "Please input a valid line." << endl;
            }


            SetConsoleTextAttribute(h, 14);
            cout << "Select the student from the masterlist that needs to be edited: ";
            SetConsoleTextAttribute(h, 11);
            cin >> choose1;
            cin.ignore();

            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                SetConsoleTextAttribute(h, 12);
                cout << "Please enter a valid number" << endl;
            }

        } while (choose1 > lines2.size());

        cout << "\nKindly re-type the details to be edited to revise the masterlist." << endl;

        if (choose1 != 0)
        {
            SetConsoleTextAttribute(h, 14);
            cout << "First Name: ";
            SetConsoleTextAttribute(h, 11);
            getline(cin, details.name);
            SetConsoleTextAttribute(h, 14);
            cout << "Last Name: ";
            SetConsoleTextAttribute(h, 11);
            getline(cin, details.lname);
            SetConsoleTextAttribute(h, 14);
            cout << "Course ";
            SetConsoleTextAttribute(h, 6);
            cout << "[ CS | IT | EMC | IS ]: ";
            SetConsoleTextAttribute(h, 11);
            cin >> details.course;
            SetConsoleTextAttribute(h, 14);
            cout << "Section ";
            SetConsoleTextAttribute(h, 6);
            cout << "(1A or 1B): ";
            SetConsoleTextAttribute(h, 11);
            cin >> details.section;
        }

        fstream editMaster3;
        editMaster3.open("Masterlist/masterlist" + store + ".txt"); //read natin yung ieedit na file
        vector<string> lines3;
        string line3;

        while (getline(editMaster3, line3))
        {
            lines3.push_back(line3);
        }

        if (choose1 > lines3.size())
        {
            SetConsoleTextAttribute(h, 12);
            cout << "\nLine does not exist, please try again." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            a_edit();
        } //Pag hindi nag eexist yung eedit for exmaple gusto i edit yung 5 e wala namang 5

        ofstream Medit; //actual edit na natin yung nasa vector
        Medit.open("Masterlist/masterlist" + store + ".txt");

        choose1--; //decrement yung choice habang sinusulat niya lahat ng lines sa isang text file
        for (int i = 0; i < lines3.size(); i++)
        {
            if (i != choose1)
            {
                Medit << lines3[i] << endl;
            }

            else
            {
                Medit << "  " << s_number << "   | " << details.lname << ", " << details.name << " " << text << endl;
            }
        }

        Medit.close();
        editMaster3.close();
        text = "Middle Name: " + text;
    }

    fstream editFile;
    editFile.open("Student/" + details.course + details.section + "-" + s_number + ".txt"); //read natin yung ieedit na file
    vector<string> lines;
    string line;

    while (getline(editFile, line)) //Save the contents of the file in the line vector
    {
        lines.push_back(line);
    }
    editFile.close();

    if (choice > lines.size())
    {
        SetConsoleTextAttribute(h, 12);
        cout << "Line does not exist, Please try again." << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        a_edit();
    } //Pag hindi nag eexist yung eedit for exmaple gusto i edit yung 5 e wala namang 5

    ofstream edit; //actual edit na natin yung nasa vector
    edit.open("Student/" + details.course + details.section + "-" + s_number + ".txt");

    choice--; //decrement yung choice habang sinusulat niya lahat ng lines sa isang text file
    for (int i = 0; i < lines.size(); i++)
    {
        if (i != choice)
        {
            edit << lines[i] << endl;
        }

        else
        {
            edit << text << endl;
        }
    }
    edit.close();
    SetConsoleTextAttribute(h, 11);
    system("pause");
    system("cls");
    SetConsoleTextAttribute(h, 14);
    cout << "Changes has been updated." << endl;
    SetConsoleTextAttribute(h, 11);
    system("pause");
    system("cls");
    admin();
}

//Remove Student Records
void adelete_record()
{
    system("cls");
    SetConsoleTextAttribute(h, 1);
    cout << "      [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "REMOVE STUDENT RECORD";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    aback();

    Student details;
    system("cls");
    SetConsoleTextAttribute(h, 1);
    cout << "\t[ ";
    SetConsoleTextAttribute(h, 14);
    cout << "REMOVE STUDENT RECORD";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    SetConsoleTextAttribute(h, 6);
    cout << "============================================\n";
    SetConsoleTextAttribute(h, 14);
    cout << "| CS1A | CS1B | IT1A | IT1B | IS1A | EMC1A |\n";
    SetConsoleTextAttribute(h, 6);
    cout << "============================================" << endl;
    SetConsoleTextAttribute(h, 14);
    cout << "Course & Section: ";
    SetConsoleTextAttribute(h, 11);
    cin >> details.section;
    cin.clear();
    SetConsoleTextAttribute(h, 14);
    cout << "Student number: ";
    SetConsoleTextAttribute(h, 11);
    cin >> details.snumber;
    cin.clear();

    int length = details.snumber.length();
    for (int i = 0; i < length; i++)
    {
        system("cls");
        if (!isdigit(details.snumber[i]))
        {
            SetConsoleTextAttribute(h, 12);
            cout << "Error in Student Number. Please try again." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            adelete_record();
        }
    }

    fstream checkStudent;
    checkStudent.open("Student/" + details.section + "-" + details.snumber + ".txt");

    if (checkStudent.fail())
    {
        system("cls");
        SetConsoleTextAttribute(h, 12);
        cout << "Student does not exist within our records. Please double check the inputted information" << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        adelete_record();
    }

    fstream cAccount;
    int counter = 0;
    cAccount.open("Accounts/masterlist.txt");
    if (cAccount.is_open())
    {
        string line;
        while (getline(cAccount, line))
        {
            if (line == details.snumber)
            {
                counter++;
            }
        }
    }

    if (counter == 0)
    {
        system("cls");
        SetConsoleTextAttribute(h, 12);
        cout << "Account is already deleted. Please try again" << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        adelete_record();
        cAccount.close();
    }

    string date;
    SetConsoleTextAttribute(h, 14);
    cout << "Date ";
    SetConsoleTextAttribute(h, 6);
    cout << "(MM/DD/YYYY): ";
    SetConsoleTextAttribute(h, 11);
    cin >> date;
    history(details.snumber, date);
    system("cls");

    SetConsoleTextAttribute(h, 1);
    cout << "\t         [";
    SetConsoleTextAttribute(h, 14);
    cout << " Master List of ";
    SetConsoleTextAttribute(h, 6);
    cout << details.section;
    SetConsoleTextAttribute(h, 1);
    cout << " ]              " << endl;
    SetConsoleTextAttribute(h, 6);
    cout << "_________________________________________________________" << endl;
    SetConsoleTextAttribute(h, 14);
    cout << " Num ";
    SetConsoleTextAttribute(h, 6);
    cout << "|";
    SetConsoleTextAttribute(h, 14);
    cout << " Student No.";
    SetConsoleTextAttribute(h, 6);
    cout << " |";
    SetConsoleTextAttribute(h, 14);
    cout << "\t\t   Name " << endl;
    SetConsoleTextAttribute(h, 6);
    cout << "=========================================================" << endl;

    fstream masterlist; // For some reason, nag eeror ito.
    masterlist.open("Masterlist/masterlist" + details.section + ".txt");

    if (masterlist.fail())
    {
        system("cls");
        SetConsoleTextAttribute(h, 12);
        cout << "There is no such record. Please try again." << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        adelete_record();
    }

    vector <string> masterlists;
    string masterlist1;

    int line = 1;
    while (getline(masterlist, masterlist1))
    {
        cout << "  ";
        SetConsoleTextAttribute(h, 9);
        cout << left << setw(3) << line;
        SetConsoleTextAttribute(h, 6);
        cout << "|";
        SetConsoleTextAttribute(h, 6);
        cout << masterlist1 << "" << endl;
        line++;

        masterlists.push_back(masterlist1);
    }
    SetConsoleTextAttribute(h, 6);
    cout << "=========================================================" << endl;
    masterlist.close();

    int position;
    int checker = 0;
    SetConsoleTextAttribute(h, 14);
    do
    {
        cout << "Pick the student that needs to be removed according to it's numerical position: ";
        SetConsoleTextAttribute(h, 11);
        cin >> position;

        if (!cin >> position)
        {
            cin.clear();
            cin.ignore(100, '\n');
            SetConsoleTextAttribute(h, 12);
            cout << "Please input a valid number." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            adelete_record();
        }

        if (position > masterlists.size())
        {
            system("cls");
            SetConsoleTextAttribute(h, 12);
            cout << "Line does not exist. Please try again." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            adelete_record();
        }

        position--;
        if (masterlists[position].find(details.snumber) != string::npos)
        {
            checker++;
        }

        else
        {
            SetConsoleTextAttribute(h, 12);
            cout << "Inputted student number does not match the one to be deleted." << endl;

        }

    } while (checker == 0);

    ofstream write_master;
    write_master.open("Masterlist/masterlist" + details.section + ".txt");


    for (int i = 0; i < masterlists.size(); i++)
    {
        if (i != position)
        {
            write_master << masterlists[i] << endl;
        }
    }
    write_master.close();

    //Student
    ofstream individual;
    individual.open("Student/" + details.course + details.section + "-" + details.snumber + ".txt", std::ofstream::trunc); //Overwrite the whole file with just space

    if (individual.fail())
    {
        SetConsoleTextAttribute(h, 14);
        cout << "There is no such student in our directories." << endl;
        cout << "Please double check the student number." << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        adelete_record();
    }

    else
    {
        individual << " ";
    }
    individual.close();

    ofstream grades;
    grades.open("Grades/" + details.course + details.section + "-" + details.snumber + ".txt", std::ofstream::trunc);

    if (grades.fail())
    {
        SetConsoleTextAttribute(h, 14);
        cout << "There is no such student in our directories." << endl;
        cout << "Please double check the student number." << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        adelete_record();
    }

    else
    {
        grades << " ";
    }
    grades.close();

    fstream delAccounts;
    delAccounts.open("Accounts/masterlist.txt");
    vector <string> dAccounts;
    string accounts;

    while (getline(delAccounts, accounts))
    {
        if (accounts != details.snumber)
        {
            dAccounts.push_back(accounts);
        }
    }
    delAccounts.close();

    ofstream rewrite;
    rewrite.open("Accounts/masterlist.txt");

    for (int i = 0; i < dAccounts.size(); i++)
    {
        rewrite << dAccounts[i] << endl;
    }

    system("cls");
    SetConsoleTextAttribute(h, 14);
    cout << "Student details has been deleted from masterlist and individual student records." << endl;
    SetConsoleTextAttribute(h, 11);
    system("pause");
    system("cls");
    adelete_record();
}

void history(string s_number, string date)
{
    fstream history;
    history.open("history.txt", ios::app);
    if (history.is_open())
    {
        history << "Student number: " << s_number << endl;
        history << "Date: " << date << endl << endl;
        history.close();
        return;
    }

    if (!history.is_open())
    {
        ofstream create;
        create.open("history.txt");
        create << "Student number: " << s_number << endl;
        create << "Date: " << date << endl << endl;
        create.close();
        return;
    }
}

//Masterlist
void aview_record()
{
    system("cls");
    SetConsoleTextAttribute(h, 1);
    cout << "      [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "MASTERLIST";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    aback();
    Student details;
    string s_number;
    SetConsoleTextAttribute(h, 6);
    cout << "============================================\n";
    SetConsoleTextAttribute(h, 14);
    cout << "| CS1A | CS1B | IT1A | IT1B | IS1A | EMC1A |\n";
    SetConsoleTextAttribute(h, 6);
    cout << "============================================\n";
    SetConsoleTextAttribute(h, 9);
    cout << "------- ";
    SetConsoleTextAttribute(h, 11);
    cout << "Select which one on the top";
    SetConsoleTextAttribute(h, 9);
    cout << " --------\n\n";
    SetConsoleTextAttribute(h, 14);
    cout << "CSD Course & Section: ";
    SetConsoleTextAttribute(h, 11);
    cin >> s_number;

    for (int i = 0; i < s_number.size(); i++)
    {
        if (islower(s_number[i]))
        {
            s_number[i] = toupper(s_number[i]);
        }
    }
    system("cls");

    fstream show;
    show.open("Masterlist/masterlist" + s_number + ".txt", ios::in);

    if (show.is_open())
    {
        SetConsoleTextAttribute(h, 1);
        cout << "          [ ";
        SetConsoleTextAttribute(h, 14);
        cout << "Master List of ";
        SetConsoleTextAttribute(h, 6);
        cout << s_number;
        SetConsoleTextAttribute(h, 1);
        cout << " ]              " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "__________________________________________" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << " Student No. |            Name           " << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "==========================================" << endl;
        SetConsoleTextAttribute(h, 14);
        string line;
        while (getline(show, line))
        {
            cout << line << endl;
        }
        show.close();
    }

    else
    {
        system("cls");
        SetConsoleTextAttribute(h, 12);
        cout << "Course & Section does not exist. Please try again." << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        aview_record();
    }
    SetConsoleTextAttribute(h, 6);
    cout << "==========================================" << endl;
    SetConsoleTextAttribute(h, 11);
    system("pause");
    system("cls");
    admin();

}

//Student Grades
void viewGrades()
{
    system("cls");
    SetConsoleTextAttribute(h, 1);
    cout << "      [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "STUDENT GRADES";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    aback();

    SetConsoleTextAttribute(h, 1);
    cout << "     [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "STUDENT GRADES";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    SetConsoleTextAttribute(h, 2);
    Student details;
    SetConsoleTextAttribute(h, 14);
    cout << "Student number: ";
    SetConsoleTextAttribute(h, 11);
    cin >> details.snumber;

    int length = details.snumber.length();
    for (int i = 0; i < length; i++)
    {
        system("cls");
        if (!isdigit(details.snumber[i]))
        {
            SetConsoleTextAttribute(h, 12);
            cout << "Error ";
            SetConsoleTextAttribute(h, 14);
            cout << "in Student Number.";
            SetConsoleTextAttribute(h, 2);
            cout << "Please";
            SetConsoleTextAttribute(h, 14);
            cout << " double check." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            viewGrades();
        }
    }

    fstream cAccount;
    cAccount.open("Accounts/masterlist.txt");

    string student;
    int counter = 0;
    while (!cAccount.eof())
    {
        cAccount >> student;
        if (student == details.snumber)
        {
            counter++;
        }
    }
    cAccount.close();

    if (counter == 0)
    {
        system("cls");
        cout << "Your account does not exist. Please contact the Admin for inquiries.";
        system("pause");
        viewGrades();
    }

    SetConsoleTextAttribute(h, 1);
    cout << "      [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "STUDENT GRADES";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n\n";
    SetConsoleTextAttribute(h, 14);
    cout << "Course ";
    SetConsoleTextAttribute(h, 6);
    cout << "(CS, IT, EMC or IS): ";
    SetConsoleTextAttribute(h, 11);
    cin >> details.course;
    SetConsoleTextAttribute(h, 14);
    cout << "Section ";
    SetConsoleTextAttribute(h, 6);
    cout << "(1A or 1B): ";
    SetConsoleTextAttribute(h, 11);
    cin >> details.section;

    fstream ViewGrades;
    ViewGrades.open("Grades/" + details.course + details.section + "-" + details.snumber + ".txt");

    if (ViewGrades.fail())
    {
        SetConsoleTextAttribute(h, 12);
        cout << "\nThere is no such record. Please try again." << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        viewGrades();
    }

    system("cls");
    SetConsoleTextAttribute(h, 1);
    cout << "\t   [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "STUDENT GRADES";
    SetConsoleTextAttribute(h, 1);
    cout << " ]\n";
    SetConsoleTextAttribute(h, 14);
    //             Subjects                | GWA
    fstream name;
    name.open("Student/" + details.course + details.section + "-" + details.snumber + ".txt"); //read natin yung ieedit na file
    string line1, line2;
    int file_line1 = 0;
    int file_line2 = 0;

    while (!name.eof())
    {
        file_line1++;
        getline(name, line1);
        if (file_line1 == 1)  break;
    }
    name.close();

    string fname = "Name:";
    int found = -1;
    do
    {
        found = line1.find(fname, found + 1);
        if (found != -1)
        {
            line1 = line1.substr(0, found) + line1.substr(found + fname.length());
        }
    } while (found != 0);

    fstream lname;
    lname.open("Student/" + details.course + details.section + "-" + details.snumber + ".txt"); //read natin yung ieedit na file

    while (!lname.eof())
    {
        file_line2++;
        getline(lname, line2);
        if (file_line2 == 2) break;
    }
    lname.close();

    string last_name = "Last Name:";
    int found2 = -1;
    do
    {
        found2 = line2.find(last_name, found2 + 1);
        if (found2 != -1)
        {
            line2 = line2.substr(0, found2) + line2.substr(found2 + last_name.length());
        }
    } while (found2 != 0);


    SetConsoleTextAttribute(h, 14);
    cout << "\t" << "\n      Grades of";
    SetConsoleTextAttribute(h, 11);
    cout << line1 << line2 << endl;
    SetConsoleTextAttribute(h, 6);
    cout << "__________________________________________" << endl;
    SetConsoleTextAttribute(h, 14);
    cout << "            Subjects                ";
    SetConsoleTextAttribute(h, 14);
    cout << "|";
    SetConsoleTextAttribute(h, 14);
    cout << " GWA  " << endl;
    SetConsoleTextAttribute(h, 6);
    cout << "==========================================" << endl;
    string line;
    SetConsoleTextAttribute(h, 14);
    while (getline(ViewGrades, line))
    {

        cout << line << endl;
    }
    SetConsoleTextAttribute(h, 6);
    cout << "==========================================" << endl;

    ViewGrades.close();
    cout << endl;
    SetConsoleTextAttribute(h, 11);
    system("pause");
    system("cls");
    admin();
}

string course, section, studentNumber;
//Student Part
void studentlogin()
{
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "      [ ";
        SetConsoleTextAttribute(h, 12);
        cout << "STUDENT LOG-IN ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        sback();
        SetConsoleTextAttribute(h, 1);
        cout << "      [ ";
        SetConsoleTextAttribute(h, 12);
        cout << "STUDENT LOG-IN ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n" << endl;

        Student details;
        SetConsoleTextAttribute(h, 12);
        cout << "Course ";
        SetConsoleTextAttribute(h, 9);
        cout << "(CS, IT, IS or EMC): ";
        SetConsoleTextAttribute(h, 11);
        cin >> details.course;
        SetConsoleTextAttribute(h, 12);
        cout << "Section ";
        SetConsoleTextAttribute(h, 9);
        cout << "(1A, 1B): ";
        SetConsoleTextAttribute(h, 11);
        cin >> details.section;
        SetConsoleTextAttribute(h, 12);
        cout << "Student ID: ";
        SetConsoleTextAttribute(h, 11);
        cin >> details.snumber;

        int length = details.snumber.length();
        for (int i = 0; i < length; i++)
        {
            system("cls");
            if (!isdigit(details.snumber[i]))
            {
                SetConsoleTextAttribute(h, 12);
                cout << "Error in Student Number. Please double check." << endl;
                SetConsoleTextAttribute(h, 11);
                system("pause");
                studentlogin();
            }
        }

        fstream cAccount;
        cAccount.open("Accounts/masterlist.txt");

        string student;
        int counter = 0;
        while (!cAccount.eof())
        {
            cAccount >> student;
            if (student == details.snumber)
            {
                counter++;
            }
        }
        cAccount.close();

        if (counter == 0)
        {
            system("cls");
            cout << "Your account does not exist. Please contact the Admin for inquiries.";
            system("pause");
            studentlogin();
        }



        course = details.course;
        section = details.section;
        studentNumber = details.snumber;

        transform(course.begin(), course.end(), course.begin(), ::toupper);
        transform(section.begin(), section.end(), section.begin(), ::toupper);

        system("cls");

        fstream existing;
        existing.open("Student/" + details.course + details.section + "-" + details.snumber + ".txt");

        if (existing.fail())
        {
            system("cls");
            SetConsoleTextAttribute(h, 12);
            cout << "Your account does not exist. Please contact the Admin for inquiries." << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            main();
        }

        else
        {
            inloading();
            system("cls");
            studentDashboard();
        }

    }
}

/*Student Dashboard Panel*/
void studentDashboard()
{
    int choice;
    do
    {
        //Put the correct colors of this things here

        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "     [ ";
        SetConsoleTextAttribute(h, 12);
        cout << "STUDENT PORTAL";
        SetConsoleTextAttribute(h, 1);
        cout << " ]\n\n";

        //[1]Student Profile
        SetConsoleTextAttribute(h, 1);
        cout << "[";
        SetConsoleTextAttribute(h, 14);
        cout << "1";
        SetConsoleTextAttribute(h, 1);
        cout << "]";
        SetConsoleTextAttribute(h, 3);
        cout << " Student Profile" << endl;
        //[2]Subjects & Schedules
        SetConsoleTextAttribute(h, 1);
        cout << "[";
        SetConsoleTextAttribute(h, 14);
        cout << "2";
        SetConsoleTextAttribute(h, 1);
        cout << "]";
        SetConsoleTextAttribute(h, 3);
        cout << " Subjects & Schedules" << endl;
        //[3] Grades
        SetConsoleTextAttribute(h, 1);
        cout << "[";
        SetConsoleTextAttribute(h, 14);
        cout << "3";
        SetConsoleTextAttribute(h, 1);
        cout << "]";
        SetConsoleTextAttribute(h, 3);
        cout << " View Grades" << endl;
        //[4] Logout
        SetConsoleTextAttribute(h, 1);
        cout << "[";
        SetConsoleTextAttribute(h, 14);
        cout << "4";
        SetConsoleTextAttribute(h, 1);
        cout << "]";
        SetConsoleTextAttribute(h, 3);
        cout << " Log-out\n" << endl;
        SetConsoleTextAttribute(h, 9);
        cout << "Enter you choice: ";
        SetConsoleTextAttribute(h, 11);

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(100000, '\n');
            SetConsoleTextAttribute(h, 1);
            cout << "\n\t[ ";
            SetConsoleTextAttribute(h, 2);
            cout << "!!";
            SetConsoleTextAttribute(h, 14);
            cout << "Invalid input";
            SetConsoleTextAttribute(h, 2);
            cout << "!!";
            SetConsoleTextAttribute(h, 1);
            cout << " ]\n" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");

            studentDashboard();
        }
        cout << endl;
        system("cls");
    } while (choice < 1 || choice > 4);

    system("cls");

    if (choice == 1)
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t     [ ";
        SetConsoleTextAttribute(h, 12);
        cout << "STUDENT PROFILE";
        SetConsoleTextAttribute(h, 1);
        cout << " ]\n\n";
        fstream view;
        view.open("Student/" + course + section + "-" + studentNumber + ".txt", ios::in);
        {
            SetConsoleTextAttribute(h, 9);
            cout << "   _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
            cout << "  /____//____//____//____//____//____//____//____//____//____/\n\n";
            ;
            string line;
            while (getline(view, line))
            {

                SetConsoleTextAttribute(h, 14);
                cout << "          " << line << endl;
            }
            SetConsoleTextAttribute(h, 9);
            cout << "   _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
            cout << "  /____//____//____//____//____//____//____//____//____//____/\n\t\t";

        }
        view.close();
        SetConsoleTextAttribute(h, 11);
        cout << "\n" << system("pause");
        studentDashboard();
    }

    if (choice == 2)
    {

        if (course == "CS" && section == "1A")
        {
            //color the scheds
            system("cls");



            SetConsoleTextAttribute(h, 1);
            cout << "                                [ ";
            SetConsoleTextAttribute(h, 12);
            cout << "SUBJECT AND SCHEDULE OF ";
            SetConsoleTextAttribute(h, 11);
            cout << "CS1A ";
            SetConsoleTextAttribute(h, 1);
            cout << "]                                   " << endl;

            /*__________________________________________________________________________________________________
             | SUB CODE |               SUBJECT              |    DAY    |        TIME        |    PROFESSOR    |
             |==================================================================================================|*/
            SetConsoleTextAttribute(h, 9);
            cout << " __________________________________________________________________________________________________" << endl;
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << " SUB CODE ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "               SUBJECT              ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    DAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "        TIME        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    PROFESSOR    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|\n";
            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|" << endl;

            //| CCS101 | INTRODUCTION TO COMPUTING | SATURDAY | 1:00PM - 4 : 00PM | ALBAN,L.A |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS101  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     INTRODUCTION TO COMPUTING      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SATURDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   7:00AM-10:00AM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    ALBAN,L.A    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //| CCS102 | FUNDAMENTALS OF PROGRAMMING | SATURDAY | 10:00AM - 3 : 00PM | ALBAN, R.R |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS102  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    FUNDAMENTALS OF PROGRAMMING     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SATURDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-3:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    ALBAN,R.R    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  CCS109  |   BUSINESS APPLICATION SOFTWARE    | TUESDAY   |    5:30PM-8:30PM   |     MACARAEG    |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS109  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   BUSINESS APPLICATION SOFTWARE    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " TUESDAY   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    5:30PM-8:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     MACARAEG    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC001  |      UNDERSTANDING THE SELF        | SUNDAY    |   10:00AM-1:00PM   |     BATALLA     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC001  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      UNDERSTANDING THE SELF        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SUNDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-1:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     BATALLA     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC005  |      PURPOSIVE COMMMUNICATION      | WEDNESDAY |    5:00PM-8:00PM   |    MERDEGIA     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC005  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      PURPOSIVE COMMMUNICATION      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " WEDNESDAY ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    5:00PM-8:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    MERDEGIA     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC004  |  MATHEMATICS IN THE MODERN WORLD   | MONDAY    |    1:30PM-4:30PM   |    GERONIMO     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC004  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  MATHEMATICS IN THE MODERN WORLD   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    1:30PM-4:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    GERONIMO     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  NSTP101 |            NSTP CWTS 1             | MONDAY    |    4:30PM-7:30PM   |    DEL CARMEN   |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  NSTP101 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "            NSTP CWTS 1             ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    4:30PM-7:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    DEL CARMEN   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //| PATHFit1 |    MOVEMENT COMPETENCY TRAINING    | MONDAY    |  10:00PM-12:00PM   |     VINLUAN     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " PATHFit1 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    MOVEMENT COMPETENCY TRAINING    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  10:00PM-12:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     VINLUAN     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC002  | READINGS IN THE PHILIPPINE HISTORY | SATURDAY  |    5:30PM-8:30PM   | ENRIQUES,AARON  |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC002  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " READINGS IN THE PHILIPPINE HISTORY ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SATURDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    5:30PM-8:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " ENRIQUES,AARON  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;
            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|\n" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            studentDashboard();
        }

        if (course == "CS" && section == "1B")
        {
            system("cls");
            SetConsoleTextAttribute(h, 1);
            cout << "                                [ ";
            SetConsoleTextAttribute(h, 12);
            cout << "SUBJECT AND SCHEDULE OF ";
            SetConsoleTextAttribute(h, 11);
            cout << "CS1B ";
            SetConsoleTextAttribute(h, 1);
            cout << "]                                   " << endl;

            /*__________________________________________________________________________________________________
             | SUB CODE |               SUBJECT              |    DAY    |        TIME        |    PROFESSOR    |
             |==================================================================================================|*/
            SetConsoleTextAttribute(h, 9);
            cout << " __________________________________________________________________________________________________" << endl;
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << " SUB CODE ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "               SUBJECT              ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    DAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "        TIME        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    PROFESSOR    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|\n";
            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|" << endl;

            //|  CCS101  |     INTRODUCTION TO COMPUTING      | SATURDAY  |    1:00PM-4:00PM   |     SOLAYAO     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS101  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     INTRODUCTION TO COMPUTING      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SATURDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    1:00PM-4:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     SOLAYAO     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  CCS102  |    FUNDAMENTALS OF PROGRAMMING     | SATURDAY  |   7:00AM-10:00AM   |       TAN       |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS102  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    FUNDAMENTALS OF PROGRAMMING     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SATURDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   7:00AM-10:00AM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "       TAN       ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  CCS109  |   BUSINESS APPLICATION SOFTWARE    | TUESDAY   |    6:00AM-9:00PM   |      COCO       |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS109  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   BUSINESS APPLICATION SOFTWARE    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " TUESDAY   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    6:00AM-9:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      COCO       ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC001  |      UNDERSTANDING THE SELF        | SUNDAY    |   10:00AM-1:00PM   |     BESONIA     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC001  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      UNDERSTANDING THE SELF        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SUNDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-1:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     BESONIA     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC005  |      PURPOSIVE COMMMUNICATION      | WEDNESDAY |   10:00AM-1:00PM   |     ARSENUE     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC005  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      PURPOSIVE COMMMUNICATION      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " WEDNESDAY ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-1:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     ARSENUE     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC004  |  MATHEMATICS IN THE MODERN WORLD   | MONDAY    |    1:30PM-4:30PM   |      ROLAN      |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC004  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  MATHEMATICS IN THE MODERN WORLD   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    1:30PM-4:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      ROLAN      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  NSTP101 |            NSTP CWTS 1             | MONDAY    |                    |                 |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  NSTP101 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "            NSTP CWTS 1             ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "                    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "                 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //| PATHFit1 |    MOVEMENT COMPETENCY TRAINING    | MONDAY    |    1:00PM-3:00PM   |     VINLUAN     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " PATHFIT1 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    MOVEMENT COMPETENCY TRAINING    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    1:00PM-3:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     VINLUAN     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC002  | READINGS IN THE PHILIPPINE HISTORY | SATURDAY  |                    |                 |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC002  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " READINGS IN THE PHILIPPINE HISTORY ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SATURDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "                    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "                 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;
            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|\n" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            studentDashboard();
        }

        if (course == "IT" && section == "1A")
        {
            system("cls");
            SetConsoleTextAttribute(h, 1);
            cout << "                                [ ";
            SetConsoleTextAttribute(h, 12);
            cout << "SUBJECT AND SCHEDULE OF ";
            SetConsoleTextAttribute(h, 11);
            cout << "IT1A ";
            SetConsoleTextAttribute(h, 1);
            cout << "]                                   " << endl;
            /*__________________________________________________________________________________________________
             | SUB CODE |               SUBJECT              |    DAY    |        TIME        |    PROFESSOR    |
             |==================================================================================================|*/
            SetConsoleTextAttribute(h, 9);
            cout << " __________________________________________________________________________________________________" << endl;
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << " SUB CODE ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "               SUBJECT              ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    DAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "        TIME        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    PROFESSOR    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|\n";
            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|" << endl;

            //|  CCS101  |     INTRODUCTION TO COMPUTING      | WEDNESDAY |    4:00PM-7:00PM   |     ARRIENDA    |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS101  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     INTRODUCTION TO COMPUTING      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " WEDNESDAY ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    4:00PM-7:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     ARRIENDA    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  CCS102  |       COMPUTER PROGRAMMING 1       | SUNDAY    |   10:00AM-3:00PM   |    ALBAN, LA    |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS102  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "       COMPUTER PROGRAMMING 1       ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SUNDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-3:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    ALBAN, LA    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  CCS109  |   BUSINESS APPLICATION SOFTWARE    | FRIDAY    |    5:30PM-8:30PM   |     MACARAEG    |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS109  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   BUSINESS APPLICATION SOFTWARE    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " FRIDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    5:30PM-8:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     MACARAEG    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  PATHFIT1|     MOVEMENT COMPETENCY TRAINING   | THURSDAY  |   8:00AM-10:00AM   |     VINLUAN     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " PATHFIT1 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     MOVEMENT COMPETENCY TRAINING   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " THURSDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   8:00AM-10:00AM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     VINLUAN     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  NSTP101 |               NSTP1                | THURSDAY  |    5:30PM-8:30PM   |    DEL CARMEN   |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  NSTP101 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "               NSTP1                ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " THURSDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    5:30PM-8:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    DEL CARMEN   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC001  |      UNDERSTANDING THE SELF        | SATURDAY  |   7:00AM-10:00AM   |     BATALLA     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC001  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      UNDERSTANDING THE SELF        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SATURDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   7:00AM-10:00AM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     BATALLA     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC002  | READINGS IN THE PHILIPPINE HISTORY | MONDAY    |    1:30PM-4:30PM   | ENRIQUEZ, AARON |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC002  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " READINGS IN THE PHILIPPINE HISTORY ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    1:30PM-4:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " ENRIQUEZ, AARON ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC004  |  MATHEMATICS OF THE MODERN WORLD   | TUESDAY   |    1:30PM-4:30PM   |     GERONIMO    |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC004  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  MATHEMATICS OF THE MODERN WORLD   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " TUESDAY   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    1:30PM-4:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     GERONIMO    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;
            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|\n" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            studentDashboard();
        }

        if (course == "IT" && section == "1B")
        {
            system("cls");
            SetConsoleTextAttribute(h, 1);
            cout << "         [ ";
            SetConsoleTextAttribute(h, 12);
            cout << "SUBJECT AND SCHEDULE OF ";
            SetConsoleTextAttribute(h, 11);
            cout << "IT1B ";
            SetConsoleTextAttribute(h, 1);
            cout << "]\n                                   " << endl;

            SetConsoleTextAttribute(h, 9);
            cout << "                         Sike~.\n" << endl;
            cout << "                            ,--.\n";
            cout << "                           {    }\n";
            cout << "                           K,   }\n";
            cout << "                          /  ~Y`\n";
            cout << "                     ,   /    /\n";
            cout << "                     {_'-K.__/\n";
            cout << "                      `/-.__L._\n";
            cout << "                      /  ' /`}\n";
            cout << "                     /  ' /\n";
            cout << "             ____   /  ' /\n";
            cout << "      ,-'~~~~    ~~/  ' /_\n";
            cout << "    ,'             ``~~~  ',\n";
            cout << "   (                        Y\n";
            cout << "  {                         I\n";
            cout << " {      -                    `,\n";
            cout << " |       ',                   )\n";
            cout << " |        |   ,..__      __. Y\n";
            cout << " |    .,_./  Y ' / ^Y   J   )|\n";
            cout << " \\           |' /   |   |   ||\n";
            cout << "  \\          L_/    . _ (_,.'(\n";
            cout << "   \\,   ,      ^^''  / |      )\n";
            cout << "     \\_  \\          /,L]     /\n";
            cout << "       '-_~-,       ` `   ./`\n";
            cout << "          `'{_            )\n";
            cout << "              ^^\\..___,.--`  \n";
            cout << "=========================================" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            studentDashboard();
        }

        if (course == "IS" && section == "1A")
        {
            system("cls");
            SetConsoleTextAttribute(h, 1);
            cout << "                                [ ";
            SetConsoleTextAttribute(h, 12);
            cout << "SUBJECT AND SCHEDULE OF ";
            SetConsoleTextAttribute(h, 11);
            cout << "IS1A ";
            SetConsoleTextAttribute(h, 1);
            cout << "]                                   " << endl;
            /*__________________________________________________________________________________________________
             | SUB CODE |               SUBJECT              |    DAY    |        TIME        |    PROFESSOR    |
             |==================================================================================================|*/
            SetConsoleTextAttribute(h, 9);
            cout << " __________________________________________________________________________________________________" << endl;
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << " SUB CODE ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "               SUBJECT              ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    DAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "        TIME        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    PROFESSOR    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|\n";
            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|" << endl;

            //|  CCS101   |     INTRODUCTION TO COMPUTING      | SATURDAY  |   7:00AM-10:00AM   |      CRUZ       |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS101   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     INTRODUCTION TO COMPUTING      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SATURDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   7:00AM-10:00AM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      CRUZ       ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  CCS102   |       COMPUTER PROGRAMMING 1       | FRIDAY    |    1:00PM-6:00PM   |      JOBLE      |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS102   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "       COMPUTER PROGRAMMING 1       ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " FRIDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    1:00PM-6:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      JOBLE      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  CCS109   |   BUSINESS APPLICATION SOFTWARE    | FRIDAY    |   10:00AM-1:00PM   |     GARROTE     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS109   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   BUSINESS APPLICATION SOFTWARE    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " FRIDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-1:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     GARROTE     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //| PATHIFIT1 |     MOVEMENT COMPETENCY TRAINING   | WEDNESDAY |   8:00AM-10:00PM   |     VINLUAN     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " PATHIFIT1 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     MOVEMENT COMPETENCY TRAINING   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " WEDNESDAY ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   8:00AM-10:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     VINLUAN     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  NSTP101 |            NSTP CWTS 1             | MONDAY    |    4:30PM-7:30PM   |    DEL CARMEN   |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  NSTP101 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "            NSTP CWTS 1             ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    4:30PM-7:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    DEL CARMEN   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC 001  |      UNDERSTANDING THE SELF        | SATURDAY  |   10:00AM-1:00PM   |     BATALLA     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC 001  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      UNDERSTANDING THE SELF        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SATURDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-1:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     BATALLA     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC 002  | READINGS IN THE PHILIPPINE HISTORY | SUNDAY    |   10:00AM-1:00PM   | ENRIQUEZ, AARON |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC 002  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " READINGS IN THE PHILIPPINE HISTORY ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SUNDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-1:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " ENRIQUEZ, AARON ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC 003  |         CONTEMPORARY WORLD         | MONDAY    |   10:00AM-1:00PM   |      LUAT       |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC 003  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "         CONTEMPORARY WORLD         ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-1:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      LUAT       ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|\n" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            studentDashboard();
        }

        if (course == "EMC" && section == "1A")
        {
            system("cls");
            SetConsoleTextAttribute(h, 1);
            cout << "                                [ ";
            SetConsoleTextAttribute(h, 12);
            cout << "SUBJECT AND SCHEDULE OF ";
            SetConsoleTextAttribute(h, 11);
            cout << "EMC1A ";
            SetConsoleTextAttribute(h, 1);
            cout << "]                                   " << endl;
            /*__________________________________________________________________________________________________
             | SUB CODE |               SUBJECT              |    DAY    |        TIME        |    PROFESSOR    |
             |==================================================================================================|*/
            SetConsoleTextAttribute(h, 9);
            cout << " __________________________________________________________________________________________________" << endl;
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << " SUB CODE ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "               SUBJECT              ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    DAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "        TIME        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 11);
            cout << "    PROFESSOR    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|\n";
            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|" << endl;

            //|  CCS101  |     INTRODUCTION TO COMPUTING      | FRIDAY    |   7:00AM-10:00AM   |     BARRIOS     |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS101  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     INTRODUCTION TO COMPUTING      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " FRIDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   7:00AM-10:00AM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     BARRIOS     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  CCS102  |       COMPUTER PROGRAMMING 1       | THURSDAY  |    1:00PM-6:00PM   |    VILLAFUERTE  |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  CCS102  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "       COMPUTER PROGRAMMING 1       ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " THURSDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    1:00PM-6:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    VILLAFUERTE  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  EMC 101 |             DRAFTING               | THURSDAY  |   7:00AM-10:00AM   |     NIEVAS      |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  EMC 101 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "             DRAFTING               ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " THURSDAY  ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   7:00AM-10:00AM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     NIEVAS      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //| GEC 001 | UNDERSTANDING THE SELF | SUNDAY | 7:00AM - 10 : 00AM | BATALLA |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC 001 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "      UNDERSTANDING THE SELF        ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " SUNDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   7:00AM-10:00AM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     BATALLA     ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  GEC 004 |  MATHEMATICS IN THE MODERN WORLD   | FRIDAY    |   10:00AM-1:00PM   |     GERONIMO    |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  GEC 004 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  MATHEMATICS IN THE MODERN WORLD   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " FRIDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "   10:00AM-1:00PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     GERONIMO    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|E1PATHFIT |    MOVEMENT COMPETENCY TRAINING    | MONDAY    |     8:00-10:00AM   |     RIVERA      |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " 1PATHFIT ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    MOVEMENT COMPETENCY TRAINING    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     8:00-10:00AM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "     RIVERA      ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            //|  NSTP101 |            NSTP CWTS 1             | MONDAY    |    4:30PM-7:30PM   |    DEL CARMEN   |
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "  NSTP101 ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "            NSTP CWTS 1             ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << " MONDAY    ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    4:30PM-7:30PM   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|";
            SetConsoleTextAttribute(h, 14);
            cout << "    DEL CARMEN   ";
            SetConsoleTextAttribute(h, 9);
            cout << "|" << endl;

            SetConsoleTextAttribute(h, 9);
            cout << "|==================================================================================================|\n" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            studentDashboard();
        }
    }

    if (choice == 3)
    {
        fstream viewGrades;
        viewGrades.open("Grades/" + course + section + "-" + studentNumber + ".txt");

        if (viewGrades.fail())
        {
            SetConsoleTextAttribute(h, 12);
            cout << "There is no such record.\n" << endl;
            SetConsoleTextAttribute(h, 11);
            system("pause");
            system("cls");
            studentDashboard();
        }

        else
        {
            SetConsoleTextAttribute(h, 1);
            cout << "\t" << "   [ ";
            SetConsoleTextAttribute(h, 12);
            cout << "STUDENT GRADES ";
            SetConsoleTextAttribute(h, 1);
            cout << "]\n";

            fstream name;
            name.open("Student/" + course + section + "-" + studentNumber + ".txt"); //read natin yung ieedit na file
            string line1, line2;
            int file_line1 = 0;
            int file_line2 = 0;

            while (!name.eof())
            {
                file_line1++;
                getline(name, line1);
                if (file_line1 == 1)  break;
            }
            name.close();

            string fname = "Name:";
            int found = -1;
            do
            {
                found = line1.find(fname, found + 1);
                if (found != -1)
                {
                    line1 = line1.substr(0, found) + line1.substr(found + fname.length());
                }
            } while (found != 0);

            fstream lname;
            lname.open("Student/" + course + section + "-" + studentNumber + ".txt"); //read natin yung ieedit na file

            while (!lname.eof())
            {
                file_line2++;
                getline(lname, line2);
                if (file_line2 == 2) break;
            }
            lname.close();

            string last_name = "Last Name:";
            int found2 = -1;
            do
            {
                found2 = line2.find(last_name, found2 + 1);
                if (found2 != -1)
                {
                    line2 = line2.substr(0, found2) + line2.substr(found2 + last_name.length());
                }
            } while (found2 != 0);


            SetConsoleTextAttribute(h, 9);
            cout << "\t" << "\n      Grades of";
            SetConsoleTextAttribute(h, 11);
            cout << line1 << line2 << endl;

            SetConsoleTextAttribute(h, 9);
            cout << "__________________________________________" << endl;
            SetConsoleTextAttribute(h, 14);
            cout << "            Subjects                | GWA  " << endl;
            SetConsoleTextAttribute(h, 9);
            cout << "==========================================" << endl;
            string line;
            SetConsoleTextAttribute(h, 14);
            while (getline(viewGrades, line))
            {
                cout << line << endl;
            }
            SetConsoleTextAttribute(h, 9);
            cout << "==========================================" << endl;
        }
        viewGrades.close();
        cout << endl;
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        studentDashboard();
    }

    if (choice == 4)
    {
        system("cls");
        outloading();
        main();
    }

}

/*Support Panel*/
void Support()
{

    int choice;
    system("cls");
    SetConsoleTextAttribute(h, 9);
    cout << "     [ ";
    SetConsoleTextAttribute(h, 14);
    cout << "SUPPORT PANEL";
    SetConsoleTextAttribute(h, 9);
    cout << " ]\n\n";

    //Support Output
    {

        //[1] PROGRAM SUPPORT
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "1";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " PROGRAM SUPPORT\n";

        //[2] PROGRAM F.A.Q.
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "2";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " PROGRAM F.A.Q.\n";

        //[3] Exit
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "3";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Exit\n";
        cout << "\nEnter you choice: ";
        SetConsoleTextAttribute(h, 11);
        cin >> choice;
        cout << endl;
    }

    switch (choice)
    {
    case 1: ProgramSupport(); system("pause");  break;
    case 2: FAQSupport(); system("pause");  break;
    case 3: main(); system("pause"); break;
    default:
        SetConsoleTextAttribute(h, 1);
        cout << "\t[ ";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 14);
        cout << "Invalid input";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 1);
        cout << " ]\n" << endl;
        SetConsoleTextAttribute(h, 14);
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        Support();
        break;
    }
    /*
    [ SUPPORT PANEL ]
    1. PROGRAM SUPPORT
    2. PROGRAM F.A.Q.

    choice code needed
    */
}

//Program Support
void ProgramSupport()
{
    int choice;

    system("cls");
    SetConsoleTextAttribute(h, 9);
    cout << "\t\t[ ";
    SetConsoleTextAttribute(h, 14);
    cout << "PROGRAM SUPPORT";
    SetConsoleTextAttribute(h, 9);
    cout << " ]\n\n";

    //Program Support Panel Output
    {
        //[1] What should I do if I get banned out of Admin Access?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "1";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " What should I do if I get banned out of Admin Access?\n";

        //[2] What should I do if the loading stopped during the program? 
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "2";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " What should I do if the loading stopped during the program?\n";

        //[3] What should I do if the program doesn�t run?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "3";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " What should I do if the program does not run?\n";

        //[4] What should I do if my grades/ schedule  doesn�t show up?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "4";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " What should I do if my grades/ schedule  doesn�t show up?\n";

        //[5] What should i do if my program freezes?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "5";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " What should i do if my program freezes?\n";

        //[6] How can I gain access if I was banned from being an admin?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "6";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " How can I gain access if I was banned from being an admin?\n";

        //[7] I deleted the wrong account, how can I bring it back?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "7";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " I deleted the wrong account, how can I bring it back?\n";

        //[8] Can I change the student number if I inserted the wrong student ID number?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "8";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Can I change the student number if I inserted the wrong student ID number?\n";
        //[9] Return 
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "9";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Return\n";
    }
    cout << "\nEnter you choice: ";
    SetConsoleTextAttribute(h, 11);
    cin >> choice;
    cout << endl;

    //Answers Output
    switch (choice)
    {
    case 1:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t      [";
        SetConsoleTextAttribute(h, 14);
        cout << " What should I do if I get banned out of Admin Access? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t\t  Restarting the program will reset the ban and there you can access it again.";
        cout << "\n\t\t\t   Authentication is not added yet as it only use 1 password\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";
        SetConsoleTextAttribute(h, 11);
        system("pause");
        ProgramSupport();
    }

    case 2:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t [";
        SetConsoleTextAttribute(h, 14);
        cout << " What should I do if the loading stopped during the program? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t\t\t Animation stops when the user clicks the mouse on the CMD Prompt.";
        cout << "\n\t\t   When clicked, the program assumes that you are going to write/ type on the";
        cout << "\n\t\t\t             CMD prompt that causes the program to stop. ";
        cout << "\n\t\t\t          Just press any key from the keyboard to continue. \n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";
        SetConsoleTextAttribute(h, 11);
        system("pause");
        ProgramSupport();
    }

    case 3:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t     [";
        SetConsoleTextAttribute(h, 14);
        cout << " What should I do if the program doesn't run? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t   There are 2 possibilities, either the code has some problems or there is a missing folder";
        cout << "\n\t                    Check the F.F. folders needed to be with the code: ";
        cout << "\n\t                           * Accounts  ";
        cout << "\n\t                           * Grades  ";
        cout << "\n\t                           * Masterlist  ";
        cout << "\n\t                           * Student  \n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";
        SetConsoleTextAttribute(h, 11);
        system("pause");
        ProgramSupport();
    }

    case 4:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t  [";
        SetConsoleTextAttribute(h, 14);
        cout << " What should I do if my grades/ schedule does not show up? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t       For the grades not to show up means the grades is not added yet to your account. ";
        cout << "\n\t         - The solution is to ask the admin to add the grades on your account\n";
        cout << "\n\t    For the schedule not to show up means there might be no schedule or it's not added yet.";
        SetConsoleTextAttribute(h, 12);
        cout << "\n\n\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";
        SetConsoleTextAttribute(h, 11);
        system("pause");
        ProgramSupport();
    }

    case 5:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t  [";
        SetConsoleTextAttribute(h, 14);
        cout << " What should I do if my grades/ schedule does not show up? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t                   Restart the program. It will give a good refresh. :D";
        SetConsoleTextAttribute(h, 12);
        cout << "\n\n\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";

        SetConsoleTextAttribute(h, 11);
        system("pause");
        ProgramSupport();
    }

    case 6:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t  [";
        SetConsoleTextAttribute(h, 14);
        cout << " How can I gain access if I was banned from being an admin? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t                        Restart the program, it will reset the ban.";
        SetConsoleTextAttribute(h, 12);
        cout << "\n\n\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";

        SetConsoleTextAttribute(h, 11);
        system("pause");
        ProgramSupport();
    }

    case 7:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t    [";
        SetConsoleTextAttribute(h, 14);
        cout << " I deleted the wrong account, how can I bring it back? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t             Re-add both the wrong and the correct account on 'Add Student Records'. ";
        SetConsoleTextAttribute(h, 12);
        cout << "\n\n\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";

        SetConsoleTextAttribute(h, 11);
        system("pause");
        ProgramSupport();
    }

    case 8:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t  [";
        SetConsoleTextAttribute(h, 14);
        cout << " Can I change the student number if I inserted the wrong student ID number? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t                      Once a student number is added, it can't be changed. ";
        cout << "\n\t                   Delete the wrong student ID number and add the correct one. ";
        SetConsoleTextAttribute(h, 12);
        cout << "\n\n\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";

        SetConsoleTextAttribute(h, 11);
        system("pause");
        ProgramSupport();
    }

    case 9: Support(); system("pause"); break;

    default:
        SetConsoleTextAttribute(h, 1);
        cout << "\t[ ";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 14);
        cout << "Invalid input";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 1);
        cout << " ]\n" << endl;
        SetConsoleTextAttribute(h, 14);
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        ProgramSupport();
        break;
    }


    //to be continues
    /*


    [ Support ]
[1] What should I do if I get banned out of Admin Access?
     -Restarting the program will reset the ban and there you can access it again.
      Authentication is not added yet as it only use 1 password

[2] What should I do if the loading stopped during the program?
     -Animations stops when a user click the mouse on the CMD Prompt, when clicked means you are
      to write something one the CMD Prompt that is why it stops. Just press any key from the keyboard
      to continue

[3] What should I do if the program doesn�t run?
     -Check the F.F. folders needed to be with the code
     * Grades
     * Accounts
     * Masterlist
     * Student

[4] What should I do if my grades/ schedule  doesn�t show up?
     -Ask the admin to add the grades on your account
     -If there are no schedule means its not added yet

[5] What should i do if my program freezes?
     -Restart the program. It will give a good refresh.

[6] How can I gain access if I was banned from being an admin?
     -Restart the program, it will reset the ban.

[7] I deleted the wrong account, how can I bring it back?
     -Re add it on "Add Student Records".

[8] Can I change the student number if I inserted the wrong student ID number?
     -Once student number is added, it cant be change. Delete the wrong student ID number
      and add the correct one.






    */
}

//FAQ Support
void FAQSupport()
{
    int choice;
    system("cls");
    SetConsoleTextAttribute(h, 9);
    cout << "\t\t[ ";
    SetConsoleTextAttribute(h, 14);
    cout << "F.A.Q SUPPORT";
    SetConsoleTextAttribute(h, 9);
    cout << " ]\n\n";

    //FAQ Suppport Panel Output
    {
        //[1] Does this program only cover the whole Computer Studies Department?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "1";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Does this program only cover the whole Computer Studies Department?\n";

        //[2] What’s the main purpose of the program?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "2";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " What's the main purpose of the program?\n";

        //[3] What programming language did you use to make the program?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "3";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " What programming language did you use to make the program?\n";

        //[4] Are there any requirements (third party, windows files etc.) that you need to install to run the program?

        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "4";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Are there any requirements (third party, windows files etc.) that you need to install to run the program?\n";

        //[5] Does the program save’s my login info?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "5";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Does the program save's my login info?\n";

        //[6] Can anyone enter their own grades in the program?
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "6";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Can anyone enter their own grades in the program?\n";

        //[7] Return 
        SetConsoleTextAttribute(h, 9);
        cout << "[";
        SetConsoleTextAttribute(h, 10);
        cout << "7";
        SetConsoleTextAttribute(h, 9);
        cout << "]";
        SetConsoleTextAttribute(h, 14);
        cout << " Return\n";
    }
    cout << "\nEnter you choice: ";
    SetConsoleTextAttribute(h, 11);
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t     [";
        SetConsoleTextAttribute(h, 14);
        cout << " Does this program only cover the whole Computer Studies Department? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t        Yes, in fact, the entire Computer Studies Department is covered by this program.\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";
        SetConsoleTextAttribute(h, 11);
        system("pause");
        FAQSupport();
    }

    case 2:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t     [";
        SetConsoleTextAttribute(h, 14);
        cout << " What's the main purpose of the program? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t   The program's major goal is to establish editable, expandable student information records. ";
        cout << "\n\t         Users can view their class schedule, grades, and other information easily here. \n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";
        SetConsoleTextAttribute(h, 11);
        system("pause");
        FAQSupport();
    }

    case 3:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t     [";
        SetConsoleTextAttribute(h, 14);
        cout << " What programming language did you use to make the program? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t                           C++ was the programming language we used.   \n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";
        SetConsoleTextAttribute(h, 11);
        system("pause");
        FAQSupport();
    }

    case 4:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t[";
        SetConsoleTextAttribute(h, 14);
        cout << " Are there any requirements (third party, windows files etc.) ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n";
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t        [";
        SetConsoleTextAttribute(h, 14);
        cout << " that you need to install to run the program? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t      The program is run through IDE Softwares (Visual Studio, Code Blocks, Dev C++ etc.)";
        cout << "\n\t      But there are also other requirements to make the program work along with the code. ";
        cout << "\n\t      You need to create a folder with the following names to make it work functionally: \n";
        cout << "\n\t                                     * Grades      * Masterlist ";
        cout << "\n\t                                     * Accounts    * Student     ";
        SetConsoleTextAttribute(h, 12);
        cout << "\n\n\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";
        SetConsoleTextAttribute(h, 11);
        system("pause");
        FAQSupport();
    }

    case 5:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t\t   [";
        SetConsoleTextAttribute(h, 14);
        cout << " Does the program save's my login info? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t                           Yes, it does save your login information.";
        SetConsoleTextAttribute(h, 12);
        cout << "\n\n\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";

        SetConsoleTextAttribute(h, 11);
        system("pause");
        FAQSupport();
    }

    case 6:
    {
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "\t\t\t      [";
        SetConsoleTextAttribute(h, 14);
        cout << " Can anyone enter their own grades in the program? ";
        SetConsoleTextAttribute(h, 1);
        cout << "]\n\n";
        SetConsoleTextAttribute(h, 12);
        cout << "\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n";
        SetConsoleTextAttribute(h, 2);
        cout << "\n\t              No, only the admin has the ability to enter grades into the program.";
        SetConsoleTextAttribute(h, 12);
        cout << "\n\n\t _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____\n";
        cout << "\t/____//____//____//____//____//____//____//____//____//____//____//____//____//____//____//____/\n\n\t\t\t\t\t";

        SetConsoleTextAttribute(h, 11);
        system("pause");
        FAQSupport();
    }

    case 7: Support(); system("pause"); break;

    default:
        SetConsoleTextAttribute(h, 1);
        cout << "\t[ ";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 14);
        cout << "Invalid input";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 1);
        cout << " ]\n" << endl;
        SetConsoleTextAttribute(h, 14);
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        SetConsoleTextAttribute(h, 11);
        system("pause");
        system("cls");
        ProgramSupport();
        break;
    }
}

//Back Functions
/*Main Back*/
void mback()
{
    char back;
    SetConsoleTextAttribute(h, 14);
    cout << "Press ";
    SetConsoleTextAttribute(h, 1);
    cout << "[";
    SetConsoleTextAttribute(h, 11);
    cout << "Enter";
    SetConsoleTextAttribute(h, 1);
    cout << "] ";
    SetConsoleTextAttribute(h, 14);
    cout << "to ";
    SetConsoleTextAttribute(h, 6);
    cout << "Continue" << endl;

    SetConsoleTextAttribute(h, 14);
    cout << "Press ";
    SetConsoleTextAttribute(h, 1);
    cout << "[";
    SetConsoleTextAttribute(h, 7);
    cout << "Esc";
    SetConsoleTextAttribute(h, 1);
    cout << "] ";
    SetConsoleTextAttribute(h, 14);
    cout << "to ";
    SetConsoleTextAttribute(h, 2);
    cout << "Return" << endl;

    back = _getch();
    switch (back)
    {
    case 27://Return/Esc Key
        system("cls");
        main();
        break;
    case 13://Enter Key
        system("cls");
        break;
    default:
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "  [ ";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 14);
        cout << "Invalid input";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 1);
        cout << " ]\n" << endl;
        mback();
        break;
    }
}

/*Admin Back*/
void aback()
{
    char back;
    SetConsoleTextAttribute(h, 14);
    cout << "Press ";
    SetConsoleTextAttribute(h, 1);
    cout << "[";
    SetConsoleTextAttribute(h, 11);
    cout << "Enter";
    SetConsoleTextAttribute(h, 1);
    cout << "] ";
    SetConsoleTextAttribute(h, 14);
    cout << "to ";
    SetConsoleTextAttribute(h, 6);
    cout << "Continue" << endl;

    SetConsoleTextAttribute(h, 14);
    cout << "Press ";
    SetConsoleTextAttribute(h, 1);
    cout << "[";
    SetConsoleTextAttribute(h, 7);
    cout << "Esc";
    SetConsoleTextAttribute(h, 1);
    cout << "] ";
    SetConsoleTextAttribute(h, 14);
    cout << "to ";
    SetConsoleTextAttribute(h, 2);
    cout << "Return" << endl;

    back = _getch();
    switch (back)
    {
    case 27://Return/Esc Key
        system("cls");
        admin();
        break;
    case 13://Enter Key
        system("cls");
        break;
    default:
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "  [ ";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 14);
        cout << "Invalid input";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 1);
        cout << " ]\n" << endl;
        aback();
        break;
    }
}

/*Student Back*/
void sback()
{
    char back;
    SetConsoleTextAttribute(h, 14);
    cout << "Press ";
    SetConsoleTextAttribute(h, 1);
    cout << "[";
    SetConsoleTextAttribute(h, 11);
    cout << "Enter";
    SetConsoleTextAttribute(h, 1);
    cout << "] ";
    SetConsoleTextAttribute(h, 14);
    cout << "to ";
    SetConsoleTextAttribute(h, 6);
    cout << "Continue" << endl;

    SetConsoleTextAttribute(h, 14);
    cout << "Press ";
    SetConsoleTextAttribute(h, 1);
    cout << "[";
    SetConsoleTextAttribute(h, 7);
    cout << "Esc";
    SetConsoleTextAttribute(h, 1);
    cout << "] ";
    SetConsoleTextAttribute(h, 14);
    cout << "to ";
    SetConsoleTextAttribute(h, 2);
    cout << "Return" << endl;
    back = _getch();
    switch (back)
    {
    case 27://Return/Esc Key
        system("cls");
        main();
        break;
    case 13://Enter Key
        system("cls");
        break;
    default:
        system("cls");
        SetConsoleTextAttribute(h, 1);
        cout << "  [ ";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 14);
        cout << "Invalid input";
        SetConsoleTextAttribute(h, 2);
        cout << "!!";
        SetConsoleTextAttribute(h, 1);
        cout << " ]\n" << endl;
        sback();
        break;
    }
}

//Loading Functions
/*Log-in Loading */
void inloading()
{
    system("cls");
    for (int i = 1; i <= 50; i++)
    {
        system("cls");
        SetConsoleTextAttribute(h, 11);
        cout << "\n\n\n\t                 Loading ";
        SetConsoleTextAttribute(h, 2);
        cout << 2 * i << "%\n\t";
        SetConsoleTextAttribute(h, 14);
        for (int j = 1; j <= i; j++)
            cout << "\xB3";
        SetConsoleTextAttribute(h, 9);
        if (i > 1 && i < 20)
            cout << "\n\n\t\t     Checking local data... ";
        else if (i > 20 && i < 40)
            cout << "\n\n\t\t     Preparing to log-in... ";
        else if (i > 40 && i < 50)//50 only to access else cout
            cout << "\n\n\t\t\tAccessing...";

        else
            cout << "\n\n       [\xfb]Logged in Successfully, Press any key to continue.";
        Sleep(150 - i * 3);
    }
    _getch();

}

/*Log out Loading */
void outloading()
{
    system("cls");
    for (int i = 1; i <= 50; i++)
    {
        system("cls");
        SetConsoleTextAttribute(h, 11);
        cout << "\n\n\n\t                 Loading ";
        SetConsoleTextAttribute(h, 2);
        cout << 2 * i << "%\n\t";
        SetConsoleTextAttribute(h, 14);
        for (int j = 1; j <= i; j++)
            cout << "\xB3";
        SetConsoleTextAttribute(h, 9);
        if (i > 1 && i < 2)
            cout << "";

        else if (i > 2 && i < 50)

            cout << "\n\n\t\t\tLogging out... ";
        else
            cout << "\n\n       [\xfb]Logged out Successfully, Press any key to continue.";
        Sleep(150 - i * 3);
    }
    _getch();

}

/* Done on Coloring :
All things completed
Support Feature

     [OBJECTIVES]


     [BUG FIXES]
-Vector Library Bug on Delete Record

     [IMPORTANT]
FOLDERS NEEDED TO RUN THE PROGRAM:
 (Folder along with the CPP code)
 -Accounts
 -Grades
 -Masterlist
 -Student
*/



