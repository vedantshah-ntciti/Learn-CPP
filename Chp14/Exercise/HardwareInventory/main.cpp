#include <iostream>
#include "Hardware.h"
#include <cstdlib>
#include <iomanip>
#include <string> 
#include <fstream>
using namespace std;

enum Tasks{PRINT = 1, UPDATE, NEW, DELETE, END};
int getTask();
void doTask(int , fstream&);
void printFile(fstream&);
void updateRecord(fstream&);
void deleteRecord(fstream&);
void newRecord(fstream&);
void displayRecord(ostream&, const Hardware &);

int main()
{
    fstream manageHardware( "hardware.dat" , ios::in | ios::out | ios::binary);

    if ( !manageHardware )
    {
        cerr << "File does not exist.";
        cout << "\nMaking a hardware.dat file with 100 lines" << endl;

        ofstream newFile( "hardware.dat" , ios::out | ios::binary );

        if ( !newFile )
        {
            cerr << "hardware.dat could not be created" << endl;
            exit(EXIT_FAILURE);
        }
        else
        {

            Hardware blankTools;
            for (int i = 0; i<100; i++)
            {
                newFile.write( reinterpret_cast <const char *> (&blankTools) , sizeof(Hardware));
            }
            newFile.close();
        }
        cout << "Blank File created" << "\nKindly rerun program" << endl;
        return 0;
    }
    
    int task;
    while ( (task = getTask()) != END)
    {
        doTask(task , manageHardware);

        manageHardware.clear();
    }

}

int getTask()
{
    cout << "\nWhat do you want to do?"
        << "\nGet List" << ": Press 1" << endl
        << "\nUpdate tool:" << "Press 2" << endl
        << "\nAdd tool: " << "Press 3" << endl
        << "\nDelete tool: " << "Press 4" << endl
        << "\nEnd Program: " << "Press 5" << endl;
    
    int task;
    cin >> task;
    return task;
}

void doTask(int task, fstream&operatingFile)
{
    switch (task)
    {
        case PRINT:
            printFile(operatingFile);
            break;
        case UPDATE:
            updateRecord(operatingFile);
            break;
        case NEW:
            newRecord(operatingFile);
            break;
        case DELETE:
            deleteRecord(operatingFile);
            break;
        case END:
        default:
            cerr << "Invalid Input" << endl;
            break;
    }
}

void displayRecord(ostream&output, const Hardware&tool)
{
    output << left << setw(15) << tool.getToolID() << setw(15) 
        << tool.getToolName() << setw(10) 
        << tool.getQuantity() << setw(15) 
        << setprecision(2) << right << fixed << showpoint <<  tool.getCost() << endl;
}

void printFile(fstream&file)
{
    ofstream outPrintFile("ToolsList.txt" , ios::out);

    if ( !outPrintFile )
    {
        cerr << "File could not be created" << endl;
        exit(EXIT_FAILURE);
    }

    outPrintFile << left << setw(15) << "Record #" << setw(15) << "Tool Name" << setw(15)
        << "Quantity" << right << setw(10) << "Cost" << endl;

    file.seekg(0);

    Hardware listTools;
    file.read(reinterpret_cast <char *> (&listTools) , sizeof(Hardware));

    while ( !file.eof() )
    {
        if (listTools.getToolID() != 0)
        {
            displayRecord(outPrintFile , listTools);
        }

        file.read(reinterpret_cast <char *> (&listTools) , sizeof(Hardware));
    }
}

void updateRecord(fstream&file)
{
    cout << "Enter record number to update";
    int recordNumber;
    cin >> recordNumber;

    file.seekg( (recordNumber - 1) * sizeof(Hardware) );

    Hardware obtainedTool;
    file.read( reinterpret_cast <char *> (&obtainedTool) , sizeof(Hardware) );

    if ( obtainedTool.getToolID() != 0)
    {
        displayRecord( cout , obtainedTool );

        //enum Changes { NAME, QUANTITY , COST , DONE};
        
        int change;
        cout << "What to change?" << endl
            << "Tool Name: " << "Press 8293\n"
            << "Quantity: " << "Press 1828\n" 
            << "Cost: " << "Press 3925\n"
            << "Done: " << "Press any number";
        
        cin >> change;
        switch (change)
        {
            case 8923: 
                {
                    string newName;
                    cin >> newName;
                    obtainedTool.setToolName(newName);
                }
                break;
            case 1828:
                {
                    int newQuantity;
                    cin >> newQuantity;
                    obtainedTool.setQuantity(newQuantity);
                }
                break;
            case 3925:
                {
                    double newCost;
                    cin >> newCost;
                    obtainedTool.setCost(newCost);
                }
                break;
            default:
                break;
        }

        displayRecord(cout , obtainedTool);

        cout << "Finalize this" << "Yes(y) or No(n) : ";
        char yesOrno;
        cin >> yesOrno;

        if (yesOrno == 'y')
        {
            file.seekp( (recordNumber - 1) * sizeof(Hardware));
            file.write(reinterpret_cast < const char *> (&obtainedTool) , sizeof(Hardware));
        }
        else
        {
            cout << "Cancelling changes" << endl;
        }
    }
    else
    {
        cerr << "Tool ID: " << obtainedTool.getToolID() << " does not exit " << endl;
    }
}

void deleteRecord(fstream&file)
{
    cout << "Enter record number to delete";
    int recordNumber;
    cin >> recordNumber;

    file.seekg( (recordNumber - 1) * sizeof(Hardware) );

    Hardware obtainedTool;
    file.read( reinterpret_cast <char *> (&obtainedTool) , sizeof(Hardware) );

    if ( obtainedTool.getToolID() != 0)
    {
        Hardware blankTool;
        file.seekp( (recordNumber - 1) * sizeof(Hardware));
        file.write(reinterpret_cast < const char *> (&blankTool) , sizeof(Hardware));
    }
    else
    {
        cerr << "Tool ID: " << obtainedTool.getToolID() << " does not exit " << endl;
    }
}

void newRecord(fstream&file)
{
    cout << "Enter record number to add";
    int recordNumber;
    cin >> recordNumber;

    file.seekg( (recordNumber - 1) * sizeof(Hardware) );

    Hardware obtainedTool;
    file.read( reinterpret_cast <char *> (&obtainedTool) , sizeof(Hardware) );

    if ( obtainedTool.getToolID() == 0)
    {
        cout << "Enter name, quantity , and cost of the tool" << endl;
        string name;
        int quan;
        double costPerTool;

        cin >> name >> quan >> costPerTool;

        Hardware newTool(recordNumber , name , quan , costPerTool);

        file.seekp( (recordNumber - 1) * sizeof(Hardware));
        file.write(reinterpret_cast < const char *> (&newTool) , sizeof(Hardware));

    }
    else
    {
        cerr << "Tool ID: " << obtainedTool.getToolID() << " already exits " << endl;
    }
}
