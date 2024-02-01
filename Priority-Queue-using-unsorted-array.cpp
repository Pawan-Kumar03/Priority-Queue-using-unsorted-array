/*
  Task 01: (Priority Queue using unsorted array)
    
    Name : Pawan Kumar
    CMS : 023-21-0136
    Section - C

*/

#include <iostream>
using namespace std;
class PriorityQueueUsingArray   
{   
    public:
    // create an array
    int array[5];
    // constructor
     PriorityQueueUsingArray() {
	// initialize an array
    for (int i = 0; i < 5; i++)
        array[i]=0;
    }
    int index=0;
     void insert(int data) {    	 
    	// insert data in array in any order
    	// handle all possible exceptions/errors      
        cout<<"Inserting : "<<data<<endl;  
    	array[index++]=data;
    }
    
     int extractMax() {   	 
    	// return and remove max value from array
    	// handle all possible exceptions/errors
        int temp=array[0];
        int indexMax=-1;
        for (int i = 1; i < index; i++)
        {
            if (array[i]>temp)
            {
                temp=array[i];
                indexMax=i;
            }
        }
        int x=-1;
        for (int i = indexMax; i < index-1; i++)
        {
            array[i]=array[i+1];
        }
        index--;
        return temp;
    }
    
     int getMax() {      	 
    	// just return max value from array
    	// handle all possible exceptions/errors
        int temp=array[0];
        for (int i = 1; i < index; i++)
            if (array[i]>temp)
                temp=array[i];
        return temp;
    }
    
     bool searchData(int data) {      	 
    	// search data from array
    	// handle all possible exceptions/errors
        bool check=false;
        for (int i = 0; i < index; i++)
            if (array[i]==data)
            check=true;
        return check;
    }
    // PrintPriortyQueue 
    void printPriortyQueue()
    {
        for (int i = 0; i < index; i++)
            cout<<array[i]<<" ";
    }
};
int main()
{
    
        // Test the main method by creating object for PriorityQueueUsingArray class
    	 PriorityQueueUsingArray* pQ=new PriorityQueueUsingArray();
   
    	// insert some values using insert method
    	
    pQ->insert(10);
    pQ->insert(2);
    pQ->insert(35);
    pQ->insert(42);
    pQ->insert(51);
    	
    	// call extractMax method and print output
    	cout<<"Max Values also Extracted : "<<pQ->extractMax()<<endl;
    	pQ->printPriortyQueue();
        cout<<endl;
    	// call extractMax method and print output
    	cout<<"Max Values also Extracted : "<<pQ->extractMax()<<endl;
    	pQ->printPriortyQueue();
        cout<<endl;
    	
    	// insert some values using insert method
    	pQ->insert(100);
        pQ->insert(5);
    	
    	// call getMax method and print output
    	cout<<"Max Values also Extracted : "<<pQ->extractMax()<<endl;
    	pQ->printPriortyQueue();
    	
    	
    	// call extractMax method and print output
    	cout<<"Max Values also Extracted : "<<pQ->extractMax()<<endl;
    	pQ->printPriortyQueue();
    	
    	  
    return 0;
}
