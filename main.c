#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// global olmasi icin burada tanimladik yoksa display veriye erisemiyordu 
    typedef struct Person{
		char* name;
		int age;
	}person; // typedef kullandik artik struct Person yazmak yerine bu degeri kullanabiliriz 
    typedef struct Student {
    	int sNo;
    	struct Person p ; 
    	
	}student;

     
int main() {
	struct Person p1;
	p1.name="Derya";
	p1.age=20;

	displayPerson(p1);
	
	printf("-----------------------------\n");
	
	student s1;
	s1.sNo=2000;
	s1.p.name="Ali";
	s1.p.age=19;
	displayStudent(s1);
	
    printf("-----------------------------\n");
    // person* bir pointerdir bu p_ptr de adresi saklayacaktir degeri verilecek olan birseyin adresini saklar 
	// person* p_ptr= &p1; p_ptr suan &p1'in adresini tutuyor 
    // normalde adres icini gosterirken printf icine *ptr yazinca gosterir ama struct da isler farkli 
    // onda struct icini gostermek istersek ptr -> struct ici degisken adi yazilir 
	person* p_ptr= &p1; 
	printf("Name: %s\n",p_ptr -> name );
	printf("Age: %d\n", p_ptr -> age);
	
	return 0;
}
void displayPerson(person p ) // struct Person yazmak yerine typedef sayesinde buraya kisa isim verebildik 
{
	printf("Name: %s\n",p.name);
	printf("Age: %d\n",p.age);	
}
void displayStudent(student s){
	printf("School Number: %d\n",s.sNo);
	printf("Name: %s\n",s.p.name);
	printf("Age: %d\n",s.p.age);
}
