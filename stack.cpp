#include<iostream>
#define MAX 50
#define false 0

using namespace std;

char stack [MAX];
int top1,top2;

void init(){
	top1 = 0;
	top2= MAX+1;
	
}
 int full (void){
 	if (top1+1 >=top2){
 		return true;
	 }else{
	 	return false;
	 }
 }
 
 int empty (int nomorstack){
 	switch (nomorstack){
 		case 1 :
 			if (top1 == 0){
 				return true;
			 }else {
			 	return false;
			 }
			 break;
		case 2 :
			if (top2 == MAX + 1){
				return true;
			}else {
				return false;
			}
			break;
		default: printf ("Nomor stack salah");
		break;
	 }
 }
 
 void clear (int nomorstack){
 	switch (nomorstack){
 		case 1 :
 			top1 = 0;
 			break;
 		case 2 :
 			top2 = MAX+1;
 			break;
 		default : printf ("nomor stack salah");
 		break;
	 }
 }
 
 void push (char data, int nomorstack){
 	if(!full()){
 		switch(nomorstack){
 			case 1:
 				top1++;
 				stack[top1]=data;
 				break;
 			case 2:
 				top2--;
 				stack[top2]=data;
 				break;
 			default : printf ("\nNomor stack salah");
 			    break;
		 }
	 } else {
	 	printf ("\nStack penuh");
	 }
 }
 
 char pop (int nomorstack){
 	char data;
 	if (!empty (nomorstack)){
 		switch (nomorstack){
 			case 1:
 				data = stack[top1];
 				top1--;
 				return data;
 				break;
 			case 2:
 				data = stack[top2];
 				top2++;
 				return data;
 				break;
 			default : printf ("\nNomor stack salah");
 			break;
		 }
	 }else{
	 	printf("\nstack masih kosong");
	 }
	 return 0;
 }
 
 void display (){
 	if ((top1 = 0) && (top2 = MAX+1)) {std :: cout <<"(empty)\n"; return; }
 	for (int t = 0; t < MAX ; t++) std :: cout <<stack[t] << " ";
 	std::cout << "\n";
 }
 
 int main (){
 	init ();
 	push ('a', 1);
 	push('n',1);
 	push ('u',1);
 	
 	std :: cout <<"Hasil pop stack pertama : "<<pop(1)<<"\n";
 	display ();
 	
 	std::cout <<"\n";
 	push ('*',2);
 	push ('s',2);
 	push ('e',2);
 	push ('m',2);
 	push ('e',2);
 	push ('g',2);
 	
 	std :: cout <<"hasil pop stack kedua : "<<pop(2)<<"\n";
 	display();
 	
 	return 0;
 }
