class customer {
 public:
 static string name,gender;
 static string mobno;
 static int age;
 static string city;
 public:
 void details() {
 cout<<"Name:";
 cin>>name;
 cout<<"Age:";
 cin>>age;
 cout<<"Gender:";
 cin>>gender;
 cout<<"Contact number:";
 cin>>mobno; 
 cout<<"City:";
 cin>>city;
 cout<<endl<<endl<<"Your details are successfully saved !!"<<endl<<endl;
 mainmenu();
 }
}; 

