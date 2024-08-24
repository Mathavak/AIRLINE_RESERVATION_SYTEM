class booking {
 public:
 static int choice;
 int choice1;
 int back;
 static float charges;
 public:
 void book() {
 string city[]= {"Dubai","Florida","Paris"};
 for(int i=0; i<3; i++) {
 cout<<i+1<<"."<<city[i];
 cout<<endl;
 }
 cout<<endl<<endl<<"Enter the respective number to the country for booking:";
 cin>>choice; 
 switch(choice) {
 case 1: {
 cout<<endl<<"______________Welcome to Dubai
  Emirates______________";
 cout<<endl<<endl<<"following are flights available"<<endl;
 cout<<endl<<"1. DUB - 4098";
 cout<<endl<<"\t 18.09.2024 4PM-- 8hrs -- Charges:19000";
 cout<<endl<<endl<<"2. DUB - 5018";
 cout<<endl<<"\t 19.09.2024 9AM -- 7.5hrs -- Charges:22000";
cout<<endl<<endl<<"Choose the flight you wanted to book:";
 cin>>choice1;
 if(choice1==1) {
 charges=19000;
 cout<<endl<<"You have sucessfully booked DUB -
4098"<<endl<<endl;
 cout<<endl<<"you can go to main menu to get your
tickets"<<endl<<endl;
 mainmenu();
 } else if(choice1==2) {
 charges=22000;
 cout<<endl<<"You have sucessfully booked DUB -
5018"<<endl<<endl;
 cout<<endl<<"you can go to main menu to get your
tickets"<<endl<<endl;
 mainmenu(); 
} else {
 cout<<endl<<"Wrong choice tryagain!!";
 book();
 }
 break;
 }
 case 2: { 
cout<<endl<<"you can go to main menu to get your
tickets"<<endl<<endl;
 mainmenu();
 } else {
 cout<<endl<<"Wrong choice tryagain!!";
 book();
 }
 break;
 } 
