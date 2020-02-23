#include <iostream>

using namespace std;


int LinearSearch(int arr[],int start,int value);
int main(){

  int array[]={2,12,24,33,66,86,80};
 int answer=LinearSearch(array,0,80);

 cout<<answer<<endl;

	return 0;
}



int LinearSearch(int arr[],int start,int value){

   int lenght = 7;
   if(start== lenght){
   	return -1;
   }
	 if(arr[start]== value){
		return start;
	}
	else {
		LinearSearch(arr,start + 1,value);
	}



}
