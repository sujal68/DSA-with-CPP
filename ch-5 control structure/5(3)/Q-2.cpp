#include <iostream>
using namespace std;

main()
{
     cout << endl
          << "Welcome To Call Service Center." << endl;
     cout << endl
          << "Press 1 for Hindi";
     cout << endl
          << "Press 2 for Gujarati";
     cout << endl
          << "Press 3 for English";
     int num;
     cout << endl
          << "Press Any Number : ";
     cin >> num;

     switch (num)
     {
     case 1:
          cout << endl
               << "Aapne 1 Pasand Kiya to Chaliye Hindi me Aage badhte hai..." << endl;
          cout << endl
               << "Internet Recharge karne ke liye 1 dabaiye.";
          cout << endl
               << "Top Up Recharge Karne ke liye 2 dabaiye.";
          cout << endl
               << "Special Recharge ke liye 3 dabaiye";
          int option;
          cout << endl
               << "Koi bhi Number Dabaiye : ";
          cin >> option;

          switch (option)
          {
          case 1:
               cout << endl
                    << "Aapko Internet Recharge Ka kounsa plane karvana hai?" << endl;
               cout << endl
                    << "149/- pack (unlimited calls, 1GB of high-speed internet per day and 100 SMS per day for a validity of 20 days). 1 dabaiye.";
               cout << endl
                    << "555/- plan (84 days, 1.5GB/day, unlimited calls, 100 SMS/day). 2 dabaiye.";
               cout << endl
                    << "999/- plan (84 days, 3GB/day, unlimited calls, 100 SMS/day). 3 dabaiye.";

               int plan;
               cout << endl
                    << endl
                    << "plan ke liye Koi bhi Number Dabaiye : ";
               cin >> plan;

               switch (plan)
               {
               case 1:
                    cout << endl
                         << "149/- plan Succsess Fully Done.";
                    break;
               case 2:
                    cout << endl
                         << "555/- plan Succsess Fully Done.";
                    break;
               case 3:
                    cout << endl
                         << "999/- plan Succsess Fully Done.";

                    break;
               default:
                    cout << endl
                         << "Aisa koi Number hi nahi hai!!!";
               }
               break;
          case 2:
               cout << endl
                    << "Aapko Top-up Recharge Ka kounsa plane karvana hai?" << endl;
               cout << endl
                    << "149/- pack (Top-up se aapko rs 84.46 ka talktime Milenga). 1 dabaiye.";
               cout << endl
                    << "555/- plan (Top-up se aapko rs 420.65 ka talktime Milenga). 2 dabaiye.";
               cout << endl
                    << "999/- plan (Top-up se aapko rs 899.46 ka talktime Milenga). 3 dabaiye.";

               int plan2;
               cout << endl
                    << endl
                    << "plan ke liye Koi bhi Number Dabaiye : ";
               cin >> plan2;

               switch (plan2)
               {
               case 1:
                    cout << endl
                         << "149/- plan Succsess Fully Done.";
                    break;
               case 2:
                    cout << endl
                         << "555/- plan Succsess Fully Done.";
                    break;
               case 3:
                    cout << endl
                         << "999/- plan Succsess Fully Done.";

                    break;
               default:
                    cout << endl
                         << "Aisa koi Number hi nahi hai!!!";
               }
               break;
          case 3:
               cout << endl
                    << "Aapko Special Recharge Ka kounsa plane karvana hai?" << endl;
               cout << endl
                    << "149/- pack (1 GB/day , 28 day tak rahenga). 1 dabaiye.";
               cout << endl
                    << "555/- plan (1.5 GB/day , 28 days rahenga aur ullimitade call bhi milenga). 2 dabaiye.";
               cout << endl
                    << "999/- plan (2 GB/day , 98 days tak rahenga.). 3 dabaiye.";

               int plan3;
               cout << endl
                    << endl
                    << "plan ke liye Koi bhi Number Dabaiye : ";
               cin >> plan3;

               switch (plan3)
               {
               case 1:
                    cout << endl
                         << "149/- plan Succsess Fully Done.";
                    break;
               case 2:
                    cout << endl
                         << "555/- plan Succsess Fully Done.";
                    break;
               case 3:
                    cout << endl
                         << "999/- plan Succsess Fully Done.";

                    break;
               default:
                    cout << endl
                         << "Aisa koi Number hi nahi hai!!!";
               }
               break;
          }
          break;
     case 2:
          cout << endl
               << "tamye 2 par press karyu che chalo Gujarati me aagal vadhiye" << endl;
          cout << endl
               << "Internet Recharge karva mate 1 dabavo.";
          cout << endl
               << "Top Up Recharge Karva mate 2 dabavo";
          cout << endl
               << "Special Recharge Karva mate 3 dabavo";
          int option2;
          cout << endl
               << "Je Recharge karva mate number dabavo : ";
          cin >> option2;

          switch (option2)
          {
          case 1:
               cout << endl
                    << "Tamare Internet Recharge nu kayu plan karva nu che?" << endl;
               cout << endl
                    << "149/- plan (unlimited calls, 1GB of high-speed internet per day and 100 SMS per day for a validity of 20 days). 1 dabavo.";
               cout << endl
                    << "555/- plan (84 days, 1.5GB/day, unlimited calls, 100 SMS/day). 2 dabavo.";
               cout << endl
                    << "999/- plan (84 days, 3GB/day, unlimited calls, 100 SMS/day). 3 dabavo.";

               int plans;
               cout << endl
                    << endl
                    << "plan mate valid number dabavo : ";
               cin >> plans;

               switch (plans)
               {
               case 1:
                    cout << endl
                         << "149/- tamaru plan safalta purvak thay gayu che.";
                    break;
               case 2:
                    cout << endl
                         << "555/- tamaru plan safalta purvak thay gayu che.";
                    break;
               case 3:
                    cout << endl
                         << "999/- tamaru plan safalta purvak thay gayu che.";

                    break;
               default:
                    cout << endl
                         << "aavo ak pn number nathi valid number farithi dabavo!!";
               }
               break;
          case 2:
               cout << endl
                    << "Tamare Top-up Recharge nu kyu plane karvanu che?" << endl;
               cout << endl
                    << "149/- plan (Top-up se aapko rs 84.46 ka talktime Milenga). 1 dabavo.";
               cout << endl
                    << "555/- plan (Top-up se aapko rs 420.65 ka talktime Milenga). 2 dabavo.";
               cout << endl
                    << "999/- plan (Top-up se aapko rs 899.46 ka talktime Milenga). 3 dabavo.";

               int plans2;
               cout << endl
                    << endl
                    << "Plan mate number dabavo : ";
               cin >> plans2;

               switch (plans2)
               {
               case 1:
                    cout << endl
                         << "149/- tamaru plan safalta purvak thay gayu che.";
                    break;
               case 2:
                    cout << endl
                         << "555/- tamaru plan safalta purvak thay gayu che.";
                    break;
               case 3:
                    cout << endl
                         << "999/- tamaru plan safalta purvak thay gayu che.";

                    break;
               default:
                    cout << endl
                         << "aavo ak pn number nathi valid number farithi dabavo!!";
               }
               break;
          case 3:
               cout << endl
                    << "Tamare Special Recharge nu kyu plan karvanu che?" << endl;
               cout << endl
                    << "149/- pack (1 GB/day , 28 day tak rahenga). 1 dabavo.";
               cout << endl
                    << "555/- plan (1.5 GB/day , 28 days rahenga aur ullimitade call bhi milenga). 2 dabavo.";
               cout << endl
                    << "999/- plan (2 GB/day , 98 days tak rahenga.). 3 dabavo.";

               int plans3;
               cout << endl
                    << endl
                    << "Plan mate number dabavo : ";
               cin >> plans3;

               switch (plans3)
               {
               case 1:
                    cout << endl
                         << "149/- tamaru plan safalta purvak thay gayu che.";
                    break;
               case 2:
                    cout << endl
                         << "555/- tamaru plan safalta purvak thay gayu che.";
                    break;
               case 3:
                    cout << endl
                         << "999/- tamaru plan safalta purvak thay gayu che.";

                    break;
               default:
                    cout << endl
                         << "aavo ak pn number nathi valid number farithi dabavo!!";
               }
               break;
          }
          break;
     case 3:
          cout << endl
               << "You pressed 3, let's continue in English." << endl;
          cout << endl
               << "Press 1 for Internet Recharge.";
          cout << endl
               << "Press 2 for Top-Up Recharge.";
          cout << endl
               << "Press 3 for Special Recharge.";
          int options2;
          cout << endl
               << "Press any number for Recharge : ";
          cin >> options2;

          switch (options2)
          {
          case 1:
               cout << endl
                    << "Which Internet Recharge plan would you like to choose?" << endl;
               cout << endl
                    << "149/- plan (unlimited calls, 1GB of high-speed internet per day and 100 SMS per day for a validity of 20 days). Press 1.";
               cout << endl
                    << "555/- plan (84 days, 1.5GB/day, unlimited calls, 100 SMS/day). Press 2.";
               cout << endl
                    << "999/- plan (84 days, 3GB/day, unlimited calls, 100 SMS/day). Press 3.";

               int planss;
               cout << endl
                    << endl
                    << "Press any number for the plan : ";
               cin >> planss;

               switch (planss)
               {
               case 1:
                    cout << endl
                         << "149/- plan successfully activated.";
                    break;
               case 2:
                    cout << endl
                         << "555/- plan successfully activated.";
                    break;
               case 3:
                    cout << endl
                         << "999/- plan successfully activated.";
                    break;
               default:
                    cout << endl
                         << "Invalid number entered, please try again!!";
               }
               break;
          case 2:
               cout << endl
                    << "Which Top-up Recharge plan would you like to choose?" << endl;
               cout << endl
                    << "149/- plan (You will get Rs. 84.46 talktime). Press 1.";
               cout << endl
                    << "555/- plan (You will get Rs. 420.65 talktime). Press 2.";
               cout << endl
                    << "999/- plan (You will get Rs. 899.46 talktime). Press 3.";

               int planss2;
               cout << endl
                    << endl
                    << "Press number for the plan : ";
               cin >> planss2;

               switch (planss2)
               {
               case 1:
                    cout << endl
                         << "149/- plan successfully activated.";
                    break;
               case 2:
                    cout << endl
                         << "555/- plan successfully activated.";
                    break;
               case 3:
                    cout << endl
                         << "999/- plan successfully activated.";
                    break;
               default:
                    cout << endl
                         << "Invalid number entered, please try again!!";
               }
               break;
          case 3:
               cout << endl
                    << "Which Special Recharge plan would you like to choose?" << endl;
               cout << endl
                    << "149/- pack (1 GB/day , valid for 28 days). Press 1.";
               cout << endl
                    << "555/- plan (1.5 GB/day , valid for 28 days with unlimited calls). Press 2.";
               cout << endl
                    << "999/- plan (2 GB/day , valid for 98 days). Press 3.";

               int planss3;
               cout << endl
                    << endl
                    << "Press number for the plan : ";
               cin >> planss3;

               switch (planss3)
               {
               case 1:
                    cout << endl
                         << "149/- plan successfully activated.";
                    break;
               case 2:
                    cout << endl
                         << "555/- plan successfully activated.";
                    break;
               case 3:
                    cout << endl
                         << "999/- plan successfully activated.";
                    break;
               default:
                    cout << endl
                         << "Invalid number entered, please try again!!";
               }
               break;
          }
          break;

     default:
          cout << endl
               << "Invalid Number !!!";
     }
}