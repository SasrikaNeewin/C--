#include <iostream>
#include<cstring>
#include<string>
using namespace std;
#define SIZE 2

//unregisteredUser class
class UnregisteredUser{
	protected:
		char name[20];
		char email[30];
		char address[50];
	public:
		UnregisteredUser();
		UnregisteredUser(const char rname[],const char remail[],const char raddress[] );
		void registeruser();
		void updateuser();
		void regdetails();
	
};

//unregisteredUser class implemetation
UnregisteredUser::UnregisteredUser(){}
UnregisteredUser::UnregisteredUser(const char rname[],const char remail[],const char raddress[] ){
	strcpy(name,rname);
	strcpy(email,remail);
	strcpy(address,raddress);
}
void UnregisteredUser::registeruser(){}
void UnregisteredUser::updateuser(){}
void UnregisteredUser::regdetails()
{
	cout<<"Name :"<<name<<endl;
	cout<<"Email :"<<email<<endl;
	cout<<"Address :"<<address<<endl;
}

//registered user class
class RegisteredUser:public UnregisteredUser {
	private:
		int userId;
		char userName[20];
		char password[20];
	public:
		RegisteredUser();
		RegisteredUser(int no,const char mname[],const char mpassword[]);
		void login();
		void updateAccount();
		void displayRegisterUserDetails();
};
//register user class implemetation
RegisteredUser::RegisteredUser(){}
RegisteredUser::RegisteredUser(int no,const char mname[],const char mpassword[]){
	userId=no;
	strcpy(userName,mname);
	strcpy(password,mpassword);
}
void RegisteredUser::login(){}
void RegisteredUser::updateAccount(){}
void RegisteredUser::displayRegisterUserDetails(){
	cout<<"User ID :"<<userId<<endl;
	cout<<"Name:"<<userName<<endl;
	cout<<"Password:"<<password<<endl;
	
}

//cart class
class cart {
	private:
		int cartId;
	public:
		cart();
		cart(int ctno);
		void displayCart();
		void addProduct();
};

//cart class implemetation
cart::cart(){}
cart::cart(int ctno){
	cartId=ctno;
}
void cart::addProduct(){}
void cart::displayCart(){
	cout<<"Cart Number :"<<cartId<<endl;
	
}

//payment class
class payment{
	private:
		int paymentId;
		float paymentAmount;
	public:
		payment();
		payment(int pid,float payamout);
		void displayPayment();
		void confirmPayment();
		void validate();
		void paymentDetails();
};

//payment class implentation
payment::payment(){}
payment::payment(int pid,float payamout){
	paymentId=pid;
	paymentAmount=payamout;
}
void payment::displayPayment(){}
void payment::confirmPayment(){}
void payment::validate(){}
void payment::paymentDetails(){
	cout<<"Payment ID:"<<paymentId<<endl;
	cout<<"Amount:"<<paymentAmount<<endl;
	
}

//enquiries class
class enquiries{
	private:
		int enquiryId;
		char enquiryType[30];
		char enquiryDescription[30];
	
	public:
		enquiries();
		enquiries(int emid,const char emtype[30],const char emdescription[30]);
		void addEnquiry();
		void displayEnquiryDetails();
};	

//class implentation of enquiries
enquiries::enquiries(){}
enquiries::enquiries(int emid,const char emtype[],const char emdescription[]){
	enquiryId=emid;
	strcpy(enquiryType,emtype);
	strcpy(enquiryDescription,emdescription);	
}
void enquiries::addEnquiry(){}
void enquiries::displayEnquiryDetails(){
	cout<<"Enquiry ID:"<<enquiryId<<endl;
	cout<<"Enquiry Type:"<<enquiryType<<endl;
	cout<<"Enquiry Description:"<<enquiryDescription<<endl;

}

//product class
class product{
	private:
		int productId;
		char productName[30];
		char ProductDescription[30];
	
	public:
		product();
		product(int proid,const char prodname[30],const char proddescription[30]);
		void displayProductDetails();
};	

//class implentation of product
product::product(){}
product::product(int proid,const char prodname[30],const char proddescription[30]){
	productId=proid;
	strcpy(productName,prodname);
	strcpy(ProductDescription,proddescription);	
}
void product::displayProductDetails(){
	cout<<"Product ID:"<<productId<<endl;
	cout<<"Product Name:"<<productName<<endl;
	cout<<"Product Description:"<<ProductDescription<<endl;

}

//Administrators class
class Administator{
	private:
		int AdminId;
		char AdminName[30];
	
	public:
		Administator();
		Administator(int adminid,const char adminname[30]);
		void displayAdminDetails();
};	

//class implentation of Administrator
Administator::Administator(){}
Administator::Administator(int adminid,const char adminname[30]){
	AdminId=adminid;
	strcpy(AdminName,adminname);

}
void Administator::displayAdminDetails(){
	cout<<"Administrator ID:"<<AdminId<<endl;
	cout<<"Administrator Name:"<<AdminName<<endl;
}

//class of Pharmascist
class pharmacist{
	private:
		int pharmasistid;
		char pharmasistName[20];
	public:
		pharmacist();
		pharmacist(int pharmid,const char pharmname[]);
		void displaypharmasistDetails();
};

//class implentation of Pharmasist
pharmacist::pharmacist(){}
pharmacist::pharmacist(int pharmid,const char pharmname[]){
	pharmasistid=pharmid;
	strcpy( pharmasistName,pharmname);
}
void pharmacist::displaypharmasistDetails(){
	cout<<"Pharmasist ID:"<<pharmasistid<<endl;
	cout<<"Pharmasist Name:"<<pharmasistName<<endl;
	
}

//report class
class report {
	private:
		int reportId;
	public:
		report();
		report(int ctno);
		void displayReportDetails();
};

//class implentation of report
report::report(){}
report::report(int repno){
	reportId=repno;
}
void report::displayReportDetails(){
	cout<<"Report ID :"<<reportId<<endl;
}

//order class
class order {
	private:
		int cartId;
	public:
		order();
		order(int ctno);
		void displayOrderDetails();
		
};

//order class implemetation
order::order(){}
order::order(int ctno){
	cartId=ctno;
}

void order::displayOrderDetails(){
	cout<<"Order ID :"<<cartId<<endl;
	
}


//Main Program
int main()
{
	
	UnregisteredUser*u;
	u=new UnregisteredUser("Sasrika Neewin","sasri2001@gmail","New york,America" );
	u->regdetails();
	cout<<endl;
	
	RegisteredUser *r1;
	r1=new RegisteredUser(111,"Nimal_03","**********");
	r1->displayRegisterUserDetails();
	cout<<endl;
	
	cart *c1;
	c1=new cart(8887);
	c1->displayCart();
	cout<<endl;
	
	payment *pay1;
	pay1=new payment(222,230.00);
	pay1->paymentDetails();
	cout<<endl;
	
	enquiries *enq1;
	enq1=new enquiries(333,"About Product Expiry","When is the expiry date");
	enq1->displayEnquiryDetails();
	cout<<endl;
	
	product *prd1;
	prd1=new product(444,"Vitamin C","antioxidant protects cells");
	prd1->displayProductDetails();
	cout<<endl;
	
	Administator *ad1;
	ad1=new Administator(555,"Thilini Fonseka");
	ad1->displayAdminDetails();
	cout<<endl;
	
	pharmacist *phar1;
	phar1=new pharmacist(666,"kalana Gunasekara");
	phar1->displaypharmasistDetails();
	cout<<endl;
	
	report* rep1;
	rep1=new report(777);
	rep1->displayReportDetails();
	cout<<endl;
	
	order*odr1;
	odr1=new order(888);
	odr1->displayOrderDetails();
	cout<<endl;

	return 0;
}






