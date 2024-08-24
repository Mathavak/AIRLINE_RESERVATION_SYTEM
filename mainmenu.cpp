void mainmenu() {
 int choice1;
 int choice2;
 int back;
 cout<<endl<<" nxtGen Airlines "<<endl;
 cout<<endl<<endl;
 cout<<" ----------------------Main Menu--------------------------------"<<endl;
 cout<<"\t Press 1 for Customer Details Registration"<<endl;
 cout<<"\t Press 2 for Airlines Ticket Reservation"<<endl;
 cout<<"\t Press 3 for Ticket and Charges"<<endl;
 cout<<"\t Press 4 for Exit"<<endl;
 cout<<"----------------------------------------------------------------"<<endl<<endl;
 cout<<"Enter your choice:"; 
cin>>choice1;
 customer cobj;
 booking bobj;
 ticket tobj;
 switch(choice1) {
 case 1: {
 cout<<endl<<"____Register your details____"<<endl<<endl;
 cobj.details();
 break;
 }
 case 2: {
 cout<<endl<<"____Book your ticket____"<<endl<<endl;
 bobj.book();
 break;
 } 
case 3: {
 tobj.bill();
 cout<<endl<<endl<<"\t\t Thankyou for choosing our airlines enjoy your
journey!! ";
 break;
 }
 case 4: {
 cout<<endl<<"\t\t__________Thankyou enjoy your journey__________";
 break;
 }
 default: {
 cout<<"invalid key";
 mainmenu();
 break;
 }
 }
}
