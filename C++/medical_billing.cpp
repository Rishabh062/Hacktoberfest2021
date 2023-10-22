#include <iostream>
#include <stdlib.h>
using namespace std;

class patient{
	public:
		string patientID;
		string PName;
		
		void getPatientInfo();
		void putPatientInfo();
		void makeAppointment();
		void Diagnosis();
		void Billing();
		void printBill();
	
	private:
		string Address;
		string Gender;
		int Phone;
		string BloodGroup;
		string doctor_Name;
		string app_date;
		string DiagnosisInfo;
		string MedicineInfo;
		float doctorFee;
		float medicine_charge;
		float Total;
	};

void patient :: getPatientInfo()
{
		cout<<endl<<"Kindly enter patient ID: ";
		cin>>patientID;
		cout<<"Kindly enter patient name: ";
		cin>>PName;
		cout<<"Kindly enter patient address: ";
		cin>>Address;
		cout<<"Kindly enter patient gender: ";
		cin>>Gender;
		cout<<"Kindly enter patient phone number: ";
		cin>>Phone;
		cout<<"Kindly enter patient blood group: ";
		cin>>BloodGroup;
}

void patient :: putPatientInfo()
{
	cout<<endl<<"Patient ID: "<<patientID;
	cout<<endl<<"Patient Name: "<<PName;
	cout<<endl<<"Patient Address: "<<Address;
	cout<<endl<<"Patient Gender: "<<Gender;
	cout<<endl<<"Patient Phone Number: "<<Phone;
	cout<<endl<<"Patient Blood Group: "<<BloodGroup<<endl;
}

void patient :: makeAppointment()
{
	cout<<endl<<"Kindly enter Doctor Name: ";
	cin>>doctor_Name;
	cout<<"Kindly enter Appointment Date: ";
	cin>>app_date;
}

void patient ::	Diagnosis()
{
	cout<<endl<<"Kindly enter Diagnosis Info: ";
	cin>>DiagnosisInfo;
	cout<<"Kindly enter Medicine Info: ";
	cin>>MedicineInfo;
}

void patient :: Billing()
{
	cout<<endl<<"Kindly enter Doctor Fee: ";
	cin>>doctorFee;
	cout<<"Kindly enter Medicine Charges: ";
	cin>>medicine_charge;
	Total=doctorFee+medicine_charge;
}

void patient ::	printBill()
{
	cout<<endl<<"Medical Bill";
	cout<<endl<<"------------";
	cout<<endl<<"Patient ID: "<<patientID<<endl;
	cout<<endl;
	cout<<"1.Doctor Fees: "<<doctorFee<<endl;
	cout<<"2.Medicine Charges: "<<medicine_charge<<endl;
	cout<<endl;
	cout<<"Total: "<<Total<<endl; 
	cout<<"Thank you"<<endl;
}

int main()
{
	int choice;
	 patient obj;

	
	cout<<endl<<"         MEDICAL CLINIC MENU";
	cout<<endl<<"         -------------------";
	cout<<endl<<"1.Get Patient Info \t 2.Put Patient Info"<<endl;
	cout<<"3.Make Appointment \t 4.Diagnosis       "<<endl;
	cout<<"5. Billing         \t 6. print Bill     "<<endl;
	cout<<"7.Exit"<<endl;
	
	while(1)
	{
		cout<<endl<<"Kindly enter your choice: ";
		cin>>choice;
		
		switch(choice) {
		
			case 1:
				obj.getPatientInfo();
				break;
				
			case 2:
				obj.putPatientInfo();
				break;
				
			case 3:
				obj.makeAppointment();
				break;
				
			case 4:
				obj.Diagnosis();
				break;
				
			case 5:
				obj.Billing();
				break;
				
			case 6:
				obj.printBill();
				break;
				
			case 7:
				cout<<endl<<"Sucessfully exiting. Thank you. "<<endl;
				exit(0);
				
			default:
				cout<<endl<<"Invalid choice. "<<endl;
				break;
			}
		}
}
			

