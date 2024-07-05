#include<iostream>

using namespace std;
// class product
class Product{
	public:
	Product(){
		cout<<"*  (Welcome To Gadgets Hub)  ***"<<endl;
		cout<<"1.Mobile Phones "<<endl;
		cout<<"2.Laptops "<<endl;
		cout<<"3.Ipads "<<endl;
		cout<<"4.Smart Watches "<<endl;
		cout<<"5.Products In Your Price Range"<<endl;
		cout<<"6.About Us "<<endl;
		cout<<"  { In Which Product You Are Interested And Want To Buy }  : "<<endl<<endl;
	}
};
class selection;
// class
class bank_student_company{
	
	private:
		
		// bank
		string name;
		string iban;
		//student
		string stu_name;
		string stu_id;
		string program;
		//company
	    string company_name;
	    double contact_no;
		string gmail;
		string location;
		
		public:
		            void get_n(string q){
		             name=q;
					}
					
					void get_iban(string w){
						iban=w;
					}
					void get_stu_name(string e){
						stu_name=e;
					}
					void get_stu_id(string r){
						stu_id=r;
					}
					void get_program(string t){
						program=t;
					}
					
					//company
					
					void get_company_name(string x){
						company_name = x;
					}
					string print_company_name(){
						return company_name;
					}
					
						void get_contact_no(long y){
						    contact_no = y;
					}
				    long print_contact_no(){
						return contact_no;
					}
					void get_gmail(string z){
						    gmail = z;
					}
					string print_gmail(){
						return gmail;
					}
						void get_location(string zz){
						location = zz;
					}
					string print_location(){
						return location;
					}

};

// class company details

class about_company: virtual public  bank_student_company{
            public:
			 string company_details(){
			 system("Color 0B");
			get_company_name("Gadgets Hub");
			 get_contact_no('43448372');
			  get_gmail("gadgetshub19@gmail.com");
			  get_location("Level # 14, ARFA Tower, Lahore ");
			  
			  cout<<"//////////////////////////////////////////////////////////////////////////////////"<<endl<<endl;
			 	 
			 	 cout<<"Company Name : "<<print_company_name()<<endl;
			 	 cout<<"Contact : " <<print_contact_no()<<endl;
			 	 cout<<"Gmail : " <<print_gmail()<<endl;
			 	 cout<<"Location : "<<print_location()<<endl;
			   	 return "end";	 	 
			 	
			 	
			 }
			 	
	
};
//class order confirm
class order_confirm{
	private: 
	
	string name;
	double contact;
	double a_contact;
	string address;
	string famous;
	
	public:
	
void get_name(string x) {
        name=x;
    }
    
    string print_name(){
    	return name;
	}
	
	void get_contact( double a){
		contact=a;
	}
	double print_contact(){
		return contact;
	}
	void get_a_contact(double b){
		a_contact=b;
	}
	double print_a_contact(){
		return a_contact;
	}
	void get_address(string c){
		
		address=c;
	}
	string print_address(){
		return address;
	}
	void get_famous(string d){
		famous=d;
	}
	string print_famous(){
		return famous;
	}
	
    
};

//class customer details
class customer_details : public order_confirm ,virtual public about_company  { 

	
	public:
		
	 string get_details(){
		     
system("Color 06 ");
	    	cout<<"Enter the name : ";
	        string a;
	        cin>>a;
         	getline(cin,a);
	        cout<<"Enter address : ";
	        string c;
	        getline(cin,c);
	        cout<<"Enter the famous place near dilevery destination : ";
        	string b;
        	getline(cin,b);

			cout<<"Enter the contact number : ";
			double cc;
			cin>>cc;
			
			cout<<"Enter another contact number : ";
			double a_c;
			cin>>a_c;
		
			//////////////////////////////////////
			get_name(a);
           	get_famous(b);
	        get_address(c);
			get_contact(cc);
			get_a_contact(a_c);

			
			cout<<endl;
			cout<<endl;
			cout<<endl;
            cout<<endl;
            
			cout<<"Your order has been confirm. It will delivered you with in 3/4 working days !!!!! "<<endl;
	    	system("Color 0A ");
			cout<<"*****"<<endl;
			cout<<"Order no : usman234 "<<endl;
			cout<<"Name : "<<print_name()<<endl;
			cout<<"Contact no : " <<print_contact()<<endl;
			cout<<"Another Contact no :"<<print_a_contact()<<endl;
			cout<<"Delivery Address : "<<print_address()<<endl;
			cout<<"Another Famous Destination near Delivery point : "<<print_famous()<<endl;
			cout<<endl;
				cout<<"*****"<<endl;
				cout<<endl;
			cout<<"In case of any query and issue you can mail us (gadgetshub19@gmail.com)."<<endl;
			cout<<" press 1 For Further details Check the company details contact and branch location "<<endl;
			
			int x;
			cin>>x;
			if(x==1){
				
		cout<<company_details();
		
		 }		else if(x==00){
		 	
		 //	cout<<reverse();
		 }
		}
	
};
// class payments
class payment : virtual public customer_details{
	
	public:
		string payment_methods(){
			system("color 0D");
						
				cout<<"****"<<endl<<endl;
				cout<<"////////////////////  Select Your payment method  ///////////////////////////"<<endl;
				cout<<"1.Easypaisa / jazz cash "<<endl;
				cout<<"2.VISA card / DEBITE card "<<endl;
			 int a;
			 cin>>a;
			 if(a==1){
			 	
			 	cout<<easy();
			 }else if(a==2){
			  	
			 cout<<visa();
			 }
			}
			
			string easy(){
				cout<<"Enter Your Jazzcash/Easypaisa Number : ";
				double number;
				cin>>number;
				cout<<"Enter PIN send on your mobile number : "	;
				int pin;
				cin>>pin;
					cout<<"   PAYMENT HAS BEEN DEDUCT FROM YOUR ACCOUNT  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!! " <<endl;
		cout<<"***"<<endl;
		cout<<"Enter Your details and dilvery location"<<endl;
		cout<<get_details();
			}
			
			string visa(){
				
				cout<<"Enter Your Card No: ";
				int no;
				cin>>no;
				cout<<"Enter 4-digit code mentioned on your VISA/DEBITE card : ";
				int code;
				cin>>code;
				cout<<"Enter the code send on you number : ";
				int c;
				cin>>c;
					cout<<"   PAYMENT HAS BEEN DEDUCT FROM YOUR ACCOUNT  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!! "<<endl ;
				cout<<"***"<<endl;
		cout<<"Enter Your details and dilvery location"<<endl;
		cout<<get_details();
			}
			
			
		
};

// class bank payments
 class bank_payments_discount : virtual private customer_details ,virtual  public payment ,virtual public bank_student_company{ 
 	public:
 	
 string	meezan_discount(){
 	system("color 4e");
 	 cout<<"***"<<endl<<endl; 
 	 	 cout<<"Enter The Name Mentioned On Card : ";
 	 string n;
 	 cin>>n;
 	 getline(cin,n);
 	 cout<<"Enter The Account IBAN number : ";
 	 string iba;
 	 cin>>iba;
 	  get_n(n);
	 get_iban(iba);
 	 cout<<"Enter the code Send On Your Mobile Number Send on You Mobile Number Register With Bank Account :";
 	 string code;
 	 cin>>code;
 	 if(code=="usman123" || code=="talha123" || code=="laiba123" || code=="axaan123" || code=="zoha123")
 	 {
 	 	cout<<"Press 1 To Confirm The order : ";
 	 	int x;
 	 	cin>>x;
 	 	if(x==1){
 	 		
 	 		cout<<"   PAYMENT HAS BEEN DEDUCT FROM YOUR ACCOUNT  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!! " <<endl<<endl;
 	 		cout<<"***"<<endl;
		cout<<"Enter Your details and dilvery location"<<endl;
 	 		cout<<get_details();
		  }else {
		  	
		  	cout<<"Try Again";
		  }
	  }else {
	  	cout<<"Enter the correct code!!!";
	  }
 	
 }
 	
 };
// class university student

class uni_student_discount  : virtual private customer_details ,virtual public payment , virtual public bank_student_company{
	public:
	string student_discount(){
			 cout<<"***"<<endl<<endl; 
			system("Color 07 ");  
		 cout<<"Enter Instiute Name : ";
		 string stu_num;
		 cin>>stu_num;
		 getline(cin,stu_num);
		 cout<<"Enter student ID : ";
		 string id;
		 cin>>id;
		 cout<<"Enter the Study Program : ";
		 string pro;
		 cin>>pro;
		 getline(cin,pro);
	
					 get_stu_name(stu_num);
					 get_stu_id(id);
					 get_program(pro);
		 
		 cout<<"Press 1 to confirm Your Order : ";
		 int a;
		 cin >>a;
		 if ( a==1 ){
		 	cout<<"  You got 20% discount on this product " ;
		 	cout<<payment_methods();
		 }
	}
};

//referal discount
class referal_code_discount : virtual public payment {
	
		public : 
	  string referal_discount(){
	  	 cout<<"***"<<endl<<endl; 
	  	system("Color 02");
	  		cout<<"Enter the referal code : " ;
	                	string a;
	                	cin>>a;
	                	if(a=="usman123" || a=="talha123" || a=="laiba123" || a=="axaan123" || a=="zoha123"){
	                		
	                		cout<<"You got the 15% discount."<<endl;
	                		cout<<"Now You can get this product in 2000$"<<endl;
	                		cout<<"press 1 to confirm the order";
	                		int b;
	                		cin>>b;
	                		if(b==1){
	                			
	                			cout<<payment_methods();
							}
							else{
								cout<<"Please enter the 1 to your Order";
							}
						}else{
							
							cout<<"You cannot get the Discount because You do not know any referal code"<<endl;
							cout<<"Please reconfirm the referal c2ode ";
						}
	  }
	
};

//discount class
class discount : public referal_code_discount /*public meezan_bank_discount , public hbl_bank_discount */ , public bank_payments_discount , public uni_student_discount {
	
	public:
	
	                 
	                string get_discount(){
	                	system("Color 03 ");

	                                 cout<<"***"<<endl<<endl;               
									cout<<"1.Referal Code discount if You Have Any Referal Code  ( upto 15% discount) "<<endl;
									cout<<"2.Payment Through Meezan Bank (upto 12% discount)"<<endl;
							     	cout<<"3.Discount for College and University Students ( upto 20% discount)"<<endl;
									cout<<"Select the Option : ";
									int a;
									cin >>a;
									if(a==1){
										
										cout<<referal_discount()<<endl<<endl;
									}else if (a==2){
										
										cout<<meezan_discount()<<endl<<endl;
									}else if (a==3){
										cout<<student_discount()<<endl<<endl;
									}				   	
	                
					}
	
};
//class product details
class laptop_models : public discount,virtual public payment {
	
	public:
		
		//////////////////////////////////// laptops sectoin 1 ///////////////////////////////////////
		string lap11(){
			cout<<"**MAC BOOK MI-2020\n*"<<"Processor: Apple M1 chip with 8-core CPU and 8-core GPU\n"<<"Memory: 8GB or 16GB unified memory\n"<<"Storage: 256GB, 512GB, 1TB, or 2TB SSD\n"<<"Battery Life: Up to 18 hours of web browsing / Up to 20 hours of video playback\n";
			cout<<"Price is 265,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap12(){
			
			
			cout<<"\n\n\n"<<"**MacBook Pro 13-inch M1 2020*\n"<<"Processor: Apple M1 chip with 8-core CPU and 8-core GPU\n"<<"Memory: 8GB or 16GB unified memory\n"<<"Storage: 256GB, 512GB, 1TB, or 2TB SSD\n"<<"Battery Life: Up to 17 hours of web browsing / Up to 20 hours of video playback\n";
		     	cout<<"Price is 265,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
	}
		
		string lap13(){
		cout<<"\n\n**MacBook Pro 16-inch 2019**\n"<<"Processor: 9th-generation Intel Core i7 or Core i9 processor (6-core or 8-core)\n"<<"Memory: 16GB, 32GB, or 64GB DDR4 RAM\n"<<"Storage: 512GB, 1TB, 2TB, 4TB, or 8TB SSD\n"<<"Graphics: AMD Radeon Pro 5300M with 4GB of GDDR6 memory or AMD Radeon Pro 5500M with 4GB of GDDR6 memory\n";	
		 	cout<<"Price is 255,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap14(){
			 cout<<"\n\n\n***MacBook Pro Retina 12-inch 2017**\n" <<"Processor: Intel Core m3, m5, or m7 processor (dual-core)\n" <<"Memory: 8GB or 16GB of 1866MHz LPDDR3 RAM\n"<<"Storage: 256GB, 512GB, or 1TB PCIe-based SSD\n"  <<"Graphics: Intel HD Graphics 615\n";
		 	cout<<"Price is 240,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string lap15(){
			 cout<<"\n\n\n***MacBook Pro 13-inch 2020 (Four Thunderbolt 3 ports)**\n" <<"Processor: Apple M1 chip with 8-core CPU and 8-core GPU\n" <<"Memory: 8GB or 16GB unified memory\n" <<"Storage: 256GB, 512GB, 1TB, or 2TB SSD\n"<<"Graphics: Integrated GPU\n";
			 	cout<<"Price is 295,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
		////////////////////////////// laptop section 2 //////////////////////////////////////////////////
		string lap21(){
			
			cout<<"*Dell XPS 13*\n" <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n" <<"Memory: 8GB or 16GB LPDDR4x RAM\n" <<"Storage: 256GB, 512GB, 1TB, or 2TB PCIe NVMe SSD\n" <<"Graphics: Intel Iris Xe Graphics\n";
			 	cout<<"Price is 394,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap22(){
			cout<<"\n\n\n**Dell XPS 17*\n"<<"Processor: Intel Core i7 or i9 processor (10th or 11th Gen)\n"<<"Memory: 16GB, 32GB, or 64GB DDR4 RAM\n"<<"Storage: 512GB, 1TB, 2TB, or 4TB PCIe NVMe SSD\n"  <<"Graphics: NVIDIA GeForce RTX 2060 or 1650 Ti\n";
			 	cout<<"Price is 299,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string lap23(){
			cout<<"\n\n\n**Dell Inspiration 14 3000 series*\n"<<"Processor: Intel Core i3 or i5 processor (10th Gen)\n"<<"Memory: 4GB or 8GB DDR4 RAM\n"<<"Storage: 128GB, 256GB, or 512GB PCIe NVMe SSD\n" <<"Graphics: Intel UHD Graphics\n";
			 	cout<<"Price is 345,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap24(){
			
			cout<<"\n\n\n***Dell Inspiration 14 7000 series**\n" <<"Processor: Intel Core i5 or i7 processor (10th Gen)\n" <<"Memory: 8GB or 16GB DDR4 RAM\n" <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n" <<"Graphics: Intel UHD Graphics or NVIDIA GeForce MX250\n";
			 	cout<<"Price is 355,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap25(){
			cout<<"\n\n\n***Dell Latitude 5000 series***\n" <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n" <<"Memory: 8GB, 16GB, or 32GB DDR4 RAM\n" <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n"  <<"Graphics: Intel UHD Graphics or NVIDIA GeForce MX330\n";
			 	cout<<"Price is 365,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
		////////////////////////////////////////////////// laptop section 3 ///////////////////////////////////////
		string lap31(){
			
			cout<<"*HP EliteBook 800 Series**\n"  <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n"  <<"Memory: 8GB, 16GB, or 32GB DDR4 RAM\n"  <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n" <<"Graphics: Intel UHD Graphics or NVIDIA GeForce MX330\n";

			 	cout<<"Price is 199,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap32(){
			cout<<"\n\n\n****HP Spectre x360 Series**\n"<<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n"<<"Memory: 8GB, 16GB, or 32GB DDR4 RAM\n"<<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n"<<"Graphics: Intel Iris Xe Graphics or NVIDIA GeForce MX450\n";
			 	cout<<"Price is 210,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string lap33(){
			cout<<"\n\n\n***HP Pavilion x360**\n" <<"Processor: Intel Core i3, i5, or i7 processor (10th or 11th Gen)\n" <<"Memory: 8GB or 16GB DDR4 RAM\n" <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n" <<"Graphics: Intel UHD Graphics\n";
			 	cout<<"Price is 245,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string lap34(){
			cout<<"\n\n\n***HP Pavilion Gaming**\n" <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n" <<"Memory: 8GB or 16GB DDR4 RAM\n" <<"Storage: 512GB or 1TB PCIe NVMe SSD\n"<<"Graphics: NVIDIA GeForce GTX 1650 or 1660 Ti\n";
			 	cout<<"Price is 200,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string lap35(){
			
cout<<"\n\n\n***HP EliteBook x360***\n" <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n" <<"Memory: 8GB, 16GB, or 32GB DDR4 RAM\n" <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n" <<"Graphics: Intel UHD Graphics or NVIDIA GeForce MX330\n";
			 	cout<<"Price is 229,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
		///////////////////////////////////// laptop section 4 ///////////////////////////////////////////////
		string lap41(){
				
			cout<<"*Lenovo ThinkPad X1 Carbon*\n" <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n"<<"Memory: 8GB, 16GB, or 32GB LPDDR4x RAM\n"  <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n" <<"Graphics: Intel UHD Graphics\n";

	 	cout<<"Price is 145,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
		string lap42(){
			cout<<"\n\n\n**Lenovo ThinkPad X-Series**\n" <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n"<<"Memory: 8GB, 16GB, or 32GB DDR4 RAM\n"<<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n"<<"Graphics: Intel UHD Graphics\n";
			 	cout<<"Price is 155,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string lap43(){
			cout<<"\n\n\n***Lenovo IdeaPad 5*\n" <<"Processor: AMD Ryzen 5 or Ryzen 7 processor (4th or 5th Gen)\n" <<"Memory: 8GB or 16GB DDR4 RAM\n"<<"Storage: 256GB or 512GB PCIe NVMe SSD\n"<<"Graphics: Integrated AMD Radeon Graphics\n";
			 	cout<<"Price is 165,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string lap44(){
			cout<<"\n\n\n**Lenovo IdeaPad Flex*\n" <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n" <<"Memory: 8GB or 16GB DDR4 RAM\n" <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n" <<"Graphics: Integrated Intel UHD Graphics or NVIDIA GeForce MX330\n";

			 	cout<<"Price is 175,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string lap45(){
			cout<<"\n\n\n***Lenovo Yoga 9i**\n"<<"Processor: Intel Core i7 or i9 processor (11th Gen)\n"<<"Memory: 8GB, 16GB, or 32GB DDR4 RAM\n"<<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n"<<"Graphics: Intel Iris Xe Graphics\n";
			 	cout<<"Price is 185,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
		////////////////////////////////////////////////////////// laptop section 5 ///////////////////////////////////////////////
		string lap51(){
			cout<<"**Acer Swift 7**\n" <<"Processor: Intel Core i7 processor (8th or 10th Gen)\n" <<"Memory: 8GB or 16GB LPDDR4X RAM\n" <<"Storage: 256GB or 512GB PCIe NVMe SSD\n" <<"Graphics: Intel UHD Graphics\n";
		
			 	cout<<"Price is 79,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap52(){
			cout<<"\n\n\n**Acer Predator Helios 700**\n"<<"Processor: Intel Core i9 processor (9th or 10th Gen)\n"<<"Memory: 16GB, 32GB, or 64GB DDR4 RAM\n" <<"Storage: 512GB, 1TB, or 2TB PCIe NVMe SSD\n" <<"Graphics: NVIDIA GeForce RTX 2080 or 2070\n";		
			 	cout<<"Price is 69,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string lap53(){
		cout<<"\n\n\n***Acer Predator Helios 300*\n"   <<"Processor: Intel Core i5 or i7 processor (9th or 10th Gen)\n"   <<"Memory: 8GB, 16GB, or 32GB DDR4 RAM\n"   <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n"  <<"Graphics: NVIDIA GeForce GTX 1660 Ti or RTX 2060\n";	
			
			 	cout<<"Price is 89,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap54(){
			cout<<"\n\n\n***Acer Aspire 3*\n"  <<"Processor: AMD Ryzen 3, 5, or 7 processor (3rd or 4th Gen)\n"  <<"Memory: 4GB, 8GB, or 12GB DDR4 RAM\n"  <<"Storage: 128GB, 256GB, or 512GB PCIe NVMe SSD\n"  <<"Graphics: Integrated AMD Radeon Graphics\n";

			 	cout<<"Price is 85,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap55(){
			cout<<"\n\n\n**Acer Aspire 5**\n" <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n" <<"Memory: 8GB or 16GB DDR4 RAM\n" <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n" <<"Graphics: Integrated Intel UHD Graphics or NVIDIA GeForce MX350\n";
			
			 	cout<<"Price is 99,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		////////////////////////////////////////////////////////// laptop section 6 ///////////////////////////////////////////////
		string lap61(){
			cout<<"*Microsoft Surface Laptop*\n" <<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n" <<"Memory: 8GB, 16GB, or 32GB LPDDR4x RAM\n" <<"Storage: 128GB, 256GB, 512GB, or 1TB SSD\n" <<"Graphics: Intel Iris Plus Graphics or NVIDIA GeForce GTX 1650 with Max-Q Design\n";

			 	cout<<"Price is 299,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap62(){
			cout<<"\n\n\n***Microsoft Surface Pro*\n"<<"Processor: Intel Core i5 or i7 processor (10th Gen)\n" <<"Memory: 8GB or 16GB LPDDR4x RAM\n" <<"Storage: 128GB, 256GB, 512GB, or 1TB SSD\n" <<"Graphics: Intel Iris Plus Graphics\n";

			 	cout<<"Price is 345,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string lap63(){
			cout<<"\n\n\n**Microsoft Surface Book**\n"<<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n" <<"Memory: 8GB, 16GB, or 32GB LPDDR4x RAM\n" <<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n"<<"Graphics: Intel Iris Plus Graphics or NVIDIA GeForce GTX 1650 with Max-Q Design\n";
			 	cout<<"Price is 355,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap64(){
			cout<<"\n\n\n**Microsoft Surface Go*\n"<<"Processor: Intel Pentium Gold or Core m3 processor (8th Gen)\n" <<"Memory: 4GB or 8GB LPDDR3 RAM\n" <<"Storage: 64GB eMMC, 128GB or 256GB SSD\n" <<"Graphics: Intel UHD Graphics 615\n";
			 	cout<<"Price is 344,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap65(){
			cout<<"\n\n\n**Microsoft Surface Studio**\n" <<"Processor: Intel Core i7 or i9 processor (10th Gen)\n" <<"Memory: 16GB, 32GB, or 64GB DDR4 RAM\n" <<"Storage: 1TB or 2TB PCIe NVMe SSD\n"<<"Graphics: NVIDIA GeForce GTX 1650 or 1660 Ti\n";
			 	cout<<"Price is 365,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
	};
	
	class mobile_models :   public discount,virtual public payment {
	
		////////////////////////////////////////////////// mobile section 1 //////////////////////////////////////////////////////////
		public:
		
		string m11(){
			system("Color 08 ");
			cout << "* iPhone 6 Plus *" << endl << "Display: 5.5-inch Retina HD, 1920 x 1080 pixels" << endl << "Processor: Apple A8 chip with 64-bit architecture, M8 motion coprocessor" << endl << "Memory: Available in 16GB, 64GB, and 128GB storage capacities, no external SD card support" << endl << "Camera: Rear-facing 8-megapixel iSight camera with autofocus, optical image stabilization, and 1080p HD video recording at 60fps. Front-facing 1.2-megapixel camera supporting FaceTime HD" << endl;	
			cout<<"Price is 88,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
	}
		string m12(){
			cout << "* iPhone 13 Pro Max ***" << endl<< "Display: Large OLED, around 6.7 inches, ProMotion technology" << endl<< "Processor: Latest custom-designed chip, likely A15 or A16" << endl<< "Memory: Options from 128GB to 1TB, no external SD card support" << endl << "Camera: Advanced system with wide, ultra-wide, and telephoto options, improved low-light performance, computational photography features, and enhanced optical image stabilization" << endl;

			cout<<"Price is 199,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string m13(){
			cout << "** iPhone 12 Mini* **" << endl<< "Display: 5.4-inch Super Retina XDR, 2340 x 1080 pixels, HDR10, Dolby Vision" << endl<< "Processor: Apple A14 Bionic chip with 6-core CPU, 4-core GPU" << endl<< "Memory: Available in 64GB, 128GB, and 256GB storage capacities, no external SD card support" << endl
			 << "Camera: Dual-camera system with Night mode, Deep Fusion, Smart HDR 3, and 4K Dolby Vision HDR video recording" << endl;
			cout<<"Price is 179,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string m14(){
			cout << "** iPhone XS ***8" << endl << "Display: 5.8-inch Super Retina HD OLED, 2436 x 1125 pixels, HDR10, Dolby Vision" << endl << "Processor: Apple A12 Bionic chip with 64-bit architecture, 6-core CPU, 4-core GPU, next-generation Neural Engine" << endl << "Memory: Available in 64GB, 256GB, and 512GB storage capacities, no external SD card support" << endl << "Camera: Dual-camera system with optical image stabilization, Smart HDR, Portrait mode with advanced bokeh and Depth Control, and 4K video recording at up to 60fps" << endl;

			cout<<"Price is 55,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m15(){
			cout << "** iPhone 8 Plus **" << endl << "Display: 5.5-inch Retina HD display with a resolution of 1920 x 1080 pixels" << endl << "Processor: Apple A11 Bionic chip with 64-bit architecture, Neural Engine, and Embedded M11 motion coprocessor" << endl << "Memory: Available in 64GB and 256GB storage capacities, no external SD card support" << endl << "Camera: Dual 12-megapixel wide-angle and telephoto cameras with optical zoom and digital zoom up to 10x, optical image stabilization for both lenses, and 4K video recording at 24 fps, 30 fps, or 60 fps" << endl;

			cout<<"Price is 90,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
	}
	
	////////////////////////////////////////////////////// mobile sectoion 2 ////////////////////////////////////////////////
		
		string m21(){
			cout << "*Samsung Galaxy S21 Ultra*" << endl << "Display: 6.8-inch Dynamic AMOLED 2X, 3200 x 1440 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 888 or Samsung Exynos 2100, depending on region" << endl << "Memory: Available in configurations of 12GB RAM with 128GB or 256GB storage, or 16GB RAM with 512GB storage, no microSD card support" << endl << "Camera: Sophisticated camera setup including a megapixel wide-angle camera with f/1.8 aperture, megapixel ultra-wide camera, and two 10-megapixel telephoto cameras for optical zoom" << endl;

			cout<<"Price is 150,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string m22(){
			cout << "*Samsung Note 20 Ultra**" << endl << "Display: 6.9-inch Dynamic AMOLED 2X, 3088 x 1440 pixels, 120Hz refresh rate" << endl << "Processor: Qualcomm Snapdragon 865+ or Samsung Exynos 990, depending on region" << endl << "Memory: Available in configurations of 12GB RAM with 128GB, 256GB, or 512GB storage, supports microSD card expansion up to 1TB" << endl<< "Camera: Versatile camera setup including a 108-megapixel wide-angle camera with f/1.8 aperture, 12-megapixel periscope telephoto camera with up to 5x optical zoom, and 12-megapixel ultra-wide camera" << endl;

			cout<<"Price is 200,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string m23(){
			cout << "*Samsung Galaxy S20+*" << endl<< "Display: 6.7-inch Dynamic AMOLED 2X, 3200 x 1440 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 865 or Samsung Exynos 990, depending on region" << endl << "Memory: Available in configurations of 8GB RAM with 128GB storage, supports microSD card expansion up to 1TB" << endl << "Camera: Advanced camera system including a 12-megapixel wide-angle camera, a 64-megapixel telephoto camera with up to 3x hybrid optical zoom, and a 12-megapixel ultra-wide camera";

			cout<<"Price is 230,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string m24(){
			cout << "**Samsung Galaxy S10**" << endl<< "Display: 6.1-inch Dynamic AMOLED, 3040 x 1440 pixels, HDR10+, aspect ratio of 19:9" << endl<< "Processor: Qualcomm Snapdragon 855 or Samsung Exynos 9820, depending on region" << endl << "Memory: Available in configurations of 8GB RAM with 128GB or 512GB storage, supports microSD card expansion up to 1TB" << endl << "Camera: Triple-camera setup including a 12-megapixel wide-angle camera with Dual Aperture, a 12-megapixel telephoto camera, and a 16-megapixel ultra-wide camera, with a 10-megapixel selfie camera on the front" << endl;

			cout<<"Price is 210,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m25(){
			cout << "*Samsung Galaxy Note 9*" << endl<< "Display: 6.4-inch Super AMOLED, 2960 x 1440 pixels" << endl<< "Processor: Qualcomm Snapdragon 845 or Samsung Exynos 9810, depending on region" << endl<< "Memory: Available in configurations of 6GB RAM with 128GB storage, or 8GB RAM with 512GB storage, supports microSD card expansion up to 1TB" << endl<< "Camera: Dual rear camera setup with 12-megapixel wide-angle and telephoto lenses, and an 8-megapixel front-facing camera" << endl;

			cout<<"Price is 255,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
		//////////////////////////////////////////////// mobile section 3 //////////////////////////////
		
		string m31(){
			// Huawei P50 Pro
cout << "Huawei P50 Pro" << endl<< "Display: 6.6-inch OLED, 2700 x 1228 pixels" << endl<< "Processor: Kirin 9000 chipset, octa-core CPU, Mali-G78 MP24 GPU" << endl << "Memory: 12GB RAM, available in 128GB, 256GB, and 512GB storage capacities" << endl << "Camera: Quad-camera setup (50MP + 64MP + 13MP + 40MP) rear, dual-camera (32MP + IR TOF 3D) front" << endl;
		cout<<"Price is 40,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
 string m32(){
		// Huawei Mate 50 Pro
cout << "Huawei Mate 50 Pro" << endl<< "Display: 6.8-inch OLED, 2880 x 1440 pixels" << endl<< "Processor: Kirin 9000E chipset, octa-core CPU, Mali-G78 MP24 GPU" << endl << "Memory: 8GB or 12GB RAM, available in 128GB, 256GB, and 512GB storage capacities" << endl<< "Camera: Quad-camera setup (50MP + 50MP + 12MP + 3D ToF) rear, 32MP front" << endl;
		cout<<"Price is 45,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m33(){
		// Huawei Nova 8 Pro
cout << "Huawei Nova 8 Pro" << endl<< "Display: 6.72-inch OLED, 2676 x 1236 pixels" << endl<< "Processor: Kirin 985 chipset, octa-core CPU, Mali-G77 GPU" << endl<< "Memory: 8GB RAM, available in 128GB and 256GB storage capacities" << endl<< "Camera: Quad-camera setup (64MP + 8MP + 2MP + 2MP)" << endl;
		cout<<"Price is 60,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m34(){
			// Huawei Honor 50 Pro
cout << "Huawei Honor 50 Pro" << endl<< "Display: 6.79-inch OLED, 2340 x 1080 pixels" << endl<< "Processor: Qualcomm Snapdragon 778G 5G chipset, octa-core CPU, Adreno 642L GPU" << endl<< "Memory: 8GB or 12GB RAM, available in 128GB and 256GB storage capacities" << endl << "Camera: Quad-camera setup (108MP + 8MP + 2MP + 2MP)" << endl;
	cout<<"Price is 65,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m35(){
			cout << "Huawei Enjoy 20 Pro" << endl<< "Display: 6.5-inch IPS LCD, 2400 x 1080 pixels" << endl<< "Processor: MediaTek Dimensity 800, octa-core CPU, Mali-G57 GPU" << endl<< "Memory: 6GB or 8GB RAM, available in 128GB storage capacity" << endl  << "Camera: Triple-camera system (48MP + 8MP + 2MP), front-facing 16MP camera" << endl;
cout<<"Price is 69,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
		//////////////////////////////// mobile section 4 ////////////////////////////////////////////////////
		
		string m41(){
		
		cout << "Xiaomi Mi 11 Ultra" << endl<< "Display: 6.81-inch AMOLED, 3200 x 1440 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 888, octa-core CPU, Adreno 660 GPU" << endl<< "Memory: 12GB RAM, available in 256GB and 512GB storage capacities" << endl<< "Camera: Triple-camera setup (50MP + 48MP + 48MP), front-facing 20MP camera" << endl;	
		cout<<"Price is 40,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m42(){
		cout << "Xiaomi Mi 10T Pro" << endl<< "Display: 6.67-inch IPS LCD, 2400 x 1080 pixels, 144Hz refresh rate" << endl << "Processor: Qualcomm Snapdragon 865, octa-core CPU, Adreno 650 GPU" << endl<< "Memory: 8GB RAM, available in 128GB or 256GB storage capacity" << endl<< "Camera: Triple-camera setup (108MP + 13MP + 5MP), front-facing 20MP camera" << endl;
	cout<<"Price is 45,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m43(){
		cout << "Redmi 10 Pro" << endl<< "Display: 6.67-inch Super AMOLED, 2400 x 1080 pixels" << endl<< "Processor: Qualcomm Snapdragon 730G, octa-core CPU, Adreno 618 GPU" << endl<< "Memory: 6GB or 8GB RAM, available in 128GB or 256GB storage capacity" << endl<< "Camera: Quad-camera setup (108MP + 8MP + 2MP + 2MP), front-facing 16MP camera" << endl;
	cout<<"Price is 50,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m44(){
			cout << "Redmi Note 8" << endl<< "Display: 6.3-inch IPS LCD, 2340 x 1080 pixels" << endl<< "Processor: Qualcomm Snapdragon 665, octa-core CPU, Adreno 610 GPU" << endl<< "Memory: 4GB or 6GB RAM, available in 64GB or 128GB storage capacity" << endl<< "Camera: Quad-camera setup (48MP + 8MP + 2MP + 2MP), front-facing 13MP camera" << endl;
cout<<"Price is 70,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m45(){
			cout << "Xiaomi Redmi Note 8" << endl<< "Display: 6.3-inch IPS LCD, 2340 x 1080 pixels" << endl << "Processor: Qualcomm Snapdragon 665, octa-core CPU, Adreno 610 GPU" << endl<< "Memory: 4GB or 6GB RAM, available in 64GB or 128GB storage capacities" << endl<< "Camera: Quad-camera system (48MP + 8MP + 2MP + 2MP), front-facing 13MP camera" << endl;
cout<<"Price is 55,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
		/////////////////////////////////////////////// mobile section 5 ////////////////////////////////////////////////
		string m51(){
			cout << "********** OnePlus 9 Pro *******" << endl<< "Display: 6.7-inch Fluid AMOLED, 3216 x 1440 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 888, octa-core CPU, Adreno 660 GPU" << endl<< "Memory: 8GB or 12GB RAM, available in 128GB or 256GB storage capacities" << endl<< "Camera: Quad-camera system (48MP + 50MP + 8MP + 2MP), front-facing 16MP camera" << endl;

		cout<<"Price is 45,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m52(){
			cout << "******** OnePlus 9R *******" << endl<< "Display: 6.55-inch Fluid AMOLED, 2400 x 1080 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 870, octa-core CPU, Adreno 650 GPU" << endl<< "Memory: 8GB or 12GB RAM, available in 128GB or 256GB storage capacities" << endl << "Camera: Quad-camera system (48MP + 16MP + 5MP), front-facing camera information missing" << endl;

		cout<<"Price is 44,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m53(){
			cout << "******** OnePlus 8 Pro **********" << endl<< "Display: 6.78-inch Fluid AMOLED, 3168 x 1440 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 865, octa-core CPU, Adreno 650 GPU" << endl<< "Memory: 8GB or 12GB RAM, available in 128GB or 256GB storage capacities" << endl << "Camera: Quad-camera system (48MP + 48MP + 8MP + 5MP), front-facing 16MP camera" << endl;

	cout<<"Price is 49,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m54(){
			cout << "******* OnePlus Nord 2 ********" << endl << "Display: 6.43-inch Fluid AMOLED, 2400 x 1080 pixels, 90Hz refresh rate" << endl<< "Processor: MediaTek Dimensity 1200, octa-core CPU, Mali-G77 MC9 GPU" << endl<< "Memory: 6GB, 8GB, or 12GB RAM, available in 128GB or 256GB storage capacities" << endl<< "Camera: Triple-camera system (50MP + 8MP + 2MP), front-facing 32MP camera" << endl;	
		
		cout<<"Price is 55,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string m55(){
			cout << " ********* OnePlus 7T ********" << endl<< "Display: 6.55-inch Fluid AMOLED, 2400 x 1080 pixels, 90Hz refresh rate" << endl << "Processor: Qualcomm Snapdragon 855+, octa-core CPU, Adreno 640 GPU" << endl << "Memory: 8GB RAM, available in 128GB or 256GB storage capacities" << endl << "Camera: Triple-camera system (48MP + 12MP + 16MP), front-facing camera information missing" << endl;
	
		cout<<"Price is 56,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		/////////////////////////////////////////////// mobile section 6 ////////////////////////////////////////////////
		string m61(){
		cout << "Google Pixel 6 Pro" << endl<< "Display: 6.71-inch OLED, 3120 x 1440 pixels, 120Hz refresh rate" << endl<< "Processor: Google Tensor, octa-core CPU, Mali-G78 GPU" << endl<< "Memory: 12GB RAM, available in 128GB, 256GB, and 512GB storage capacities" << endl<< "Camera: Triple-camera setup (50MP + 12MP + 48MP), front-facing 12MP camera" << endl;
		cout<<"Price is 145,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
			
		}
		string m62(){
			cout << "Google Pixel 6" << endl<< "Display: 6.4-inch OLED, 2400 x 1080 pixels, 90Hz refresh rate" << endl<< "Processor: Google Tensor, octa-core CPU, Mali-G78 GPU" << endl<< "Memory: 8GB RAM, available in 128GB or 256GB storage capacities" << endl<< "Camera: Dual-camera setup (50MP + 12MP), front-facing 12MP camera" << endl;
	cout<<"Price is 135,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m63(){
				cout << "Google Pixel 5a" << endl<< "Display: 6.34-inch OLED, 2400 x 1080 pixels" << endl<< "Processor: Qualcomm Snapdragon 765G, octa-core CPU, Adreno 620 GPU" << endl<< "Memory: 6GB RAM, 128GB internal storage" << endl<< "Camera: Dual-camera setup (12.2MP + 16MP), front-facing 8MP camera" << endl;
	cout<<"Price is 139,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m64(){
			cout << "Google Pixel 5" << endl<< "Display: 6.0-inch OLED, 2340 x 1080 pixels, 90Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 765G, octa-core CPU, Adreno 620 GPU" << endl<< "Memory: 8GB RAM, 128GB internal storage" << endl<< "Camera: Dual-camera setup (12.2MP + 16MP), front-facing 8MP camera" << endl;
cout<<"Price is 155,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string m65(){
			cout << "Google Pixel 4a" << endl<< "Display: 5.81-inch OLED, 2340 x 1080 pixels" << endl<< "Processor: Qualcomm Snapdragon 730G, octa-core CPU, Adreno 618 GPU" << endl<< "Memory: 6GB RAM, 128GB internal storage" << endl<< "Camera: Single 12.2MP rear camera, front-facing 8MP camera" << endl;
cout<<"Price is 165,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
		
	};
	
		class watch_models :  public discount,virtual public payment {
	
				////////////////////////////////////////////////// watches section 1 //////////////////////////////////////////////////////////
		public:
		string w11(){
			system("Color 0D ");
			cout<<"*Apple watch Series 7**"<<endl<<"Screen Size: 1.9 inches to 2.5 inches"<<endl<<"Sensors:1.Heart rate sensor  2.Electrocardiogram (ECG) sensor  3.Blood oxygen (SpO2) sensor  4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Ambient light sensor"<<endl<<"Battery Timing: All Day"<<endl<<" Charging Type: 1.Magnetic Charging cable 2. Qi wireless charging";
			
		cout<<"Price is 100,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string w12(){
			cout<<"*Apple watch SE**"<<endl<<"Screen Size:  1.57 inches (40mm case) or 1.78 inches (44mm case) "<<endl<<"Sensors:1.Heart rate sensor  2.Water Resistance Sensors  3.Barometric Altimeter  4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Ambient light sensor"<<endl<<"Battery Timing: upto 18 hours"<<endl<<" Charging Type: 1.Magnetic Charging cable 2. Qi wireless charging";
		cout<<"Price is 80,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string w13(){
			cout<<"Apple watch series 6"<<endl<<"Screen Size:  1.57 inches (40mm case) or 1.78 inches (44mm case)  "<<endl<<"Sensors:1.Optical Heart rate sensor  2.Electrical Heart Sensor (ECG) 3.Blood Oxygen (SpO2) Sensor 4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Ambient light sensor  8.Altimeter"<<endl<<"Battery Timing: All Day"<<endl<<" Charging Type: 1.Magnetic Charging cable 2. Qi wireless charging";
			
		cout<<"Price is 90,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		
		////////////////////////////////////////////////////// watches sectoion 2 ////////////////////////////////////////////////
		
		string w21(){
			cout<<"Samsung GAlaxy Watch 4"<<endl<<"Screen Size:  1.19 inches (40mm diagonal) or 1.36 inches (44mm diagonal)  "<<endl<<"Sensors:1.Heart rate sensor  2.Electrocardiogram (ECG) Sensor 3.Bioelectrical Impedance Analysis (BIA) Sensor 4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Ambient light sensor  8.Barometer"<<endl<<"Battery Timing: 40 to 43 hours"<<endl<<" Charging Type: Magnetic wireless charging ";
			
		cout<<"Price is 40,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string w22(){
			cout<<"Samsung GAlaxy Watch 4 classic"<<endl<<"Screen Size:  1.19 inches (42mm diagonal) or 1.36 inches (46mm diagonal)  "<<endl<<"Sensors:1.Heart rate sensor  2.Electrocardiogram (ECG) Sensor 3.Bioelectrical Impedance Analysis (BIA) Sensor 4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Ambient light sensor  8.Barometer"<<endl<<"Battery Timing: 40 to 56 hours"<<endl<<" Charging Type: Magnetic wireless charging ";
			
		cout<<"Price is 30,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string w23(){
			cout<<"Samsung GAlaxy Watch 3"<<endl<<"Screen Size:  1.2 inches (41mm diagonal) or 1.4 inches (45mm diagonal)  "<<endl<<"Sensors:1.Heart rate sensor  2.Electrocardiogram (ECG) Sensor 3.Blood Pressure Monitor 4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Ambient light sensor  8.Barometer 9.Sleep Tracker"<<endl<<"Battery Timing: 2 days"<<endl<<" Charging Type: Magnetic wireless charging ";
			
		cout<<"Price is 35,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		
		
		/////////////////////////////////////////////// watches section 3 //////////////////////////////
		
		string w31(){
			cout<<"********* Germin Vivoactive 3 Music ***********"<<endl<<"Screen Size: 1.2 inches in diameter  "<<endl<<"Sensors:1.Heart rate sensor  2.Barometric Altimeter 3.Thermometer 4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Ambient light sensor "<<endl<<"Battery Timing: 7 days"<<endl<<" Charging Type:Proprietary charging cable  ";
		
		cout<<"Price is 50,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string w32(){
			cout<<"*********** Germin Fenix 6S Pro ***********"<<endl<<"Screen Size: 1.2 inches in diameter  "<<endl<<"Sensors:1.Heart rate sensor  2.Barometric Altimeter 3.Thermometer 4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Compass 8.Pulse Oximeter "<<endl<<"Battery Timing: 9 days"<<endl<<" Charging Type:Proprietary charging cable  ";
	
		cout<<"Price is 36,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string w33(){
			cout<<"********** Germin Fenix 7X Sapphire Solar *********"<<endl<<"Screen Size: 1.4 inches in diameter  "<<endl<<"Sensors:1.Heart rate sensor  2.Barometer 3.Thermometer 4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Compass 8.Pulse Oximeter 9.Altimeter "<<endl<<"Battery Timing: 20-60 hours in GPS mode"<<endl<<" Charging Type:Proprietary charging cable  ";
		
		cout<<"Price is 29,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
			
};
class ipad_models :  public discount,virtual public payment {
	
				////////////////////////////////////////////////// ipads section 1 //////////////////////////////////////////////////////////
		public:
		string i11(){
			system("Color 0F ");
			cout<<"*Apple Ipad (9th generation,2021)**"<<endl<<"Display: 10.2-inch retina resolution of 2160*1620 pixels"<<endl<<"Processor: A13 Bionic chip"<<endl<<"Memory: Available in 64GB or 256 GB of storage options"<<endl<<"Camera: 8MP rear camera 12MP Front camera"<<endl;
		cout<<"Price is 145,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string i12(){
			cout<<"*Apple Ipad Air(2019)*"<<endl<<"Display: 10.5-inch retina display resolution of 2224*1668 pixels"<<endl<<"Processor: A12 Bionic chip"<<endl<<"Storage: Available in 64GB or 256 GB of storage options"<<endl<<"Camera: 8-MP rear camera 7-MP Face time HD front camera"<<endl<<"Battery Life: Up to 10 hours of battery life"<<endl;
		cout<<"Price is 155,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		string i13(){
			cout<<"*Apple Ipad (8th generation,2020)*"<<endl<<"Display: 10.2-inch Retina display Resolution of 2160*1620 pixels"<<endl<<"Processor: A12 Bionic chip"<<endl<<"Storage: Available in 32GB or 128GB of storage capacity"<<endl<<"Camera: 8MP rear camera capable of capturing 1018p HD video 1.2MP front camera"<<endl<<"Battery Life: Up to 10 hours of battery life"<<endl;
		cout<<"Price is 199,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		
		////////////////////////////////////////////////////// ipads sectoion 2 ////////////////////////////////////////////////
		
		string i21(){
			cout << "****** Samsung Galaxy Tab S8 Ultra ******" << endl<< "Display: 14.6-inch Super AMOLED, 2960 x 1848 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 8cx Gen 3, octa-core CPU, Adreno GPU" << endl<< "Memory: 8GB or 12GB RAM, available in 128GB, 256GB, or 512GB storage capacities" << endl<< "Camera: Dual-camera setup (13MP + 5MP), front-facing 12MP camera" << endl;
			
			cout<<"Price is 100,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string i22(){
				cout << "******** Samsung Galaxy Tab S8+ **********" << endl<< "Display: 12.4-inch Super AMOLED, 2800 x 1752 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 8cx Gen 3, octa-core CPU, Adreno GPU" << endl<< "Memory: 8GB or 12GB RAM, available in 128GB, 256GB, or 512GB storage capacities" << endl<< "Camera: Dual-camera setup (13MP + 5MP), front-facing 12MP camera" << endl;

			cout<<"Price is 99,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string i23(){
			cout << "******** Samsung Galaxy Tab S7 FE *******" << endl<< "Display: 12.4-inch TFT LCD, 2560 x 1600 pixels, 60Hz refresh rate" << endl << "Processor: Qualcomm Snapdragon 750G, octa-core CPU, Adreno 619 GPU" << endl << "Memory: 4GB or 6GB RAM, available in 64GB or 128GB storage capacities" << endl<< "Camera: Single 8MP rear camera, 5MP front-facing camera" << endl;

		cout<<"Price is 95,999"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}	
		}
		//////////////////////////////////////////////// ipads section 3 //////////////////////////////
		
		string i31(){
				cout << "********* Huawei MatePad Pro 12.6 **********" << endl<< "Display: 12.6-inch OLED, 2560 x 1600 pixels, 120Hz refresh rate" << endl<< "Processor: Huawei Kirin 9000E, octa-core CPU, Mali-G78 GPU" << endl<< "Memory: 8GB RAM, available in 128GB or 256GB storage capacities" << endl<< "Camera: Dual-camera setup (13MP + 8MP), front-facing 8MP camera" << endl;
			cout<<"Price is 85,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string i32(){
			cout << "********* Huawei MatePad 11 ********" << endl<< "Display: 10.95-inch IPS LCD, 2560 x 1600 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 865, octa-core CPU, Adreno 650 GPU" << endl<< "Memory: 6GB RAM, available in 64GB or 128GB storage capacities" << endl<< "Camera: Dual-camera setup (13MP + 5MP), front-facing 8MP camera" << endl;

			cout<<"Price is 80,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string i33(){
			cout << "******* Huawei MatePad 10.4 ********" << endl << "Display: 10.4-inch IPS LCD, 2000 x 1200 pixels, 60Hz refresh rate" << endl<< "Processor: HiSilicon Kirin 810, octa-core CPU, Mali-G52 GPU" << endl << "Memory: 4GB or 6GB RAM, available in 64GB or 128GB storage capacities" << endl<< "Camera: Single 8MP rear camera, 8MP front-facing camera" << endl;
			cout<<"Price is 90,000"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		
	};


// class model
class models : public laptop_models , public mobile_models ,public ipad_models , public watch_models {
	
	public:
		
		//////////////////////////////////////////////////////////// laptops //////////////////////////////////////////////////////////////////////////
		
		string lap1(){
			cout<<"Avalible Models of Apple (MacBook)"<<endl<<endl; 
			cout<<"1.MacBook Air (M1, 2020)"<<endl;
			cout<<"2.MacBook Pro (13-inch, M1, 2020)"<<endl;
			cout<<"3.MacBook Pro (16-inch, 2019)"<<endl;
			cout<<"4.MacBook (Retina, 12-inch, 2017)"<<endl;
			cout<<"5.MacBook Pro (13-inch, 2020, Four Thunderbolt 3 ports)"<<endl<<endl;
			
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap11();
				
			}else if( a==2){
				
				cout<<lap12();
			}else if (a==3){
				cout<<lap13();
			}else if(a==4){
				cout<<lap14();
			}else if(a==5){
				cout<<lap15();
			}
		}
		string lap2(){
			cout<<"Avalible Models of Dell (XPS, Inspiron, Latitude)"<<endl<<endl;
			cout<<"1.Dell XPS 13"<<endl; 
			cout<<"2.Dell XPS 17"<<endl; 
			cout<<"3.Dell Inspiron 14 3000 Series"<<endl; 
			cout<<"4.Dell Inspiron 17 7000 Series"<<endl; 
			cout<<"5.Dell Latitude 5000 Series"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap21();
				
			}else if( a==2){
				
				cout<<lap22();
			}else if (a==3){
				cout<<lap23();
			}else if(a==4){
				cout<<lap24();
			}else if(a==5){
				cout<<lap25();
			}
		}
		string lap3(){
			cout<<"Avalible Models of HP (Pavilion, Spectre, EliteBook)"<<endl<<endl; 
			cout<<"1.HP EliteBook 800 Series"<<endl; 
			cout<<"2.HP Spectre x360 15"<<endl; 
			cout<<"3.HP Pavilion x360"<<endl; 
			cout<<"4.HP Pavilion Gaming"<<endl; 
			cout<<"5.HP EliteBook x360"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap31();
				
			}else if( a==2){
				
				cout<<lap32();
			}else if (a==3){
				cout<<lap33();
			}else if(a==4){
				cout<<lap34();
			}else if(a==5){
				cout<<lap35();
			}
		}
		string lap4(){
			cout<<"Avalible Models of Lenovo (ThinkPad, IdeaPad, Yoga)"<<endl<<endl;  
			cout<<"1.Lenovo ThinkPad X1 Carbon"<<endl; 
			cout<<"2.Lenovo ThinkPad X-series (e.g., X1 Yoga, X1 Extreme)"<<endl; 
			cout<<"3.Lenovo IdeaPad 5"<<endl; 
			cout<<"4.Lenovo IdeaPad Flex"<<endl; 
			cout<<"5.Lenovo Yoga 9i"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap41();
				
			}else if( a==2){
				
				cout<<lap42();
			}else if (a==3){
				cout<<lap43();
			}else if(a==4){
				cout<<lap44();
			}else if(a==5){
				cout<<lap45();
			}
		}
		string lap5(){
			cout<<"Avalible Models of Acer (Aspire, Predator, Swift) "<<endl<<endl; 
			cout<<"1.Acer Swift 7"<<endl; 
			cout<<"2.Acer Predator Helios 700"<<endl; 
			cout<<"3.Acer Predator Helios 300"<<endl; 
			cout<<"4.Acer Aspire 3"<<endl; 
			cout<<"5.Acer Aspire 5"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap51();
				
			}else if( a==2){
				
				cout<<lap52();
			}else if (a==3){
				cout<<lap53();
			}else if(a==4){
				cout<<lap54();
			}else if(a==5){
				cout<<lap55();
			}
		}
		string lap6(){
			cout<<"Avalible Models of Microsoft (Surface) "<<endl<<endl; 
			cout<<"1.Surface Laptop"<<endl; 
			cout<<"2.Surface Pro"<<endl; 
			cout<<"3.Surface Book"<<endl; 
			cout<<"4.Surface Go"<<endl; 
			cout<<"5.Surface Studio"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap61();
				
			}else if( a==2){
				
				cout<<lap62();
			}else if (a==3){
				cout<<lap63();
			}else if(a==4){
				cout<<lap64();
			}else if(a==5){
				cout<<lap65();
			}
		}
		
		//////////////////////////////////////////////////////////// mobile phone //////////////////////////////////////////////////////////////////////
		
		string m1(){
			cout<<"Avalible Models of Apple (iPhone)"<<endl<<endl;  
			cout<<"1.iPhone 6 Plus"<<endl; 
			cout<<"2.iPhone 13 Pro Max"<<endl; 
			cout<<"3.iPhone 12 mini"<<endl; 
			cout<<"4.iPhone XS Max"<<endl; 
			cout<<"5.iPhone 8 Plus"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m11();
				
			}else if( a==2){
				
				cout<<m12();
			}else if (a==3){
				cout<<lap13();
			}else if(a==4){
				cout<<m14();
			}else if(a==5){
				cout<<m15();
			}
		}
		string m2(){
			cout<<"Avalible Models of Samsung (Galaxy series)"<<endl<<endl; 
			cout<<"1.Galaxy S21 Ultra"<<endl; 
			cout<<"2.Galaxy Note 20 Ultra"<<endl; 
			cout<<"3.Galaxy S20+"<<endl; 
			cout<<"4.Galaxy S10"<<endl; 
			cout<<"5.Galaxy Note 9"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m21();
				
			}else if( a==2){
				
				cout<<m22();
			}else if (a==3){
				cout<<m23();
			}else if(a==4){
				cout<<m24();
			}else if(a==5){
				cout<<m25();
			}
		}
		string m3(){
		cout<<"Avalible Models of Huawei"<<endl<<endl; 	
		    cout<<"1.Huawei P50 Pro"<<endl; 
			cout<<"2.Huawei Mate 40 Pro"<<endl; 
			cout<<"3.Huawei Nova 8 Pro"<<endl; 
			cout<<"4.Huawei Honor 50 Pro"<<endl; 
			cout<<"5.Huawei Enjoy 20 Pro"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m31();
				
			}else if( a==2){
				
				cout<<m32();
			}else if (a==3){
				cout<<m33();
			}else if(a==4){
				cout<<m34();
			}else if(a==5){
				cout<<m35();
			}
		}
		string m4(){
			 cout<<"Avalible Models of Xiaomi"<<endl<<endl; 
			 cout<<"1.Xiaomi Mi 11 Ultra"<<endl; 
			cout<<"2.Xiaomi Mi 11"<<endl; 
			cout<<"3.Xiaomi Mi 10T Pro"<<endl; 
			cout<<"4.Xiaomi Redmi Note 10 Pro"<<endl; 
			cout<<"5.Xiaomi Redmi Note 8"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m41();
				
			}else if( a==2){
				
				cout<<m42();
			}else if (a==3){
				cout<<m43();
			}else if(a==4){
				cout<<m44();
			}else if(a==5){
				cout<<m45();
			}
		}
		string m5(){
			cout<<"Avalible Models of OnePlus"<<endl<<endl; 
			cout<<"1.OnePlus 9 Pro"<<endl; 
			cout<<"2.OnePlus 9R"<<endl; 
			cout<<"3.OnePlus 8 Pro"<<endl; 
			cout<<"4.OnePlus Nord 2"<<endl; 
			cout<<"5.OnePlus 7T Pro"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m51();
				
			}else if( a==2){
				
				cout<<m52();
			}else if (a==3){
				cout<<m53();
			}else if(a==4){
				cout<<m54();
			}else if(a==5){
				cout<<m55();
			}
		}
		string m6(){
			cout<<"Avalible Models of Google (Pixel)"<<endl<<endl; 
			cout<<"1.Google Pixel 4a 5G"<<endl; 
			cout<<"2.Google Pixel 3a"<<endl; 
			cout<<"3.Google Pixel 6 Pro"<<endl; 
			cout<<"4.Google Pixel 5"<<endl; 
			cout<<"5.Google Pixel 4a 5G"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m61();
				
			}else if( a==2){
				
				cout<<m62();
			}else if (a==3){
				cout<<m63();
			}else if(a==4){
				cout<<m64();
			}else if(a==5){
				cout<<m65();
			}
		 
		}
			////////////////////////////////////////////////////////////////// ipads //////////////////////////////////////////////////////////////////////////
		string i1(){
			cout<<"Avalible Models of Apple (iPad)"<<endl<<endl;  
			cout<<"1.iPad (9th generation, 2021)"<<endl; 
			cout<<"2.iPad Air (2019)"<<endl; 
			cout<<"3.iPad (8th generation, 2020)"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<i11();
				
			}else if( a==2){
				
				cout<<i12();
			}else if (a==3){
				cout<<i13();
			} 
		}
		string i2(){
			cout<<"Avalible Models of Samsung (Galaxy Tab series)"<<endl<<endl; 
			cout<<"1.Samsung Galaxy Tab S8 Ultra"<<endl; 
			cout<<"2.Samsung Galaxy Tab S8+"<<endl; 
			cout<<"3.Samsung Galaxy Tab S7 FE"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<i21();
				
			}else if( a==2){
				
				cout<<i22();
			}else if (a==3){
				cout<<i23();
			}
		}
		string i3(){
			cout<<"Avalible Models of Huawei (MatePad series)"<<endl<<endl; 
			cout<<"1.Huawei MatePad Pro 12.6"<<endl; 
			cout<<"2.Huawei MatePad 11"<<endl; 
			cout<<"3.Huawei MatePad 10.4"<<endl;  
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<i31();
				
			}else if( a==2){
				
				cout<<i32();
			}else if (a==3){
				cout<<i33();
			}
		}
		/////////////////////////////////////////////////// watches /////////////////////////////////////////////////////////////////////////////
			string w1(){
			cout<<"Avalible Models of Apple (Apple Watch)"<<endl<<endl;  
			cout<<"1.Apple Watch Series 7"<<endl; 
			cout<<"2.Apple Watch SE"<<endl; 
			cout<<"3.Apple Watch Series 6"<<endl; 
		cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<w11();
				
			}else if( a==2){
				
				cout<<w12();
			}else if (a==3){
				cout<<w13();
			}
		}
		string w2(){
			cout<<"Avalible Models of Samsung (Galaxy Watch) "<<endl<<endl;
			cout<<"1.Samsung Galaxy Watch 4"<<endl; 
			cout<<"2.Samsung Galaxy Watch 4 Classic"<<endl; 
			cout<<"3.Samsung Galaxy Watch 3"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<w21();
				
			}else if( a==2){
				
				cout<<w22();
			}else if (a==3){
				cout<<w23();
			}
		}
	
			string w3(){
		              cout<<"Avalible Models of Garmin (Forerunner, Fenix, Vivoactive)"<<endl<<endl; 
			cout<<"1.Garmin Vivoactive 3 Music"<<endl; 
			cout<<"2.Garmin Fenix 6S Pro"<<endl; 
			cout<<"3.Garmin Fenix 7X Sapphire Solar"<<endl;  
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<w31();
				
			}else if( a==2){
				cout<<w32();
			}else if (a==3){
				cout<<w33();
			}	
		
		}
		
};
// mobile class

class mobile: public models{
	
	public:
		string mbrands(){
			system("Color 85 ");
			cout<<"1.Apple (iPhone)"<<endl;
			cout<<"2.Samsung (Galaxy series)"<<endl;
			cout<<"3.Huawei"<<endl;
			cout<<"4.Xiaomi"<<endl;
			cout<<"5.OnePlus"<<endl;
			cout<<"6.Google (Pixel)"<<endl<<endl;
			cout<<"Which Brand Models You Want To Check : " ;
			int a;
			cin>>a;
			switch (a){
				case 1:
					cout<<m1(); 
					break;
			    case 2:
				    cout<<m2();
					break;
				case 3:
					cout<<m3(); 
					break;
			    case 4:
				    cout<<m4();
					break;
				case 5:
					cout<<m5(); 
					break;
			    case 6:
				    cout<<m6();
					break;	
				default:
				cout<<"choice Correct option ";			
								
					
			}
		}
		
};
// ipads class

class ipads:public models{
	
	public:
	
		string ibrands(){
				system("Color 61");
	    cout<<"1.Apple (iPad) "<<endl;
	    cout<<"2.Samsung (Galaxy Tab series) "<<endl;
	    cout<<"3.Huawei (MatePad series) "<<endl;
	    cout<<"Which Brand watches You Want to buy : "; 
			int a;
			cin>>a;
			switch (a){
				case 1:
					cout<<i1(); 
					break;
			    case 2:
				    cout<<i2();
					break;
				case 3:
					cout<<i3(); 
					break;	
				default:
				cout<<"choice Correct option ";			
								
					
			}
		}
};
//smart watches class
class smart_watches:public models{
	
	public:
		string wbrands(){
		   system("Color 04 ");  
		     cout<<" "<<endl;
	    cout<<"1.Apple (Apple Watch) "<<endl;
	    cout<<"2.Samsung (Galaxy Watch) "<<endl;
		cout<<"3.Garmin (Forerunner, Fenix, Vivoactive) "<<endl;
	    cout<<"Which Brand Models You Want To Check : ";
	    int a;
	    cin>>a;
	    switch(a){
	    	
	    	case 1:
	    		cout<<w1();
	    		break;
	    	case 2:
			    cout<<w2();
				break;
			case 3:
			    cout<<w3();
				break;
			default:
			    cout<<"choice the correct option";						
		}
		}
		
		
};
//Range class

class range : virtual public payment{
	 public :
	 ///////////////////// range product details///////////////////////////////////
			
		string	a11(){
cout<<"********** Dell XPS 13 or 15 **************"<<endl<<"Processor:  Core i3, i5, and i7 processors"<<endl<<"Memory: 16GB or 32GB"<<endl<<"Storage: 128GB, 256GB, 512GB"<<endl<<"Graphics:  Intel Iris Xe Graphics or Intel UHD"<<endl;

			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 
			 	string	a12(){
 cout<<"\n\n\n********** MacBook Pro 13-inch 2020 (Four Thunderbolt 3 ports) ************\n" <<"Processor: Apple M1 chip with 8-core CPU and 8-core GPU\n" <<"Memory: 8GB or 16GB unified memory\n" <<"Storage: 256GB, 512GB, 1TB, or 2TB SSD\n"<<"Graphics: Integrated GPU\n";

			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 
			 	string	a13(){
		cout<<"*********** Apple watch Series 7 ************"<<endl<<"Screen Size: 1.9 inches to 2.5 inches"<<endl<<"Sensors:1.Heart rate sensor  2.Electrocardiogram (ECG) sensor  3.Blood oxygen (SpO2) sensor  4.Accelerometer   5.Gyroscope  6.GPS (Global Positioning System)  7.Ambient light sensor"<<endl<<"Battery Timing: All Day"<<endl<<" Charging Type: 1.Magnetic Charging cable 2. Qi wireless charging";

			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 
			 	string	a14(){
 cout << "*********** Samsung Galaxy A72 ***********" << endl<< "Display: 6.7 inches, 1080 x 2400 pixels, 90Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 720G" << endl<< "Memory:  6GB or 8GB RAM, available in 128GB, 256GB" << endl<< "Camera: Quard-camera setup (64MP + 12MP + 8MP + 5MP), front-facing 32MP camera" << endl;

			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a15(){
cout<<"************ Apple Ipad (9th generation,2021) ***********"<<endl<<"Display: 10.2-inch retina resolution of 2160*1620 pixels"<<endl<<"Processor: A13 Bionic chip"<<endl<<"Memory: Available in 64GB or 256 GB of storage options"<<endl<<"Camera: 8MP rear camera 12MP Front camera"<<endl;
 
 			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a21(){
cout<<"******** Microsoft Surface LAptop studio **************"<<endl<<"Processor: Intel Core processors"<<endl<<"Memory: 8GB to 32GB of RAM"<<endl<<"Storage: 256GB to 2TB"<<endl<<"Graphics: Intel Iris Xe Graphics or dedicated NVIDIA GeForce RTX graphics"<<endl;;
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a22(){
cout << "***********  Xiaomi Mi 11 Ultra *************" << endl<< "Display: 6.81 inches, 1440 x 3200 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 888" << endl<< "Memory:   8GB or 12GB RAM, available in 256GB, 512GB" << endl<< "Camera: Triple-camera setup (50MP + 48MP + 48MP), front-facing 20MP camera" << endl;
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a23(){
 cout << "********* Samsung Galaxy S21 *************" << endl<< "Display: 6.2 inches,  1080 x 2400 pixels, 120Hz refresh rate" << endl<< "Processor: Exynos 2100 (Global) or Qualcomm Snapdragon 888 (USA/China)" << endl<< "Memory: 8GB RAM, available in 128GB, 256GB" << endl<< "Camera: Triple-camera setup (12MP + 12MP + 64MP), front-facing 10MP camera" << endl;
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a24(){
cout<<"********* Omega Seamaster Diver 300M ************"<<endl<<"Screen Size:  42mm"<<endl<<endl<<"Battery Timing: Does not required Battery"<<endl;
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a25(){
cout<<" ********** ipad pro 12.9 inches ************8"<<endl<<"Display: 12.9 inches display resolution of  2732 x 2048 pixels"<<endl<<"Processor: Apple M1 chip with 8-core CPU and 8-core GPU"<<endl<<"Storage: Available in 128GB, 256GB, 512GB, 1TB, and 2TB of storage options"<<endl<<"Camera: 12-MP and 10-MP rear camera 12-MP Face time HD front camera"<<endl<<"Battery Life: Up to 10 hours of battery life"<<endl;
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a31(){
cout<<"******** Lenovo ThinkPad X1 Carbon *************\n"<<"Processor: Intel Core i5 or i7 processor (10th or 11th Gen)\n"<<"Memory: 8GB, 16GB, or 32GB LPDDR4x RAM\n"<<"Storage: 256GB, 512GB, or 1TB PCIe NVMe SSD\n"<<"Graphics: Intel UHD Graphics\n";
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a32(){
 cout << " *********** Google Pixel 6 Pro ***********" << endl<< "Display: 6.71-inch OLED, 3120 x 1440 pixels, 120Hz refresh rate" << endl<< "Processor: Google Tensor, octa-core CPU, Mali-G78 GPU" << endl<< "Memory: 12GB RAM, available in 128GB, 256GB, and 512GB storage capacities" << endl<< "Camera: Triple-camera setup (50MP + 12MP + 48MP), front-facing 12MP camera" << endl;
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a33(){
cout << " ********** oneplus 10 Pro *********** " << endl<< "Display:  6.7 - 6.9 inches,  1440 x 3216 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 8 Gen 2" << endl<< "Memory: 8GB , 12GB RAM, available in 128GB, 256GB" << endl<< "Camera: Quard-camera setup (48MP + 16MP + 10MP + 10Mb), front-facing 32MP camera" << endl;
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a34(){
cout<<"  ******** ipad mini(latest generation) *************"<<endl<<"Display:8.3 inches display resolution of  2266 x 1488 pixels"<<endl<<"Processor: Apple A15 Bionic chip with Neural Engine"<<endl<<"Storage: Available in 64GB, 256GB of storage options"<<endl<<"Camera: 12-MP  real camera 12-MP Face time HD front camera"<<endl<<"Battery Life: Up to 10 hours of battery life"<<endl;
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a35(){
  cout<<"\n\n\n********* MacBook Pro Retina 12-inch 2017 *******8**\n" <<"Processor: Intel Core m3, m5, or m7 processor (dual-core)\n" <<"Memory: 8GB or 16GB of 1866MHz LPDDR3 RAM\n"<<"Storage: 256GB, 512GB, or 1TB PCIe-based SSD\n"  <<"Graphics: Intel HD Graphics 615\n";
 

			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a41(){
 cout<<"********* MAC BOOK MI-2020\n ***********"<<"Processor: Apple M1 chip with 8-core CPU and 8-core GPU\n"<<"Memory: 8GB or 16GB unified memory\n"<<"Storage: 256GB, 512GB, 1TB, or 2TB SSD\n"<<"Battery Life: Up to 18 hours of web browsing / Up to 20 hours of video playback\n";

			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a42(){
cout<<"\n\n*********** MacBook Pro 16-inch 2019 ***********\n"<<"Processor: 9th-generation Intel Core i7 or Core i9 processor (6-core or 8-core)\n"<<"Memory: 16GB, 32GB, or 64GB DDR4 RAM\n"<<"Storage: 512GB, 1TB, 2TB, 4TB, or 8TB SSD\n"<<"Graphics: AMD Radeon Pro 5300M with 4GB of GDDR6 memory or AMD Radeon Pro 5500M with 4GB of GDDR6 memory\n";
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a43(){
	 cout<<"*********** Richard Mille RM 50-03 McLaren F1 ************* "<<endl<<"Screen Size: 44mm to 50mm "<<endl<<endl<<"Battery Timing: Does not required Battery it relies on mainspring"<<endl;
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a44(){
	cout << "********* Sirin Labs Solarin ************" << endl<< "Display:  5.5 inches,  1440 x 2560 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 810" << endl<< "Memory: 8GB  RAM, available in 128GB" << endl<< "Camera: 48MP , front-facing 8MP camera" << endl;
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
			 	string	a45(){
cout << " ********Lamborghini Alpha-One *********" << endl<< "Display: 5.5 inches,  1440 x 2560 pixels, 120Hz refresh rate" << endl<< "Processor: Qualcomm Snapdragon 810" << endl<< "Memory: 4GB RAM, available in 128GB" << endl<< "Camera: 20MP , front-facing 8 MP camera" << endl;
 
			 	cout<<"press 1 to confirm the order :"<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}
			 } 
		//////////////////////// end range product details////////////////////////////////////	 
	    void p_range(){
	    	system("Color A9 ");
	    	cout<<"1.30k - 80k "<<endl;
	    	cout<<"2.80k- 170k "<<endl;
	    	cout<<"3.170k - 250k "<<endl;
	    	cout<<"4.More than 300k "<<endl;
	    		cout<<"Select Your Price Range : ";
	    		int a;
	    		cin>>a;
				if(a==1){
					cout<<endl;
					cout<<endl;
					cout<<"****** Avalible Product in Price Range (30k - 80k) *******"	<<endl<<endl;
					cout<<"1.Laptop: Dell XPS 13 or 15 (price = 65k)"<<endl;
					cout<<"2.Laptop: MacBook Air or MacBook pro (price = 70k)"<<endl;
					cout<<"3.Watch: Apple watch series 7 (price = 50k)"<<endl;
					cout<<"4.Mobile: Samsung GAlaxy A72 (price = 45k)"<<endl;
					cout<<"5.Ipads: ipad 9th generation (price = 55k)"<<endl<<endl;
					cout<<"select the product for detaisl ";
					
					int a;
					cin>>a;
					if (a==1){
						cout<<a11();					
					}else if(a==2){
						cout<<a12();
					}else if(a==3){
						cout<<a13();
					}else if(a==4){
						cout<<a14();
					}else if (a==5){
						cout<<a15();
					}
									
				}else if(a==2){
						cout<<endl;
					cout<<endl;
					cout<<"***** Avalible Product in Price Range (80k - 170k) ******"<<endl<<endl	;
					cout<<"1.Laptop: Microsoft Surface Laptop Studio (price = 150k)"<<endl;
					cout<<"2.Mobile: Xiaomi Mi 11 Ultra (price = 90k)"<<endl;
					cout<<"3.Mobile: Samsung Galaxy S21 Ultra (price = 95k)"<<endl;
					cout<<"4.Watch: Omega Seamaster Diver 300M (price = 100k)"<<endl;
					cout<<"5.Ipads: ipad pro 12.9 inches (price = 120k)"<<endl;
					int a;
					cin>>a;
					if (a==1){
						cout<<a21();					
					}else if(a==2){
						cout<<a22();
					}else if(a==3){
						cout<<a23();
					}else if(a==4){
						cout<<a24();
					}else if (a==5){
						cout<<a25();
					}
				
					
				}else if(a==3){
						cout<<endl;
					cout<<endl;
					cout<<"******** Avalible Product in Price Range (170k - 250k) ********* "	<<endl<<endl;
					cout<<"1.Laptop: Lenovo ThinkPad X1 Carbon (price = 220k)"<<endl;
					cout<<"2.Mobile: Google Pixel 6 Pro (price = 185k)"<<endl;
					cout<<"3.Mobile: oneplus 10 Pro (price = 210k)"<<endl;
					cout<<"4.Ipads: ipad mini(latest generation) (price = 190k)"<<endl;
	                cout<<"5.Laptop: MacBook Pro Retina (price = 245k)"<<endl;
	                int a;
					cin>>a;
					if (a==1){
						cout<<a31();					
					}else if(a==2){
						cout<<a32();
					}else if(a==3){
						cout<<a33();
					}else if(a==4){
						cout<<a34();
					}else if (a==5){
						cout<<a35();
					}
				}else if(a==4){
						cout<<endl;
					cout<<endl;
					cout<<"******** Avalible Product in Price Range (250k above) ******* "<<endl<<endl	;
					cout<<"1.Laptop: MAC BOOK MI-2020 (price = 265k)"<<endl;
					cout<<"2.Laptop: Macbook pro 16-inch 2019 (price = 290k)"<<endl;
				    cout<<"3.Watch: Richard Mille RM 50-03 McLaren F1 (price = 250k)"<<endl;
					cout<<"4.Mobile: Sirin Labs Solarin (price = 275k)"<<endl;
					cout<<"5.Mobile: Lamborghini Alpha-One (price = 299k)"<<endl;
					int a;
					cin>>a;
					if (a==1){
						cout<<a41();					
					}else if(a==2){
						cout<<a42();
					}else if(a==3){
						cout<<a43();
					}else if(a==4){
						cout<<a44();
					}else if (a==5){
						cout<<a45();
					}
		
				}	    	
		}
		
	
};

// laptops class

class laptops : public models /* public selection*/{
	
	public:
		
		string lapbrands(){
			system("Color fC ");
			cout<<"1.Apple (MacBook)"<<endl;
			cout<<"2.Dell (XPS, Inspiron, Latitude) "<<endl;
			cout<<"3.HP (Pavilion, Spectre, EliteBook) "<<endl;
			cout<<"4.Lenovo (ThinkPad, IdeaPad, Yoga) "<<endl;
			cout<<"5.Acer (Aspire, Predator, Swift) "<<endl;
			cout<<"6.Microsoft (Surface) "<<endl<<endl;
			cout<<"Which Brand Laptop You Want to buy : "; 
			int a;
			cin>>a;
			switch (a){
				case 1:
					cout<<lap1(); 
					break;
			    case 2:
				    cout<<lap2();
					break;
				case 3:
					cout<<lap3(); 
					break;
			    case 4:
				    cout<<lap4();
					break;
				case 5:
					cout<<lap5(); 
					break;
			    case 6:
				    cout<<lap6();
					break;	
				default:
				cout<<"choice Correct option ";			
								
					
			}
			
		}
			
};

//selection class

class selection : public laptops, public mobile , virtual public about_company ,public ipads,public smart_watches , public range{
	
	public:
	
	void get(){
		 int r;
	     cin>>r;
	
	 //string getnum;
	
	// getline(cin,getnum);
	 if( r==1      /*getnum=="mobile phone" || getnum=="Mobile Phone" */){
	 	                 
						    cout<<mbrands();
						  
	 }else if(  r==2 /*getnum=="laptops" || getnum=="Laptops"*/){
	 	
	 	                    cout<<lapbrands();

    }else if ( r==3 ){
    	                    cout<<ibrands(); 
	}else if( r==4){
		                    cout<<wbrands();      	
    }else if( r==5){
                              p_range(); 	
    }
    else if( r==6){
                            cout<<company_details();  
    }
    
}	

};

int main()
{
	
	Product P;	
	selection S;
	S.get();
	customer_details obj;
	obj.get_details();

	

}
