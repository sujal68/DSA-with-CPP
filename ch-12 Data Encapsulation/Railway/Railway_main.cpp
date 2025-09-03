#include "Railway.cpp"
main()
{
    RailwaySystem rail1;
    rail1.getRailwayData();

    int no;
    cout << endl
         << "Search The Number Of Train : ";
    cin >> no;
    rail1.searchTrain(no);
}