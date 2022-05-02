#include<stdio.h>
#include<string.h>
struct hospital{
char patient_name[15],special_doctor[15],normal_doctor[15],doctor_name[15],non_emergency_diagnosis[15],emergency_diagnosis[15],diseases_diagnosed[15],address[515],icu_room[15],normal_room[15],room_type[15],burnt_case[15],normal_case[15],case_type[15],contact_number[15];
int age,room_number,no_p_patient;
}detail;
int main()
{
int total_bill=10000,visiting_charge=2000;
int a,b,c,d,e,f,g,h;
struct hospital detail;
printf("1) Patients Name:");
gets(detail.patient_name);
printf("2) Age:");
scanf("%d",&detail.age);
if(detail.age<60 && detail.age>0)
{
total_bill=total_bill;
}
else
{
total_bill=total_bill-total_bill*0.2;
}
printf("3) Specific Doctor(Yes Or No):");
gets(detail.special_doctor);
a = strcmp(detail.special_doctor,"yes");
if(a==0){
printf("Doctor Name :");
scanf("%s",&detail.doctor_name);
total_bill=total_bill-total_bill*0.02;
}
printf("Normal Doctor(yes Or no):");
scanf("%s",&detail.normal_doctor);
e = strcmp(detail.normal_doctor,"yes");
if(e==0){
printf("Doctor Name :");
scanf("%s",&detail.doctor_name);
total_bill=total_bill;
}
printf("4) ICU room(yes Or no):");
scanf("%s",&detail.icu_room);
b = strcmp(detail.icu_room,"yes");
if(b==0){
printf("Room Type(ICU):");
scanf("%s",detail.room_type);
total_bill=total_bill+2000;
}
printf(" Normal room(yes Or no):");
scanf("%s",&detail.normal_room);
f = strcmp(detail.normal_room,"yes");
if(f==0){
printf("Room Type(Normal):");
scanf("%s",&detail.room_type);
total_bill=total_bill;
}
printf("5) Room Number:");
scanf("%d",&detail.room_number);
printf("6) Emergency Diagnosis(yes Or no):");
scanf("%s",&detail.emergency_diagnosis);
c = strcmp(detail.emergency_diagnosis,"yes");
if(c==0){
printf("Diseases Diagnosed:");
scanf("%s",detail.diseases_diagnosed);
total_bill=total_bill;
}
printf("Non Emergency Diagnosis(yes Or no):");
scanf("%s",&detail.non_emergency_diagnosis);
g = strcmp(detail.non_emergency_diagnosis,"yes");
if(g==0){
printf("Diseases Diagnosed:");
scanf("%s",&detail.diseases_diagnosed);
total_bill=total_bill+visiting_charge;
}
printf("7) Burnt Case(yes Or no):");
scanf("%s",detail.burnt_case);
d = strcmp(detail.burnt_case,"yes");
if(d==0){
printf("Case Type(Burnt):");
scanf("%s",&detail.case_type);
total_bill=total_bill-total_bill*0.1;
}
printf("Normal case(yes Or no):");
scanf("%s",&detail.normal_case);
h = strcmp(detail.normal_case,"yes");
if(h==0){
printf("Case Type(Normal):");
scanf("%s",&detail.case_type);
total_bill=total_bill;
}
printf("8) No Of Person With Patient:");
scanf("%d",&detail.no_p_patient);
printf("9) Contact Number:");
scanf("%s",&detail.contact_number);
printf("10) Address:");
scanf("%s",&detail.address);
printf("--------------------------------------------Output(BILL)---------------------------------------------\n");
printf("Patients\tContact\t\tDoctor\t\tAddress\t\tAge\tCase\n");
printf("Name\t\tNumber\t\tName\t\t\t\t\tType");
printf("\n%s",detail.patient_name);
printf("\t\t%d",detail.contact_number);
printf("\t%s",detail.doctor_name);
printf("\t\t%s",detail.address);
printf("\t%d",detail.age);
printf("\t%s\n\n",detail.case_type);
printf("No. Of person\tDiseases\tRoom Type\tTotal Bill To\n");
printf("with patient\tDiagnosed\t\t\tbe payed\n");
printf("\n%d",detail.no_p_patient);
printf("\t\t%s",detail.diseases_diagnosed);
printf("\t\t%s",detail.room_type);
printf("\t\t%d",total_bill);
}