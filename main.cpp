#include <iostream>
#include <string.h>

using namespace std;
int n_sub = 0, n_teach = 0, n_stud = 0;
class Teacher
{
public:
    int tId[20];
    string teachName[20];
    string teachEdu[20];
    string tUser[20];
    string tPass[20];

    void showTeacher()
    {
        cout << "Teachers Records Showing.." << endl
             << endl;
        for (int j = 0; j < n_teach; j++)
        {
            if (tId[j] != 0)
            {
                cout << "Teacher " << j + 1 << "." << endl;
                cout << "Unique ID: " << tId[j] << endl;
                cout << "Username: " << tUser[j] << endl;
                cout << "Password: " << tPass[j] << endl
                     << endl;
            }
        }
    }

    int teacherMenu()
    {
        int ch5;

        cout << "1.Add Details" << endl;
        cout << "2.Subject Selection" << endl;
        cout << "3.Add Subject Marks" << endl;
        cout << "4.Update Data" << endl;
        cout << "5.Update Student Data" << endl;
        cout << "6.Show" << endl;
        cout << "0.Exit Teacher's Menu" << endl;
        cout << "Enter Your Choice : ";
        cin >> ch5;
        return ch5;
    }


    void teacherLogIn()
    {

        string tUser3;
        string tPass3;
        cout << "Enter Username : ";
        cin >> tUser3;
        cout << "Enter Password : ";
        cin >> tPass3;
         for (int j = 0; j < n_teach; j++)
            {
          if (tUser3 == tUser[j] && tPass3 == tPass[j])
                {
                cout << "\nWelcome Teacher " << tUser[j] << "." << endl
                     << endl;
                }
            }
    }

    void teachDetails()
    {
        cout << "Your Name      : ";
        cin>>teachName[20];
        cout << "Your Education : ";
        cin>>teachEdu[20];

        cout<<"Teacher Details Saved Successfully..";

        cout << "Name      : "<<teachName[20]<<endl;
        cout << "Education : "<<teachEdu[20]<<endl;

    }
};


class Student
{
public:
    int sId[20];
    string studName[20];
    string sUser[20];
    string sPass[20];

    void showStudent()
    {
        cout << "Students Records Showing.." << endl
             << endl;
        for (int i = 0; i < n_stud; i++)
        {
            if (sId[i] != 0)
            {
                cout << "Unique ID: " << sId[i] << endl;
                cout << "Username: " << sUser[i] << endl;
                cout << "Password: " << sPass[i] << endl
                     << endl;
            }
        }
    }

    int studMenu()
    {
        int ch6;

        cout << "1.Add Details" << endl;
        cout << "2.Result" << endl;
        cout << "3.Update Details" << endl;
        cout << "0.Exit Student's Menu" << endl;

        cout << "Enter Your Choice";
        cin >> ch6;
        return ch6;
    }

    void studentLogIn()
    {
        string sUser3;
        string sPass3;
        cout << "Enter Username : ";
        cin >> sUser3;
        cout << "Enter Password : ";
        cin >> sPass3;
        for (int i = 0; i < n_stud; i++)
        {
            if (sUser3 == sUser[i] && sPass3 == sPass[i])
            {
                cout << "\nWelcome Student " << sUser[i] << "." << endl
                     << endl;
            }
        }
    }
};

class Selection
{
public:
    int ch;
    int menu()
    {
        cout << "0.Exit Student's System" << endl;
        cout << "1.Administrator" << endl;
        cout << "2.Teacher" << endl;
        cout << "3.Student" << endl;

        cout << "Enter Your Post: ";
        cin >> ch;
        return ch;
    }
};

class Admin
{
public:
    string adUserName;
    string adUserPassword;
    string subID[10], subName[10], up_sub;

    void adminLogIn()
    {
    log:
        cout << "Enter Your Username: ";
        cin >> adUserName;
        cout << "Enter Your Password: ";
        cin >> adUserPassword;

        if (adUserName == "Admin" && adUserPassword == "abc")
        {
            cout << "Welcome Admin!\n";
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n"
                 << '\n';
            goto log;
        }
    }

    int adminMenu()
    {
        int ch3;

        cout << "\n0.Exit Administrator's System" << endl;
        cout << "1.Add Sujects" << endl;
        cout << "2.Add Teachers Data" << endl;
        cout << "3.Add Students Data" << endl;
        cout << "4.Update Records" << endl;
        cout << "5.Delete Records" << endl;
        cout << "6.Show Records" << endl;
        cout << "7.Approval" << endl;

        cout << "Enter Option: ";
        cin >> ch3;

        return ch3;
    }
 
    void addSubject()
    {
        cout << "\nEnter Number of Subjects to be Added: ";
        cin >> n_sub;

        for (int k = 0; k < n_sub; k++)
        {
            cout << "Subject " << k + 1 << "." << endl;
            cout << "Enter Subject Unique ID: ";
            cin >> subID[k];
            cout << "Enter Subject Name     : ";
            cin >> subName[k];
        }
        cout << "Subjects Data Successfully Saved.." << endl;
    }

    void showSubject()
    {
        cout << "Subjects Records Showing.." << endl;
        for (int k = 0; k < n_sub; k++)
        {
            if (subID[k] != "")
            {
                cout << "\nSubject " << k + 1 << "." << endl;
                cout << "Subject Id    : " << subID[k] << endl;
                cout << "Subject Name  : " << subName[k] << endl
                     << endl;
            }
        }
    }

    int adminUpdateMenu()
    {
        int ch1;
        cout << "\nWhose Data You Want To Update?" << endl
             << endl;
        cout << "0.Exit Update Menu" << endl;
        cout << "1.Subject's Data" << endl;
        cout << "2.Teacher's Data" << endl;
        cout << "3.Student's Data" << endl;

        cout << "Enter Your Choice: ";
        cin >> ch1;

        return ch1;
    }

    void updateSubject()
    {
        cout << "\nEnter Subject Unique ID : ";
        cin >> up_sub;
        for (int k = 0; k < n_sub; k++)
        {
            if (up_sub == subID[k])
            {
                cout << "\nYour Previous Subject Name Was " << subName[k] << endl;
                cout << "Enter New Name For Subject : ";
                cin >> subName[k];
                cout << "\n Subject Name Updated.." << endl;
            }
        }
    }
  
    int adminShowMenu()
    {
        int ch4;
        cout << "\nWhose Data You Want To View" << endl;
        cout << "0.Exit Show Menu" << endl;
        cout << "1.Subject's Data" << endl;
        cout << "2.Teacher's Data" << endl;
        cout << "3.Student's Data" << endl
             << endl;

        cout << "Enter Your Choice : ";
        cin >> ch4;
        return ch4;
    }

    int adminDeleteMenu()
    {
        int ch5;
        cout << "\nWhose Data You Want To Delete?" << endl;
        cout << "0.Exit Delete Menu" << endl;
        cout << "1.Subject's Data" << endl;
        cout << "2.Teacher's Data" << endl;
        cout << "3.Student's Data" << endl
             << endl;

        cout << "Enter Your Choice : ";
        cin >> ch5;
        return ch5;
    }
    void deleteSubject()
    {
        cout << "\nEnter Subject Unique ID : ";
        cin >> up_sub;
        for (int k = 0; k < n_sub; k++)
        {
            if (up_sub == subID[k])
            {
                subID[k] = "";
                subName[k] = "";
            }
        }
        cout << "Subject Deleted Successfully.." << endl
             << endl;
    }

    Teacher createTeacher(Teacher t1)
    {
        cout << "\nEnter Number of Teachers to be Added: ";
        cin >> n_teach;

        for (int j = 0; j < n_teach; j++)
        {
            cout << "Teacher " << j + 1 << "." << endl;
            cout << "Unique ID: ";
            cin >> t1.tId[j];
            cout << "Username : ";
            cin >> t1.tUser[j];
            cout << "Password : ";
            cin >> t1.tPass[j];
        }
        cout << "Teachers Data Successfully Saved.." << endl;
        return t1;
    }
    int userOrPass()
    {
        int ch2;
        cout << "What Do You Want To Update?" << endl;
        cout << "0.Exit " << endl;
        cout << "1.Username " << endl;
        cout << "2.Password " << endl;
        cout << "Enter Choice: ";
        cin >> ch2;
        return ch2;
    }

    Teacher UpdateTeacher(Teacher t1)
    {
        int up1_teach[10];
        int up2_teach[10];

        switch (userOrPass())
        {
        case 1:
        {

            cout << "\nEnter Teacher Unique ID : ";
            cin >> up1_teach[10];
            for (int j = 0; j < n_teach; j++)
            {
                if (up1_teach[10] == t1.tId[j])
                {
                    cout << "Your Previous Username Was " << t1.tUser[j] << endl;
                    cout << "Enter New Username for Teacher : ";
                    cin >> t1.tUser[j];
                }
            }
            cout << "Teacher Username Successfully Updated.." << endl;
        }
        break;
        case 2:
        {
            cout << "\nEnter Teacher Unique ID : ";
            cin >> up2_teach[10];
            for (int j = 0; j < n_teach; j++)
            {
                if (up2_teach[10] == t1.tId[j])
                {
                    cout << "Your Previous Password Was " << t1.tPass[j] << endl;
                    cout << "Enter New Password for Teacher : ";
                    cin >> t1.tPass[j];
                }
            }
            cout << "Teacher Password Successfully Updated.." << endl;
        }
        break;
        case 0:
            break;
        default:
        {
            cout << "Wrong choice selected" << endl;
        }
        break;
        }
        return t1;
    }

    Teacher deleteTeacher(Teacher t1)
    {
        int del_teach[10];
        cout << "\nEnter Subject Unique ID : ";
        cin >> del_teach[10];
        for (int j = 0; j < n_teach; j++)
        {
            if (del_teach[10] == t1.tId[j])
            {
                t1.tId[j] = 0;
                t1.tPass[j] = "";
                t1.tUser[j] = "";
            }
        }
        cout << "Teacher Data Deleted Successfully.." << endl;
        return t1;
    }

    Student createStudent(Student s1)
    {
        cout << "\nEnter Number of Students to be Added: ";
        cin >> n_stud;
        for (int i = 0; i < n_stud; i++)
        {
            cout << "Student " << i + 1 << "." << endl;
            cout << "Unique ID: ";
            cin >> s1.sId[i];
            cout << "Username : ";
            cin >> s1.sUser[i];
            cout << "Password : ";
            cin >> s1.sPass[i];
        }
        cout << "Students Data Successfully Saved.." << endl;

        return s1;
    }

    Student updateStudent(Student s1)
    {
        int up1_stud[10];
        int up2_stud[10];

        switch (userOrPass())
        {
        case 1:
        {

            cout << "\nEnter Student Unique ID : ";
            cin >> up1_stud[10];
            for (int i = 0; i < n_stud; i++)
            {
                if (up1_stud[10] == s1.sId[i])
                {
                    cout << "Your Previous Username Was " << s1.sUser[i] << endl;
                    cout << "Enter New Username for Student : ";
                    cin >> s1.sUser[i];
                }
            }
            cout << "Student Username Successfully Updated.." << endl;
        }
        break;
        case 2:
        {
            cout << "\nEnter Student Unique ID : ";
            cin >> up2_stud[10];
            for (int i = 0; i < n_stud; i++)
            {
                if (up2_stud[10] == s1.sId[i])
                {
                    cout << "Your Previous Password Was " << s1.sPass[i] << endl;
                    cout << "Enter New Password for Student : ";
                    cin >> s1.sPass[i];
                }
            }
            cout << "Student Password Successfully Updated.." << endl;
        }
        break;
        case 0:
            break;
        default:
        {
            cout << "Wrong choice selected" << endl;
        }
        break;
        }
        return s1;
    }

    Student deleteStudent(Student s1)
    {
        int del_stud[10];
        cout << "\nEnter Subject Unique ID : ";
        cin >> del_stud[10];
        for (int i = 0; i < n_stud; i++)
        {
            if (del_stud[10] == s1.sId[i])
            {
                s1.sId[i] = 0;
                s1.sPass[i] = "";
                s1.sUser[i] = "";
            }
        }
        cout << "Student Data Deleted Successfully.." << endl;

        return s1;
    }
};
Selection s;
Admin a1;
Teacher t1;
Student s1;

class PostMenu
{
    public:
    int l = 1, x = 1, y = 1, z = 1;

    void setPost()
    {
    while(l)
    {
        x=1;
        switch (s.menu())
        {
        case 1:
            a1.adminLogIn();
            while (x)
            {

                switch (a1.adminMenu())
                {
                case 1:
                    // add subjects
                    a1.addSubject();

                    break;
                case 2:
                    // add teachers
                    t1 = a1.createTeacher(t1);
                    break;
                case 3:
                    // add students
                    s1 = a1.createStudent(s1);
                    break;
                case 4:
                    // update
                    {
                        switch (a1.adminUpdateMenu())
                        {
                        case 1:
                        { // subject
                            a1.updateSubject();
                        }
                        break;
                        case 2:
                        { // teacher
                            t1 = a1.UpdateTeacher(t1);
                        }
                        break;
                        case 3:
                        { // student
                            s1 = a1.updateStudent(s1);
                        }
                        break;
                        case 0:
                            break;
                        default:
                        {
                            cout << "Wrong Choice Selected.." << endl;
                        }
                        break;
                        }
                    }
                    break;
                case 5:
                {
                    // delete
                    switch (a1.adminDeleteMenu())
                    {
                    case 1:
                    { // subject
                        a1.deleteSubject();
                    }
                    break;
                    case 2: // teacher
                        t1 = a1.deleteTeacher(t1);
                        break;
                    case 3: // student
                        s1 = a1.deleteStudent(s1);
                        break;
                    case 0:
                        break;
                    default:
                    {
                        cout << "Wrong Choice Selected.." << endl;
                    }
                    break;
                    }
                }
                break;
                case 6:
                    // show
                    {
                        switch (a1.adminShowMenu())
                        {
                        case 1:
                        {

                            a1.showSubject();
                        }
                        break;
                        case 2:
                        {

                            t1.showTeacher();
                        }
                        break;
                        case 3:
                        {

                            s1.showStudent();
                        }
                        break;
                        case 0:
                            break;
                        default:
                        {
                            cout << "Wrong Choice Selected" << endl;
                        }
                        break;
                        }
                    }
                    break;
                case 7:
                    // approval
                    break;
                case 0:
                    x = 0;
                    break;
                default:
                    cout << "Wrong Choice Selected." << endl;
                    break;
                }
            }
            break;
        case 2:
        {
            // teacher's section
            while (y)
            {
           // for (int j = 0; j < n_teach; j++)
           // {
           y=1;
                t1.teacherLogIn();
                {
                switch (t1.teacherMenu())
                {
                case 1: // add details
                    {
                        t1.teachDetails();
                    }
                    break;
                case 2: // subject selection
                    break;
                case 3: // subjects marks
                    break;
                case 4: // update data
                    break;
                case 5: // students update data
                    break;
                case 6: // show
                    break;
                case 0:
                    y = 0;
                    break;
                default:
                    cout << "Wrong Choice Entered.." << endl;
                    break;
                }
             //   }

            }
            }

        }
        break;
        case 3:
        {
            // student's section

          //  for (int i = 0; i < n_stud; i++)
            //{
            s1.studentLogIn();
            while (z)
            {
                switch (s1.studMenu())
                {
                case 1: // add details
                    break;
                case 2: // result
                    break;
                case 3: // update details
                    break;
                case 0:
                    z = 0;
                    break;
                default:
                    cout << "Wrong Choice Entered.." << endl;
                    break;
                }
            //}
        }
        }
        break;
        case 0:
            l = 0;
            break;
        default:
            cout << "Wrong Choice Selected." << endl;
            break;
        }
    }
    }
};

int main()
{
    cout << "::Welcome To School Management System::" << endl;
    PostMenu pm;
    pm.setPost();
    return 0;
}
