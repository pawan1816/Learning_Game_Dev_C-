#include<iostream>


void pp(int & a){
	std::cout<<"This is the value=> "<<a<<" location => "<<&a<<" Size = "<<sizeof(a)<<"\n";
}


// Static Array for int only

class IntArray
{
	size_t m_size;
	int * m_arr;
	

public:
	IntArray(size_t size)
		: m_size(size)
		, m_arr(new int[m_size])
	{
		std:: cout<<"array constructor \n";
	}
	~IntArray()
	{
		delete [] m_arr;
		std:: cout<<"Array is distructed for static\n";
	}
	int get(size_t index) const
	{
		return m_arr[index];
	}	
	void set(size_t index,int value)
	{
		m_arr[index]=value;
	}

	void print() const
	{	
		for(int i=0;i<m_size+2;i++)
		{
			std:: cout<<i<<" "<<m_arr[i]<<"\n";
		}
	}
	
	
};


// Dynamic array for all the data type

template <typename T>
class DynamicArray
{
	size_t m_size;
	T * m_arr;
	

public:
	DynamicArray(size_t size)
		: m_size(size)
		, m_arr(new T[size])
	{
		std:: cout<<"array constructor \n";
	}
	~DynamicArray()
	{
		delete [] m_arr;
		std:: cout<<"Array is distructed \n";
	}
	T get(size_t index) const
	{
		return m_arr[index];
	}	
	void set(size_t index,T value)
	{
		m_arr[index]=value;
	}

	void print() const
	{	
		for(int i=0;i<m_size;i++)
		{
			std:: cout<<i<<" "<<m_arr[i]<<"\n";
		}
	}
	const T & operator [] (size_t index) const
	{
		return m_arr[index];
	}
	
	T & operator [] (size_t index)
	{
		return m_arr[index];
	}
};



int main(int argc, char* argv[]){

//    int a=18;
//    int b=25;
//    pp(a);
//    pp(b);
    


//    std:: cout<<"Static array Pass By reference "<<std::endl;


//    int test[10];// if we don't put the "=()" it will store the value as they are in address. means value and address will be same.
//    for(size_t i=0;i<10;i++)
//    {
//        pp(test[i]);
//    }


    // 
//    int arr[10]={};
    
//    for(size_t i=0;i<10;i++)
//    {
//        pp(arr[i]);
//    }
  

    // Heap array
//    std:: cout<<"Dynamic array Pass By reference"<<std::endl;

//    int* h_arr=new int[10];

//    for(size_t i=0;i<10;i++)
//    {
//        pp(h_arr[i]);
//    }













//	int a=10;
//	int b=19;


//	int* pa=&a;
//	int* pb=&b;

//	pp(a);
//	pp(b);

//	*(pa)=17;
//	*(pa-1)=17;

//	pp(a);
//	pp(b);

	
	std::cout<<"static Array \n"<<"\n"<<"\n";

	IntArray myArray(10);
	myArray.set(0,0);
	myArray.set(1,0);
	myArray.set(2,9);
	myArray.set(3,67);
	myArray.print();

	std::cout<<"Dynamic Array \n"<<"\n"<<"\n";

	DynamicArray<int> Darri(10);
	Darri.set(0,1);
	Darri.set(1,2);
	Darri.print();
	DynamicArray<std::string> Darrs(10);
	Darrs.set(0,"Pawan");
	Darrs.set(1,"jagrity");
	Darrs.print();
	DynamicArray<float> Darrf(10);
	Darrf.set(0,86.6);
	Darrf.set(1,99.99);
	Darrf.print();


	std:: cout<<"Operators\n";

	Darri[2]=3;
	Darrs[2]="CU";
	Darrf[2]=100.000;
	Darri.print();
	Darrs.print();
	Darrf.print();
	
	const DynamicArray<int> p(3);
//	p[0]=17; 
	std:: cout<<"Operator \n"<<p[0]<<"\n"<<p[1]<<"\n"<<p[2]<<std::endl;


	std:: cout<<"Operators OverLoading it does not allow to change the data\n";
	
	
	const DynamicArray<int> pO(3);
//	p[0]=17; read only
	std:: cout<<"Operator \n"<<p[0]<<"\n"<<pO[1]<<"\n"<<p[2]<<std::endl;
	

	std:: cout<<"Operators OverLoading it allow to change the data\n";
	
	DynamicArray<int> p1L(3);
	p1L[0]=17;
	std:: cout<<"Operator OverLoading \n"<<p1L[0]<<"\n"<<p1L[1]<<"\n"<<p[2]<<std::endl;



}
