string customer::name;
string customer::city;
string customer::gender;
int customer::age;
string customer::mobno;
float booking::charges;
int booking::choice;
class ticket:public customer,public booking {
 public:
 void bill() {
 string destination;
cout<<"______________nxtGen Airlines_________________"<<endl;
 cout<<"__________________Ticket______________________"<<endl;
 cout<<"\tName:"<<customer::name<<endl;
 cout<<"\tAge:"<<customer::age<<endl;
 cout<<"\tGender:"<<customer::gender<<endl;
 cout<<"\tMobile number:"<<customer::mobno<<endl;
 cout<<"\tCity:"<<customer::city<<endl;
 if(booking::choice==1) {
 destination="Dubai";
 } else if(booking::choice==2) {
 destination="Florida";
 } else if(booking::choice==3) {
destination="Paris";
 }
 cout<<"\tDestination:"<<destination<<endl;
 cout<<"\tFlight charges:"<<booking::charges<<endl<<endl;
 }
}; 
