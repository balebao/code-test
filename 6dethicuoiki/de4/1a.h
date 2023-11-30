	// bổ sung các phương thức cần thiết để giải quyết các vấn đề về thuộc tínhcon trỏ cho lớp đối tượng Bike.
    
    Bike(){
		char s[4]="Bike";
		this->brand=new char[5];
		for(int i=0;i<5;i++){
			this->brand[i]=s[i];
		}
	}
	Bike(char s[]){
		this->brand=new char[strlen(s)+1];
		for(int i=0;i<strlen(s);i++){
			this->brand[i]=s[i];
		}
		this->brand[strlen(s)]=0;
	}
	~Bike(){
		if(this->brand){
			delete[] this->brand;
		}
	}
	EBike(char s[]):Bike("EBike"){}