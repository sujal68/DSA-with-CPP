#include <iostream>
#include <string.h>
using namespace std;

class Dimond
{
private:
    int comp_id;
    string comp_name;
    static string comp_ceo;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_staff_quantity;
    int comp_export_diamonds;

public:
    Dimond(int comp_id, string comp_name, int comp_revenue,
           int comp_import_raw_diamonds, int comp_staff_quantity, int comp_export_diamonds)
    {
        this->comp_id = comp_id;
        this->comp_name = comp_name;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_export_diamonds = comp_export_diamonds;
    }
    // getter
    void getDimondData()
    {
        cout << endl
             << endl
             << "Dimond Company Output......." << endl
             << endl;
        cout << "Comapny Id : " << this->comp_id << endl;
        cout << "Comapny Name : " << this->comp_name << endl;
        cout << "Comapny CEo Name : " << this->comp_ceo << endl;
        cout << "Comapny Revvenue : " << this->comp_revenue << endl;
        cout << "Comapny import raw dimond : " << this->comp_import_raw_diamonds << endl;
        cout << "Comapny Staff Quantity : " << this->comp_staff_quantity << endl;
        cout << "Comapny export Dimond : " << this->comp_export_diamonds << endl;
    }
};
string Dimond::comp_ceo = "Sujal Kidecha";